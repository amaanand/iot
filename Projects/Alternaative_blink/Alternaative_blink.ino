void setup() {
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  Serial.println("LED 1 -- Blink");
  Serial.println("LED 2 -- OFF");
  delay(1000);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  Serial.println("LED 1 -- OFF");
  Serial.println("LED 2 -- Blink");
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  Serial.println("LED 1 -- Blink");
  Serial.println("LED 2 -- Blink");
  delay(1000);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  Serial.println("LED 1 -- OFF");
  Serial.println("LED 2 -- OFF");
  delay(1000);

}