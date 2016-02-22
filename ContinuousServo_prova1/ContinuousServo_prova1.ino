

#include <Servo.h> 
 
Servo myservoContinuous;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 
 
int vel1 = 90;    // variable to store the servo velocity, as Continuous servos' input is velocity not position
int vel2 = 180;   //Vel = 90 stops the servo

void setup() 
{ 
  myservoContinuous.attach(9);  // attaches the servo on pin 9 to the servo object 
} 
 
 
void loop() 
{ 
  myservoContinuous.write(vel1);
  delay(1000);
  myservoContinuous.write(vel2);
  delay(1000);
} 
