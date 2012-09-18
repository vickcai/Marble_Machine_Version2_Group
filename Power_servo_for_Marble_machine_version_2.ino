// Marble Machine version 2 by Lim Kim, Cai Zhixiang and Xinhao

//Controling the three design components, the worm drive programming still undone 

#include <Servo.h> 

Servo myservo;  // create servo object to control a servo 
int Servo= 0;

void setup() 
{ 
  myservo.attach(11);  // attaches the servo on pin 11 to the servo object 
    // initialize the digital pin as an output.
 
void loop() 
{ 

  myservo.write(10);                  // sets the servo position according to the scaled value 
  delay(800);
delay(5000);  // waits for the servo to get there 
  myservo.write(180);                  // sets the servo position according to the scaled value 
  delay(1800);   
  delay(5000);
    
} 
