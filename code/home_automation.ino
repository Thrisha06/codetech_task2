int ledPin = 8;     // Connect to Light
int fanPin = 9;     // Connect to Fan
String inputString = "";

void setup() {
  Serial.begin(9600);              // Start serial communication
  pinMode(ledPin, OUTPUT);
  pinMode(fanPin, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    inputString = Serial.readStringUntil('\n');

    if (inputString == "LIGHT_ON") {
      digitalWrite(ledPin, HIGH);
    } else if (inputString == "LIGHT_OFF") {
      digitalWrite(ledPin, LOW);
    } else if (inputString == "FAN_ON") {
      digitalWrite(fanPin, HIGH);
    } else if (inputString == "FAN_OFF") {
      digitalWrite(fanPin, LOW);
    }
  }
}
