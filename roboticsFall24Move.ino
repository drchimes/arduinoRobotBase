
void goForward(){
  motor1->setSpeed(150);
  motor1->run(FORWARD);
  motor2->setSpeed(150);
  motor2->run(FORWARD);
  motor3->setSpeed(150);
  motor3->run(FORWARD);
  motor4->setSpeed(150);
  motor4->run(FORWARD);
}
void goBackward(){
  motor1->setSpeed(150);
  motor1->run(BACKWARD);
  motor2->setSpeed(150);
  motor2->run(BACKWARD);
  motor3->setSpeed(150);
  motor3->run(BACKWARD);
  motor4->setSpeed(150);
  motor4->run(BACKWARD);
}

void stop(){
  motor1->setSpeed(0);
  motor2->setSpeed(0);
  motor3->setSpeed(0);
  motor4->setSpeed(0);
}

void turnLeft(){
  motor1->setSpeed(150);
  motor1->run(BACKWARD);
  motor2->setSpeed(150);
  motor2->run(BACKWARD);
  motor3->setSpeed(150);
  motor3->run(FORWARD);
  motor4->setSpeed(150);
  motor4->run(FORWARD);
}
