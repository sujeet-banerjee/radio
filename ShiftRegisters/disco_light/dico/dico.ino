#include <SPI.h>
//#include <nRF24L01.h>
//#include <RF24.h>
//#include <RF24_config.h>

#define NUM_SW 8

#define RF_CE   9
#define RF_CSN 10
#define RF_INTX_LED 6

#define SW_LATCH 4
#define SW_INTX 3

#define SCK 13
#define MISO 12
#define MOSI 11

#define RF_INTX 2
#define DEBUG_LED 5


boolean panelDisabled = true;

byte Input, Output=255, Check=1;
int j;

// NOTE: the "LL" at the end of the constant is "LongLong" type
const uint64_t pipe = 0xE8E8F0F0E1LL; // Define the transmit pipe

const int ledPin =  8;      // the number of the LED pin
const int ledPinFault =  7;      // the number of the LED pin

boolean isOn = true;
boolean isFaultOn = false;

boolean ledOn = false;

boolean rfDetectOn = false;

boolean dataReceived = false;
boolean switchPanelInterrupt = false;


int joystick[2];  // 2 element array holding Joystick readings

int last = joystick[1];

int currFocus = 0;

void setup(){
  pinMode(SCK, OUTPUT);//clock
  pinMode(MOSI, OUTPUT);//data to slaves
  pinMode(MISO, OUTPUT);//data to uC
  pinMode(SW_LATCH, OUTPUT);//latch
  pinMode(SW_INTX, INPUT);//Input from buttons

  pinMode(ledPin, OUTPUT);//Debugging  payload 
  pinMode(ledPinFault, OUTPUT); // Debugging missed payload
  pinMode(RF_INTX_LED, OUTPUT); /// Debugging RF intx on pin 2

  pinMode(DEBUG_LED, OUTPUT);//Debugging

  Serial.begin(57600);
  delay(200);
    
  delay(2000);
  
  
  // Bring back radio to Low (CSN = 1)
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
  
  
 //attachInterrupt(1, pin_read, RISING); 
 
 //attachInterrupt(0, get_data, FALLING);
 
 panelDisable();
  
}//setup




void loop(){
  
  //Serial.println("LOOP");

  if(bitRead(Output, currFocus)==1)
  {
    bitWrite(Output, currFocus, 0);
  }
  else
  {
    bitWrite(Output, currFocus, 1);
  }
  
  currFocus++;
  currFocus = currFocus> (NUM_SW-1) ? 0:currFocus;

  
  SPI.transfer(Output);
  SPI.transfer(Check);
  digitalWrite(SW_LATCH, LOW);
  digitalWrite(SW_LATCH, HIGH);
  
  
  Serial.print("Check: ");
  Serial.print(Check);
  Serial.print(" | Output: ");
  Serial.println(Output); 
  
  delay(200);
  
  Check = Check << 1;
  Check = Check > 256 ? 1 : Check;
  Check = Check < 1 ? 1 : Check;

}//loop


 

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

