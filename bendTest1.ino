#include <Servo.h>

Servo claw;
Servo upDownServo;
Servo forwardBackServo;
const int clawFlexPin = 0;
const int upDownFlexPin = 1;
const int forwardBackFlexPin = 2;
void setup() {
  Serial.begin(9600);
  claw.attach(11);
  claw.write(35);
  upDownServo.attach(9);
  upDownServo.write(90);
  forwardBackServo.attach(6);
  forwardBackServo.write(90);
}

void loop() {
  int clawFlexPosition;    // Input value from the analog pin.
  int clawServoPosition;   // Output value to the servo.

  int upDownFlexPosition;
  int upDownServoPosition;

  int forwardBackFlexPosition;
  int forwardBackServoPosition;
  // Read the position of the flex sensor (0 to 1023):

  clawFlexPosition = analogRead(clawFlexPin);
  upDownFlexPosition = analogRead(upDownFlexPin);
  forwardBackFlexPosition = analogRead(forwardBackFlexPin);
    // Because the voltage divider circuit only returns a portion
  // of the 0-1023 range of analogRead(), we'll map() that range
  // to the servo's range of 0 to 180 degrees. The flex sensors
  // we use are usually in the 600-900 range:

  clawServoPosition = map(clawFlexPosition, 600, 900, 35, 160);
  clawServoPosition = constrain(clawServoPosition, 35, 160);

  upDownServoPosition = map(upDownFlexPosition, 740, 900, 90, 180);
  upDownServoPosition = constrain(upDownServoPosition, 90, 180);

  forwardBackServoPosition = map(forwardBackFlexPosition, 770, 970, 90, 180);
  forwardBackServoPosition = constrain(forwardBackServoPosition, 90, 180);

  claw.write(clawServoPosition);
  upDownServo.write(upDownServoPosition);
  forwardBackServo.write(forwardBackServoPosition);
   // print out our values to the serial monitor window:

//  Serial.print("sensor: ");
//  Serial.print(flexposition);
//  Serial.print("  servo: ");
//  Serial.println(servoposition);

 delay(20);  // wait 20ms between servo updates
}
