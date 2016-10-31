#include <Servo.h>

Servo base,claw,left,right;
int clawPos = 35;
int leftPos, rightPos;
int basePos = leftPos = rightPos = +90;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  claw.attach(11);
  base.attach(10);
  left.attach(9);
  right.attach(6);
  claw.write(clawPos);
  base.write(basePos);
  left.write(leftPos);
  right.write(rightPos);
}

void loop() {
//  for(clawPos = 35; clawPos <= 170; clawPos +=1)
//  {
//    claw.write(clawPos);
//    delay(15);
//  }
//
//  for(clawPos = 170; clawPos >= 35; clawPos -= 1)
//  {
//    claw.write(clawPos);
//    delay(15);
//  }
//
//  for(rightPos = 20; rightPos <= 110; rightPos+=1)
//  {
//    right.write(rightPos);
//    delay(15);  
//  }
//
//  for(rightPos = 110; rightPos >= 20; rightPos -= 1)
//  {
//    right.write(rightPos);
//    delay(15);  
//  }

  
}
