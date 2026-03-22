// Pin definitions
const int fsrPin = 34;      // FSR connected to GPIO34
const int motorPin = 25;    // Motor transistor base via resistor

// Threshold (adjust after testing)
int threshold = 1500;

void setup() {
  Serial.begin(115200);
  pinMode(motorPin, OUTPUT);
  digitalWrite(motorPin, LOW);
}

void loop() {
  int fsrValue = analogRead(fsrPin);
  Serial.print("FSR Value: ");
  Serial.println(fsrValue);

  if (fsrValue > threshold) {
    digitalWrite(motorPin, HIGH);   // Turn motor ON
  } else {
    digitalWrite(motorPin, LOW);    // Turn motor OFF
  }

  delay(200);
}