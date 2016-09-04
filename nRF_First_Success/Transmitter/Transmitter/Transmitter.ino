

#include <nRF24L01.h>
#include <RF24.h>
#include <RF24_config.h>



/* YourDuinoStarter Example: nRF24L01 Transmit Joystick values
 - WHAT IT DOES: Reads Analog values on A0, A1 and transmits
   them over a nRF24L01 Radio Link to another transceiver.
 - SEE the comments after "//" on each line below
 - CONNECTIONS: nRF24L01 Modules See:
 http://arduino-info.wikispaces.com/Nrf24L01-2.4GHz-HowTo
   1 - GND
   2 - VCC 3.3V !!! NOT 5V
   3 - CE to Arduino pin 9
   4 - CSN to Arduino pin 10
   5 - SCK to Arduino pin 13
   6 - MOSI to Arduino pin 11
   7 - MISO to Arduino pin 12
   8 - UNUSED
   - 
   Analog Joystick or two 10K potentiometers:
   GND to Arduino GND
   VCC to Arduino +5V
   X Pot to Arduino A0
   Y Pot to Arduino A1
   
 - V1.00 11/26/13
   Based on examples at http://www.bajdi.com/
   Questions: terry@yourduino.com */

/*-----( Import needed libraries )-----*/
#include <SPI.h>

/*-----( Declare Constants and Pin Numbers )-----*/
#define CE_PIN   9
#define CSN_PIN 10
//#define JOYSTICK_X A0
//#define JOYSTICK_Y A1

/*
 * Indicators
 */
 #define LED_INTX 8
 #define LED_TX_OK 7
 #define LED_TX_FAIL 6
 #define LED_LOOP 4

// NOTE: the "LL" at the end of the constant is "LongLong" type
const uint64_t pipe = 0xE8E8F0F0E1LL; // Define the transmit pipe


/*-----( Declare objects )-----*/
RF24Debug radio(CE_PIN, CSN_PIN); // Create a Radio
/*-----( Declare Variables )-----*/
int joystick[2];  // 2 element array holding Joystick readings

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
  Serial.print((status & _BV(RX_DR))? 1: 0);
  Serial.print(F(" TX_DS="));
  Serial.print((status & _BV(TX_DS))? 1: 0);
  Serial.print(F(" MAX_RT="));
  Serial.print((status & _BV(MAX_RT))? 1: 0);
  Serial.print(F(" RX_P_NO="));
  Serial.print((status >> RX_P_NO) & B111);
  Serial.print(F(" TX_FULL="));
  Serial.println((status & _BV(TX_FULL))? 1: 0);
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
  Serial.begin(115200);
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

void get_data(){// get data start get data start get data start get data start get data start
  // this routine is called when the IRQ pin is pulled LOW by the NRF
  //Serial.println(" <<< INTERRUPT >>> ");
  digitalWrite(LED_INTX, HIGH);
  for(int i=0; i<1000 ;i++)
    delayMicroseconds(100);
  
  digitalWrite(LED_INTX, LOW);
  for(int i=0; i<1000 ;i++)
    delayMicroseconds(40);
    
  digitalWrite(LED_INTX, HIGH);
  for(int i=0; i<1000 ;i++)
    delayMicroseconds(100);
    
  digitalWrite(LED_INTX, LOW);
  
  // Status
  bool st_ok, st_failed, rx_ready;
  
  
  // The below code snippet expands "whatHappened"

  
  uint8_t stt2 = write_register(STATUS,_BV(RX_DR) | _BV(TX_DS) | _BV(MAX_RT) );
  
  st_ok = stt2 & _BV(TX_DS);
  st_failed = stt2 & _BV(MAX_RT);
  rx_ready = stt2 & _BV(RX_DR);
  
  if(st_ok)
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

int valY = 808;
int valX = 333;
void loop()   /****** LOOP: RUNS CONSTANTLY ******/
{
  delay(20);
  Serial.println("................");
  
  joystick[0] = valX;
  joystick[1] = valY++;
  
  valX = valY>3000?++valX:valX;
  valY = valY>3000?101:valY;
  
  Serial.print("=> Sending ");
  Serial.print("X = ");
  Serial.print(joystick[0]);
  Serial.print(" Y = ");      
  Serial.println(joystick[1]);
  
  radio.write( joystick, sizeof(joystick) );
  delay(200);
  
  // Loop indication
  digitalWrite(LED_LOOP, HIGH);
  delay(200);
  digitalWrite(LED_LOOP, LOW);
  
  
  
  uint8_t stt = write_register(STATUS,_BV(RX_DR) | _BV(TX_DS) | _BV(MAX_RT) );
  print_status(stt);
  Serial.println(stt & _BV(TX_DS)? F("OOOOOOKKKKKKK ...OK."): F("FZFZFZFZFZFZFZ ...FAIL"));

}//--(end main loop )---

/*-----( Declare User-written Functions )-----*/

//NONE
//*********( THE END )***********
