#include <Servo.h>  //allows for servos to be used bu calling the servo library

Servo myservo;      //creates a servo object 

int pos = 0;        //creates a variable to store the position of the servo
int servoPin = 3;   //creates an interger on pin 3 which acts as a signal line


void setup() {
  myservo.attach(servoPin) ;  //attaches the servo to the servo pin

}

void loop() {
  
  for (pos = 0; pos <= 180; pos += 1) { //slowly increases from 0 to 180 degrees

  myservo.write (pos);                  //updates the position the servo will move to
  delay (15);                           //wait 15ms for the servo to reach this position
  
  }

  for (pos = 180; pos >= 0; pos -= 1) { //slowly decreases from 180 to 0 degrees
    myservo.write (pos);                //updates the position the servo will move to
    delay (15);                         //wait 15ms for the servo to reach this position
  }
}
