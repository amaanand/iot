char GasSensor = A0;
int RedLed = 11;
int GreenLed = 12;
int Buzzer = 13;

void setup() {
  pinMode(A0, INPUT);
  pinMode(RedLed, OUTPUT);// Red LED
  pinMode(GreenLed, OUTPUT);
  pinMode(Buzzer, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  float ThresholdValue = 10;
  float GasValue = analogRead(GasSensor);
  Serial.print("Gas Value : ");
  Serial.println(GasValue);
  if (GasValue > ThresholdValue){
    digitalWrite(RedLed, HIGH);
    digitalWrite(GreenLed, LOW);
    tone(Buzzer, 500, 200);
  }
  else{
    digitalWrite(RedLed, LOW);
    digitalWrite(GreenLed, HIGH);
    noTone(Buzzer);
  }
  delay(1000);
}
