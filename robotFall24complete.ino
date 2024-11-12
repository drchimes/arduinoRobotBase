#include <Servo.h>
#include <Wire.h>
#include <Adafruit_MotorShield.h>
#include "utility/Adafruit_MS_PWMServoDriver.h"

Adafruit_MotorShield AFMS = Adafruit_MotorShield();

Adafruit_DCMotor *motorLeft = AFMS.getMotor(1);
Adafruit_DCMotor *motorRight = AFMS.getMotor(2);
Adafruit_DCMotor *rearLeft = AFMS.getMotor(3);
Adafruit_DCMotor *rearRight = AFMS.getMotor(4);
///////////////////////////////////////////////////
const int trigPin = 8;
const int echoPin = 7;
int pos;
float rightDiestance;
float leftDistance;
float centerDistance;

float duration, distance;
Servo myservo;
//////////////////////////////////////////////////////////////////////////////////////////
void setup() {
  // put your setup code here, to run once:
  AFMS.begin();
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  myservo.attach(9); 
}

void loop() {
  

}

float sonar(){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration*.0343)/2;
  Serial.print("Distance: ");
  Serial.println(distance);
  delay(100);
  return(distance);
}

//my first method
void forward(){
  motorLeft->setSpeed(200);
  motorLeft->run(FORWARD);
  motorRight->setSpeed(200);
  motorRight->run(FORWARD);
  rearLeft->setSpeed(200);
  rearLeft->run(FORWARD);
  rearRight->setSpeed(200);
  rearRight->run(FORWARD);
}

void backward(){
  motorLeft->setSpeed(200);
  motorLeft->run(BACKWARD);
  motorRight->setSpeed(200);
  motorRight->run(BACKWARD);
  rearLeft->setSpeed(200);
  rearLeft->run(BACKWARD);
  rearRight->setSpeed(200);
  rearRight->run(BACKWARD);
}

void turnRight(){
  motorLeft->setSpeed(200);
  motorLeft->run(FORWARD);
  motorRight->setSpeed(100);
  motorRight->run(FORWARD);
  rearLeft->setSpeed(200);
  rearLeft->run(FORWARD);
  rearRight->setSpeed(100);
  rearRight->run(FORWARD);
}

void turnLeft(){
  motorLeft->setSpeed(100);
  motorLeft->run(FORWARD);
  motorRight->setSpeed(200);
  motorRight->run(FORWARD);
  rearLeft->setSpeed(100);
  rearLeft->run(FORWARD);
  rearRight->setSpeed(200);
  rearRight->run(FORWARD);
}

void forwardSpeed(int speed){
  motorLeft->setSpeed(speed);
  motorLeft->run(FORWARD);
  motorRight->setSpeed(speed);
  motorRight->run(FORWARD);
  rearLeft->setSpeed(speed);
  rearLeft->run(FORWARD);
  rearRight->setSpeed(speed);
  rearRight->run(FORWARD);
}

void servoMove(){
  for(pos = 0; pos<=90; pos++){
    myservo.write(pos);
    delay(15);
  }
  sonar();
  centerDistance = distance;
  for(pos = 90; pos<=180; pos++){
    myservo.write(pos);
    delay(15);
  }
  sonar();
  rightDistance = distance;
  for(pos = 180; pos>=90; pos--){
    myservo.write(pos);
    delay(15);
  }
  sonar();
  centerDistance = distance;
  for(pos = 90; pos>=0; pos--){
    myservo.write(pos);
    delay(15);
  }
  sonar();
  lefDistance = distance;
}
