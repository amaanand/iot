void setup() {
  
pinMode(6, OUTPUT);
pinMode(13, OUTPUT);
digitalWrite(13, HIGH);
Serial.begin(9600);
}

void loop() {
  digitalWrite(6, HIGH);
  delay(3000);
  digitalWrite(6, LOW);
  delay(3000);

}
