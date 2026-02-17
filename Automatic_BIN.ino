#define echoPin 7
#define trigPin 6
#define servoPin 10
#include <Servo.h>

Servo scanner;

void setup() {
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);
  scanner.attach(servoPin);
}

void loop() {
  open();
}

long getValue(){
  digitalWrite(trigPin,LOW);
  delayMicroseconds(10);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  long value=pulseIn(echoPin,HIGH);
  if (value == 0) 
    return 9999;
  else
    return (value/2)/29.1;
}

boolean needToOpen(){
  if(getValue()<10)
    return true;
  else
    return false;
}

void open(){
  if(needToOpen()){
    scanner.write(360);
    delay(5000);
    scanner.write(0);
  }
}
