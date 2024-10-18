void setup() {
  pinMode(A0, INPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  int temperature = analogRead(A0);
  float temperature_Celsius = temperature * 0.48875;
  Serial.println(temperature_Celsius);
  if (temperature_Celsius > 30){
    digitalWrite(12, HIGH); 
  }
  else{
    digitalWrite(12, LOW);
  } 
  delay(2000);
}
