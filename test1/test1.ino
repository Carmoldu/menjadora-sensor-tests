#include <Servo.h> 
 
Servo myservoContinuous;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 
                
int FSRanalogPin=0;
int FSRreading; 

int vel=90;

void setup(void){
  Serial.begin(9600);
  
  myservoContinuous.attach(9);  // attaches the servo on pin 9 to the servo object 

}

 
void loop() 
{ 
  FSRreading=analogRead(FSRanalogPin);
  
  if(FSRreading>1000){
    vel=180;
  }
  if(FSRreading<=1000){
    vel=90;
  }
  
  myservoContinuous.write(vel);
  
  delay(100);
} 
