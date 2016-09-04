#include <SPI.h>

// Follow circuit diagram on http://arduino.cc/en/tutorial/ShiftOut
// with pin Ard-12 replaced with pin Ard-13
// And, pin Ard-8 replaced with pin Ard-9

//Pin connected to ST_CP of 74HC595
int latchPin = 4; // YELLOW
//Pin connected to SH_CP of 74HC595
int clockPin = 13; // GREEN
////Pin connected to DS of 74HC595
int dataPin = 11; // BLUE

int Intx_LED = 5;
boolean ledGlow = false;

byte Input, Output, Check=1;
int j;

int numberToDisplay = 1; 

int flip = 256;

void setup(){
  pinMode(clockPin, OUTPUT);//clock
  pinMode(dataPin, OUTPUT);//data
  pinMode(latchPin, OUTPUT);//latch
  pinMode(2, INPUT);//Input from buttons
  pinMode(5, OUTPUT);//Output indicating interrupt serviced


  
  
SPI.setBitOrder(MSBFIRST);
SPI.setDataMode(SPI_MODE0);
SPI.setClockDivider(SPI_CLOCK_DIV4);
SPI.begin();
  SPI.transfer(0);
  SPI.transfer(255);
  digitalWrite(latchPin, HIGH);
  digitalWrite(latchPin, LOW);
  
 digitalWrite( Intx_LED, HIGH);
  
  Serial.begin(115200);
  Serial.println("BEGIN");
  
  numberToDisplay = 1; 
  
 //attachInterrupt(0, pin_read, RISING); 
  
}//setup

void loop(){

    // take the latchPin low so 
    // the LEDs don't change while you're sending in bits:
    digitalWrite(latchPin, LOW);
    // shift out the bits:
    
    Serial.print("MSB: ");
    Serial.println(numberToDisplay);
    Serial.print("LSB: ");
    Serial.println(flip);
    
   SPI.transfer(numberToDisplay);
   SPI.transfer(flip);
    //take the latch pin high so the LEDs will light up:
    digitalWrite(latchPin, LOW);
    delay(1);
    digitalWrite(latchPin, HIGH);
    // pause before next value:
    delay(500);
    flip = flip>>1;
    
    flip = flip <=0 ? 256 : flip;
    
    numberToDisplay = numberToDisplay<<1;
    
    numberToDisplay = numberToDisplay>256 ? 1 : numberToDisplay;
  
}//loop

void pin_read()
{
  
    //for(j=0; j<10; j++)
      delayMicroseconds(500);

     
    if(digitalRead(2)==HIGH)
    {
      ledGlow = !ledGlow;
      digitalWrite( Intx_LED, ledGlow? HIGH: LOW);
    }
    
    delayMicroseconds(500);
    while(digitalRead(2)==HIGH){}
    
}

