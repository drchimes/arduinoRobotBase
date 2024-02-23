#include <Servo.h>

Servo servo0;
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;
Servo servo7;
Servo servo8;

unsigned const currentSonar;
unsigned const previousSonar = 0;
const long intervalSonar = 1000;

void setup() {
  servo0.attach(0);
  servo1.attach(1);
  servo2.attach(2);
  servo3.attach(3);
  servo4.attach(4);
  servo5.attach(5);
  servo6.attach(6);
  servo7.attach(7);
  servo8.attach(8);
}

void loop() {


  servo0.write(90);
  delay(500);
  servo1.write(90);
  delay(500);
  servo0.write(45);
  delay(500);
  servo1.write(150); 
  delay(500);

servo7.write(90);
  delay(500);
  servo6.write(90);
  delay(500);
  servo7.write(45);
  delay(500);
  servo6.write(150); 
  delay(500);

}

void flat() {
  int pos = 90;
  servo0.write(90);
  servo1.attach(90);
  servo2.attach(pos);
  servo3.attach(pos);
  servo4.attach(pos);
  servo5.attach(pos);
  servo6.attach(pos);
  servo7.attach(pos);
  servo8.attach(pos);
}

void stand() {
  servo0.write(45);
  servo1.write(150);
  servo2.write(135);
  servo3.write(30);
  servo4.write(30);
  servo5.write(135);
  servo6.write(150);
  servo7.write(45);
}
