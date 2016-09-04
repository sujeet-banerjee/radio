#include <SPI.h>
byte Input, Output, Check=1;
int j;
void setup(){
  pinMode(13, OUTPUT);//clock
  pinMode(11, OUTPUT);//data
  pinMode(4, OUTPUT);//latch
  pinMode(3, INPUT);//Input from buttons
   pinMode(5, OUTPUT);//Debugging


  
 
  
SPI.setBitOrder(MSBFIRST);
SPI.setDataMode(SPI_MODE0);
SPI.setClockDivider(SPI_CLOCK_DIV4);
SPI.begin();
  SPI.transfer(0);
  SPI.transfer(255);
  
  digitalWrite(4, HIGH);
  digitalWrite(4, LOW);
  Serial.begin(115200);
  
   //Serial.println("ASCII Table ~ Character Map"); 
 attachInterrupt(1, pin_read, RISING); 
 
 panelDisable();
  
}//setup

boolean ledOn = false;
boolean panelDisabled = true;

void loop(){
  int x = 255;
  
  if(isPanelDisabled())
  {
    ledOn = !ledOn;
    digitalWrite(5, ledOn? HIGH: LOW);
    
    for(int i=0; i<8; i++)
    {
      SPI.transfer(x);
      SPI.transfer(x);
    //x = x<<1;
    delay(10);
    }
  }
  
  //Serial.print("SPI: ");
  //Serial.println(x); 

}//loop


  void pin_read(){
    
    panelEnable();
    
   //Serial.println("INTX..."); 
    for(j=0; j<100; j++)
    delayMicroseconds(100);

   
    Check=1;
    for(j=0; j<8; j++){
      
       
      SPI.transfer(Output);
      SPI.transfer(Check);
      digitalWrite(4, LOW);
      digitalWrite(4, HIGH);
  
  
  delayMicroseconds(500);
  
  
  if(digitalRead(3)==HIGH){
      if(bitRead(Output, j)==1)
      bitWrite(Output, j, 0);
      else
      bitWrite(Output, j, 1);
  }//dig check
  
  Check = Check<<1;
    }//j
    
    
    
  SPI.transfer(Output);
  SPI.transfer(255);
  digitalWrite(4, LOW); 
  digitalWrite(4, HIGH);

  
    
    while(digitalRead(3)==HIGH){
      for(j=0; j<10; j++)
        delayMicroseconds(100);
    }
    
    panelDisable();
    

}//pin_read

void panelDisable()
{
  panelDisabled = true;
  digitalWrite(4, LOW); 
}

void panelEnable()
{
  panelDisabled = false;
  //digitalWrite(4, HIGH);
}

boolean isPanelDisabled()
{
  return panelDisabled ;
}

