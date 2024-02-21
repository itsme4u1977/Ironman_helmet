#include "Servo.h"

Servo myServo1;
Servo myServo21;
byte val;

void setup() {
  // put your setup code here, to run once:
  myServo1.attach(14);
  myServo1.write(0);

  myServo21.attach(12);
  myServo21.write(0);

  pinMode(D1, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  val = digitalRead( D1);
   if( val == HIGH){
      myServo1.write(0);
   }else{
      myServo1.write(90);
   }
  delay(3000);
   val = digitalRead( D1);
   if( val == HIGH){
      myServo21.write(0);
   }else{
      myServo21.write(180);
   }
  delay(3000); 
  
}
