const int forwardBackFlexPin = 1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int forwardBackFlexPosition;
  int forwardBackServoPosition;

  forwardBackFlexPosition = analogRead(forwardBackFlexPin);
  Serial.print("Bend Position: ");
  Serial.println(forwardBackFlexPosition);
  forwardBackServoPosition = map(forwardBackFlexPosition, 770, 970, 90, 140);
  Serial.print("Servo Position after MAP: ");
  Serial.println(forwardBackServoPosition);
  forwardBackServoPosition = constrain(forwardBackServoPosition, 90, 140);
  Serial.print("CONSTRAIN: ");
  Serial.println(forwardBackServoPosition);

  delay(20);

}
