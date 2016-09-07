#include <nRF24L01.h>
#include <RF24.h>
#include <RF24_config.h>

#include <SPI.h>

//Verbosity
#define VERBOSE true

// Radio Pins
#define CE_PIN   9
#define CSN_PIN 10


// LED Indicators
#define LED_INTX 8
#define LED_TX_OK 7
#define LED_TX_FAIL 6
#define LED_LOOP 4

// NOTE: the "LL" at the end of the constant is "LongLong" type
const uint64_t pipe = 0xE8E8F0F0E1LL;

// Create a Radio
RF24Debug radio(CE_PIN, CSN_PIN); 

//Data to pass-on
struct Mesg
{
  char nodeId;
  char compId;
  long data;
} req;


void print_hex_byte(uint8_t b)
{
  Serial.print(F(" 0x"));
  if (b < 16)
    Serial.print('0');
  Serial.print(b, HEX);
}

void print_status(uint8_t status)
{
  Serial.println("\n\n===  STT ===");
  print_hex_byte(status);
  Serial.print(F(" RX_DR="));
  Serial.print((status & _BV(RX_DR)) ? 1 : 0);
  Serial.print(F(" TX_DS="));
  Serial.print((status & _BV(TX_DS)) ? 1 : 0);
  Serial.print(F(" MAX_RT="));
  Serial.print((status & _BV(MAX_RT)) ? 1 : 0);
  Serial.print(F(" RX_P_NO="));
  Serial.print((status >> RX_P_NO) & B111);
  Serial.print(F(" TX_FULL="));
  Serial.println((status & _BV(TX_FULL)) ? 1 : 0);
}

uint8_t write_register(uint8_t reg, uint8_t value)
{
  uint8_t status;

  digitalWrite(CSN_PIN, LOW);
  status = SPI.transfer( W_REGISTER | ( REGISTER_MASK & reg ) );
  SPI.transfer(value);
  digitalWrite(CSN_PIN, HIGH);

  return status;
}

void setup()   /****** SETUP: RUNS ONCE ******/
{
  Serial.begin(57600);
  delay(200);

  pinMode(CE_PIN, OUTPUT);
  digitalWrite(CE_PIN, HIGH);
  pinMode(CSN_PIN, OUTPUT);

  Serial.println("Nrf24L01 Transmitter Starting...");
  radio.begin();
  radio.openWritingPipe(pipe);
  radio.printDetails();
  delay(2000);
  attachInterrupt(0, get_data, FALLING);//kick things off by attachin the IRQ interrupt

  //Indicators
  pinMode(LED_INTX, OUTPUT);
  pinMode(LED_LOOP, OUTPUT);
  pinMode(LED_TX_OK, OUTPUT);
  pinMode(LED_TX_FAIL, OUTPUT);

}//--(end setup )---

void get_data()
{
  // get data start get data start get data start get data start get data start
  // this routine is called when the IRQ pin is pulled LOW by the NRF
  //Serial.println(" <<< INTERRUPT >>> ");
  digitalWrite(LED_INTX, HIGH);
  for (int i = 0; i < 1000 ; i++)
    delayMicroseconds(100);

  digitalWrite(LED_INTX, LOW);
  for (int i = 0; i < 1000 ; i++)
    delayMicroseconds(40);

  digitalWrite(LED_INTX, HIGH);
  for (int i = 0; i < 1000 ; i++)
    delayMicroseconds(100);

  digitalWrite(LED_INTX, LOW);

  // Status
  bool st_ok, st_failed, rx_ready;


  // The below code snippet expands "whatHappened"
  uint8_t stt2 = write_register(STATUS, _BV(RX_DR) | _BV(TX_DS) | _BV(MAX_RT) );

  st_ok = stt2 & _BV(TX_DS);
  st_failed = stt2 & _BV(MAX_RT);
  rx_ready = stt2 & _BV(RX_DR);

  if (st_ok)
  {
    digitalWrite(LED_TX_OK, HIGH);
    digitalWrite(LED_TX_FAIL, LOW);
  }
  else
  {
    digitalWrite(LED_TX_OK, LOW);
    digitalWrite(LED_TX_FAIL, HIGH);
  }
}

char valY = 808;
int valX = 333;
void loop()  
{
  delay(20);
  Serial.println("................");

  req.nodeId = valX;
  req.compId = valX;
  req.data = valY++;

  valX = valY > 3000 ? ++valX : valX;
  valY = valY > 3000 ? 101 : valY;

  Serial.print("=> SND: ");
  Serial.print("nodeId = ");
  Serial.print(req.nodeId);
  Serial.print(" compId = ");
  Serial.print(req.compId);
  Serial.print(" data = ");
  Serial.print(req.data);
  Serial.print(" ; Size=");
  Serial.println(sizeof(req));

  radio.write(&req, sizeof(req));
  delay(200);

  // Loop indication
  digitalWrite(LED_LOOP, HIGH);
  delay(200);
  digitalWrite(LED_LOOP, LOW);

  if(VERBOSE)
    radio.printDetails();

}//--(end main loop )---


