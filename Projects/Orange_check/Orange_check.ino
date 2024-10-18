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
  
  Serial.println(thresholdValue);

  if (thresholdValue > 500) {
    digitalWrite(ledPin, HIGH);

  } else {
    digitalWrite(ledPin, LOW);

  }

  delay(1000);
}
