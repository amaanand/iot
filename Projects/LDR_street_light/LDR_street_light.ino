void setup() {
  pinMode(A0, INPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  int analog_value = analogRead(A0);
  Serial.println(analog_value);
  if (analog_value > 200){
    digitalWrite(12, LOW);
  }else if (analog_value < 200){
    digitalWrite(12, HIGH);
  }
  delay(1000);
  
}
