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
int interval;

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

  stand();
  delay(250);
}

void loop() {

  
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

void basicWalk(int interval) {
  //front left
  servo0.write(90);  //back
  delay(interval);
  servo1.write(90);  //up
  delay(interval);
  servo0.write(45);  //forward
  delay(interval);
  servo1.write(150);  //down
  delay(interval);
  //back right
  servo6.write(90);  //up
  delay(interval);
  servo7.write(90);  //forward
  delay(interval);
  servo6.write(150);  //down
  delay(interval);
  servo7.write(45);  //back
  delay(interval);

  //front right
  servo2.write(90);  //back
  delay(interval);
  servo3.write(90);
  delay(interval);
  servo2.write(135);
  delay(interval);
  servo3.write(30);
  delay(interval);

  //back left
  servo4.write(90);
  delay(interval);
  servo5.write(90);
  delay(interval);
  servo4.write(30);
  delay(interval);
  servo5.write(135);
  delay(interval);
}

void trueWalk(){
  interval = 100;

  servo6.write(90);  //back right up
  delay(interval);

  servo0.write(90);  //front left back
  servo7.write(90);  //back right forward
  delay(interval);

  servo1.write(90);   //front left up
  servo6.write(150);  //back right down
  delay(interval);

  servo0.write(45);  //front left forward
  servo7.write(45);  //back right back
  delay(interval);

  servo1.write(150);  //front left down
  servo4.write(90);  //back left up
  delay(interval);

  servo2.write(90);  //front right back
  servo5.write(90);  //back left forward
  delay(interval);

  servo4.write(30);  //back left down
  servo3.write(90);  //front right up
  delay(interval);

  servo2.write(135);  //front right forward
  servo5.write(135);  //back left back
  delay(interval);
  
  servo3.write(30);  //front right down
  //delay(interval);
}
