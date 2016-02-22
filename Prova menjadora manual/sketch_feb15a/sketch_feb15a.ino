#include <Servo.h> 
 
Servo myservoContinuous;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 
                
int FSRanalogPin1=0;
int FSRanalogPin2=1;
int FSRreading1;
int FSRreading2;

int vel=90;

void setup(void){
  Serial.begin(9600);
  
  myservoContinuous.attach(9);  // attaches the servo on pin 9 to the servo object 

}

 
void loop() 
{ 
  FSRreading1=analogRead(FSRanalogPin1);
  FSRreading2=analogRead(FSRanalogPin2);
  
  Serial.print(FSRreading1);
  Serial.print('\t');
  Serial.println(FSRreading2);
  
  if(FSRreading1>FSRreading2 && FSRreading1>500){
    vel=120;
  }
  if(FSRreading2>FSRreading1 && FSRreading2>500){
    vel=80;
  }
  if(FSRreading1<=500 && FSRreading2<=500){
    vel=90;
  }
  
  myservoContinuous.write(vel);
  
  delay(100);
} 
