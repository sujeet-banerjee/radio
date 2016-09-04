

#include <nRF24L01.h>
#include <RF24.h>
#include <RF24_config.h>



/* YourDuinoStarter Example: nRF24L01 Receive Joystick values

 - WHAT IT DOES: Receives data from another transceiver with
   2 Analog values from a Joystick or 2 Potentiometers
   Displays received values on Serial Monitor
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
   
 - V1.00 11/26/13
   Based on examples at http://www.bajdi.com/
   Questions: terry@yourduino.com */

/*-----( Import needed libraries )-----*/
#include <SPI.h>
//#include <nRF24L01.h>
//#include <RF24.h>
/*-----( Declare Constants and Pin Numbers )-----*/
#define CE_PIN   9
#define CSN_PIN 10

// NOTE: the "LL" at the end of the constant is "LongLong" type
const uint64_t pipe = 0xE8E8F0F0E1LL; // Define the transmit pipe

const int ledPin =  8;      // the number of the LED pin
const int ledPinFault =  7;      // the number of the LED pin

boolean isOn = true;
boolean isFaultOn = false;

/*-----( Declare objects )-----*/
RF24Debug radio(CE_PIN, CSN_PIN); // Create a Radio
/*-----( Declare Variables )-----*/
int joystick[2];  // 2 element array holding Joystick readings

int last = joystick[1];

void setup()   /****** SETUP: RUNS ONCE ******/
{
  Serial.begin(115200);
  delay(200);
  Serial.println("Nrf24L01 Receiver Starting...");
  
  pinMode(ledPin, OUTPUT);//Debugging   
  pinMode(ledPinFault, OUTPUT);
  
  radio.begin();
  radio.openReadingPipe(1,pipe);
  radio.printDetails();
  radio.startListening();
  
  digitalWrite(10, HIGH);
  digitalWrite(ledPin, HIGH);
  digitalWrite(ledPinFault, LOW);
  delay(2000);
  //attachInterrupt(0, get_data, FALLING);//kick things off by attachin the IRQ interrupt

  
}//--(end setup )---

void get_data(){// get data start get data start get data start get data start get data start
  // this routine is called when the IRQ pin is pulled LOW by the NRF
  Serial.println(" <<< ||INTERRUPT ||>>> ");
  
  
//  if ( radio.available() )
//  {
//    // Read the data payload until we've received everything
//    bool done = false;
//    while (!done)
//    {
//      // Fetch the data payload
//      done = radio.read( joystick, sizeof(joystick) );
//      Serial.print("X = ");
//      Serial.print(joystick[0]);
//      Serial.print(" Y = ");      
//      Serial.println(joystick[1]);
//      
//      // set the LED with the ledState of the variable:
//      //
//    }
//  }
  
}

void loop()   /****** LOOP: RUNS CONSTANTLY ******/
{
  //radio.printDetails();
  delay(200);
  Serial.println("................");
  
  
  if ( radio.available() )
  {
//    // Read the data payload until we've received everything
    bool done = false;
    
     digitalWrite(10, HIGH);
    
    while (!done)
    {
      // Fetch the data payload
      done = radio.read( joystick, sizeof(joystick) );
      Serial.print("X = ");
      Serial.print(joystick[0]);
      Serial.print(" Y = ");      
      Serial.println(joystick[1]);
      
      // set the LED with the ledState of the variable:
      //digitalWrite(ledPin, joystick[0] > 100 ? HIGH : LOW);
      if((joystick[1] - last) == 1)
      {
        digitalWrite(ledPin, isOn ? HIGH : LOW);
        Serial.print(" LED:  ");
        Serial.println(isOn ? "HIGH" : "LOW");
        isOn = !isOn;
      }
      else
      {
          Serial.print(" RED: Missed numbers: ");
          Serial.println((joystick[1] - last));
          
          digitalWrite(ledPinFault, isFaultOn ? HIGH : LOW);
          isFaultOn = !isFaultOn;
      }
      
    }
  }
  else
  {    
      Serial.print("No Signal Sent! Last value: ");
      Serial.print("X = ");
      Serial.print(joystick[0]);
      Serial.print(" Y = ");      
      Serial.println(joystick[1]);
  }
  
 last = joystick[1];

}//--(end main loop )---

/*-----( Declare User-written Functions )-----*/

//NONE
//*********( THE END )***********
