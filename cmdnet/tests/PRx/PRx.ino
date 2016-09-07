#include <nRF24L01.h>
#include <RF24.h>
#include <RF24_config.h>

#include <SPI.h>

#define RF_CE   9
#define RF_CSN 10
#define RF_INTX_LED 6

#define SW_LATCH 4
#define SW_INTX 3
#define SW_INTX_LED 7

#define SCK 13
#define MISO 12
#define MOSI 11

#define RF_INTX 2
#define DEBUG_LED 5

//Read from Serial into Buffer X
int x[10] = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0};

boolean radioPrint = true;

boolean doThis = false;
int doThisCount = 0;

int debugLog = 0;

boolean panelDisabled = true;

byte Input, Output = 255, Check = 1;
int j;

// NOTE: the "LL" at the end of the constant is "LongLong" type
const uint64_t pipe = 0xE8E8F0F0E1LL; // Define the transmit pipe

const int ledPin =  A0;      // the number of the LED pin
const int ledPinFault =  A1;      // the number of the LED pin

boolean isOn = true;
boolean isFaultOn = false;

boolean ledOn = false;

boolean rfDetectOn = false;
boolean swIntxDetectOn = false;

boolean dataReceived = false;
boolean switchPanelInterrupt = false;

RF24Debug radio(RF_CE, RF_CSN); // Create a Radio

//Data to pass-on
struct Mesg
{
  char nodeId;
  char compId;
  long data;
} msg;

void setup() {
  pinMode(SCK, OUTPUT);//clock
  pinMode(MOSI, OUTPUT);//data to slaves
  pinMode(MISO, OUTPUT);//data to uC
  pinMode(SW_LATCH, OUTPUT);//latch
  pinMode(SW_INTX, INPUT);//Input from buttons
  digitalWrite(SW_INTX, LOW); // Disable pull-up

  pinMode(ledPin, OUTPUT);//Debugging  payload
  pinMode(ledPinFault, OUTPUT); // Debugging missed payload
  pinMode(RF_INTX_LED, OUTPUT); /// Debugging RF intx on pin 2

  pinMode(SW_INTX_LED, OUTPUT); /// Debugging SW Intx on pin 3
  digitalWrite(SW_INTX_LED, LOW);

  pinMode(DEBUG_LED, OUTPUT);//Debugging

  Serial.begin(57600);
  delay(200);

  Serial.println("Nrf24L01 Receiver Starting, with Switch-Panel...");

  radio.begin();
  radio.setCRCLength( RF24_CRC_16 ) ;
  radio.setAutoAck( true ) ;

  radio.openReadingPipe(1, pipe);
  //radio.enableDynamicPayloads();
  //radio.enableAckPayload();
  radio.printDetails();
  radio.startListening();

  delay(2000);

  /* 
   * Bring back radio to Low (CSN = 1) 
   */
  digitalWrite(RF_CSN, HIGH);

  SPI.setBitOrder(MSBFIRST);
  SPI.setDataMode(SPI_MODE0);
  SPI.setClockDivider(SPI_CLOCK_DIV4);

  SPI.begin();
  SPI.transfer(Output);
  SPI.transfer(255);
  digitalWrite(SW_LATCH, LOW);
  digitalWrite(SW_LATCH, HIGH);

  digitalWrite(RF_INTX_LED, LOW);

  attachInterrupt(1, pin_read, HIGH);

  attachInterrupt(0, get_data, FALLING);//kick things off by attachin the IRQ interrupt

  panelDisable();

}//setup


void get_data() { // get data start get data start get data start get data start get data start
  // this routine is called when the IRQ pin is pulled LOW by the NRF
  //Serial.println(" <<< ||INTERRUPT ||>>> ");
  dataReceived = true;
  digitalWrite(RF_INTX_LED, rfDetectOn ? HIGH : LOW);
  rfDetectOn = !rfDetectOn;

}

void loop() {

  //  if (doThis)
  //  {
  //    noInterrupts();
  //    pinMode(SW_INTX, INPUT);//Input from buttons
  //    digitalWrite(SW_INTX, LOW);
  //    delayMicroseconds(4000);
  //    doThis = false;
  //
  //    //Clean off the SW_INTX debug LED state as well
  //    //digitalWrite(SW_INTX_LED, LOW);
  //
  //    Serial.println(" -- Done This -- ");
  //    interrupts();
  //    //delayMicroseconds(200);
  //  }
  //  else
  //  {
  //    delayMicroseconds(300);
  //  }
  //
  //  if (debugLog++ > 3000)
  //  {
  //    debugLog = 0;
  //    Serial.println("LOOP: do work");
  //  }

  // SERIAL SW control
  int count = 0;
  byte readByte = 0;
  byte readRaw = 0;
  // Last character (or byte) read will always be a CRLF!
  while (Serial.available() > 0)
  {
    readRaw = Serial.read();
    readByte = readRaw - 48;
    if (readByte >= 0 && readByte < 10)
      x[count++] = readByte;

    Serial.print("Read-raw x1: ");
    Serial.println(readRaw);
  }


  /*
     Collate all digits into the most-significant digit
     as integer
  */
  for (int i = 1; i < count; i++)
  {
    *x =  *x * 10 + *(x + i);
    // Leave the most-significant digit; reset others to zero
    x[i] = 0;
  }

  (*x)--;

  if (*x > -1 && *x < 8)
  {
    Serial.print("By Bluetooth; S/W No: ");
    Serial.print(*x);

    if (bitRead(Output, *x) == 1)
    {
      Serial.println(" OFF");
      bitWrite(Output, *x, 0);
    }
    else
    {
      Serial.println("  ON");
      bitWrite(Output, *x, 1);
    }

    // Now actually s/w ON or OFF
    noInterrupts();
    SPI.transfer(Output);
    SPI.transfer(255);
    digitalWrite(SW_LATCH, LOW);
    digitalWrite(SW_LATCH, HIGH);
    delayMicroseconds(300);
    interrupts();
  }

  *x = -1;

  // RADIO
  if (isPanelDisabled())
  {
    ledOn = !ledOn;
    digitalWrite(DEBUG_LED, ledOn ? HIGH : LOW);

    if (switchPanelInterrupt)
    {
      // Reset immediately
      switchPanelInterrupt = false;
    }

    if (dataReceived)
    {
      // Reset immediately for the next interrupt
      dataReceived = false;

      delay(200);
      if (radioPrint)
        Serial.println("................");

      if ( radio.available())
      {
        // Read the data payload until we've received everything
        bool done = false;

        digitalWrite(10, HIGH);

        while (!done)
        {
          // Fetch the data payload
          done = radio.read(&msg, sizeof(msg));

          Serial.print("=> RECV: nodeId = ");
          Serial.print(msg.nodeId);
          Serial.print(" compId = ");
          Serial.print(msg.compId);
          Serial.print(" data = ");
          Serial.print(msg.data);
          Serial.print(" ; Size=");
          Serial.println(sizeof(msg));
        }
      }
    }
  }

}//loop


void pin_read()
{
  //Debug
  digitalWrite(SW_INTX_LED, swIntxDetectOn ? HIGH : LOW);
  swIntxDetectOn = !swIntxDetectOn;

  //Disable Radio
  digitalWrite(RF_CSN, HIGH);

  panelEnable();

  Serial.print("#");
  for (j = 0; j < 200; j++)
    delayMicroseconds(300);

  doThisCount++;

  if (doThis && doThisCount > 3)
  {
    Serial.print(" =X= ");
    pinMode(SW_INTX, OUTPUT);//Input from buttons
    delayMicroseconds(4000);
    digitalWrite(SW_INTX, LOW);
    delayMicroseconds(4000);
  }

  if (!doThis && doThisCount > 7)
  {
    doThisCount = 0;
    //    pinMode(SW_INTX, OUTPUT);//Input from buttons
    Serial.print("|");
    //    digitalWrite(SW_INTX, LOW);
    for (j = 0; j < 100  ; j++)
      delayMicroseconds(300);
    doThis = true;

    //    pinMode(SW_INTX, INPUT);//Input from buttons
    //    digitalWrite(SW_INTX, LOW);
    //    delayMicroseconds(1000);
    //    noInterrupts();
  }

  Check = 1;
  for (j = 0; j < 8; j++)
  {

    SPI.transfer(Output);
    SPI.transfer(Check);
    digitalWrite(SW_LATCH, LOW);
    // => Introduced
    delayMicroseconds(30);
    digitalWrite(SW_LATCH, HIGH);

    delayMicroseconds(100);


    if (digitalRead(3) == HIGH)
    {
      Serial.print("PIN 3 high; Bit: ");
      Serial.print(j);
      if (bitRead(Output, j) == 1)
      {
        Serial.println(" HI");
        bitWrite(Output, j, 0);
      }
      else
      {
        Serial.println(" LO");
        bitWrite(Output, j, 1);
      }
    }//check

    Check = Check << 1;
    //delayMicroseconds(100);
  }//For-j


  delayMicroseconds(300);

  SPI.transfer(Output);
  SPI.transfer(255);
  digitalWrite(SW_LATCH, LOW);
  digitalWrite(SW_LATCH, HIGH);

  // +> Increased
  delayMicroseconds(1000);

  while (digitalRead(3) == HIGH) {
    for (j = 0; j < 10; j++)
      delayMicroseconds(100);
  }

  switchPanelInterrupt = true;

  panelDisable();


}//pin_read

void panelDisable()
{
  panelDisabled = true;
  digitalWrite(SW_LATCH, LOW);
}

void panelEnable()
{
  panelDisabled = false;
  //digitalWrite(SW_LATCH, HIGH);
}

boolean isPanelDisabled()
{
  return panelDisabled ;
}

