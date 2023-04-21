#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int potpin = 0;  // analog pin used to connect the potentiometer
int v;    // variable to read the value from the analog pin

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  v = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
  v = map(v, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo.write(v);                  // sets the servo position according to the scaled value
  delay(15);                           // waits for the servo to get there
}
