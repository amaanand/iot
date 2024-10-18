void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);

}

void loop() {
  float gasValue = analogRead(A0);
  Serial.println(gasValue);
  delay(1000);
  
}