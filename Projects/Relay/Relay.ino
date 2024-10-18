void setup() {
  pinMode(6, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  Serial.println("The relay is turned on.");
  delay(2000);

}
