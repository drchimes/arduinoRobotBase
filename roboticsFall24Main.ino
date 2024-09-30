#include <Wire.h>
#include <Adafruit_MotorShield.h>
#include "utility/Adafruit_MS_PWMServoDriver.h"

Adafruit_MotorShield AFMS = Adafruit_MotorShield();

Adafruit_DCMotor *motorLeft = AFMS.getMotor(1);
Adafruit_DCMotor *motorRight = AFMS.getMotor(2);
Adafruit_DCMotor *rearLeft = AFMS.getMotor(3);
Adafruit_DCMotor *rearRight = AFMS.getMotor(4);



void setup() {
  // put your setup code here, to run once:
  AFMS.begin();
}

void loop() {
  forward();
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


