const int sensorPin = A0;
const int ledPin = 13;

int thresholdValue;

void setup() {
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  thresholdValue = analogRead(sensorPin);
  float analogVoltage = thresholdValue * (3.3 / 1023.0);
  float ppm = (analogVoltage - 0.2) / 0.0075;
  Serial.println(analogVoltage);

  if (ppm < 298) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Your fruit is good to eat.");

  } 
  else {
    digitalWrite(ledPin, LOW);
    Serial.println("Your fruit is not good to eat.");

  }

  delay(500);
}
