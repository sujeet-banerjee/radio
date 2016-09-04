#include <SPI.h>

// Follow circuit diagram on http://arduino.cc/en/tutorial/ShiftOut
// with pin Ard-12 replaced with pin Ard-13
// And, pin Ard-8 replaced with pin Ard-9

//Pin connected to ST_CP of 74HC595
int latchPin = 9; // GREEN
//Pin connected to SH_CP of 74HC595
int clockPin = 13; // YELLOW
////Pin connected to DS of 74HC595
int dataPin = 11; // BLUE

byte Input, Output, Check=1;
int j;

int numberToDisplay = 1; 

int flip = 255;

void setup(){
  pinMode(clockPin, OUTPUT);//clock
  pinMode(dataPin, OUTPUT);//data
  pinMode(latchPin, OUTPUT);//latch
  //pinMode(2, INPUT);//Input from buttons


  
  
SPI.setBitOrder(MSBFIRST);
SPI.setDataMode(SPI_MODE0);
SPI.setClockDivider(SPI_CLOCK_DIV2);
SPI.begin();
  SPI.transfer(0);
  SPI.transfer(255);
  digitalWrite(latchPin, HIGH);
  digitalWrite(latchPin, LOW);
  Serial.begin(9600);
  
  numberToDisplay = 1; 
  
 //attachInterrupt(0, pin_read, RISING); 
  
}//setup

void loop(){

    // take the latchPin low so 
    // the LEDs don't change while you're sending in bits:
    digitalWrite(latchPin, LOW);
    // shift out the bits:
   SPI.transfer(numberToDisplay);
   SPI.transfer(flip);
    //take the latch pin high so the LEDs will light up:
    digitalWrite(latchPin, HIGH);
    // pause before next value:
    delay(50);
    flip = flip>>1;
    
    flip = flip <=0 ? 255 : flip;
    
    numberToDisplay = numberToDisplay<<1;
    
    numberToDisplay = numberToDisplay>256 ? 1 : numberToDisplay;
  
}//loop

