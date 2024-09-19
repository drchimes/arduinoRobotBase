#include <Wire.h>
#include <Adafruit_MotorShield.h>
#include "utility/Adafruit_MS_PWMServoDriver.h"

Adafruit_MotorShield AFMS = Adafruit_MotorShield(); 

Adafruit_DCMotor *motorLeft = AFMS.getMotor(1);
Adafruit_DCMotor *motorRight = AFMS.getMotor(2);

void setup() {
  // put your setup code here, to run once:
AFMS.begin();

}

void loop() {
  motorLeft ->setSpeed(200);
  motorLeft ->run(FORWARD);
  
}
