char GasSensor = A0;
int RedLed = 12;
int GreenLed = 10;

void setup() {
  pinMode(A0, INPUT);
  pinMode(RedLed, OUTPUT);
  pinMode(GreenLed, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  float ThresholdValue = 27;
  float GasValue = analogRead(GasSensor);
  Serial.print("Gas Value : ");
  Serial.println(GasValue);
  if (GasValue > ThresholdValue){
    digitalWrite(RedLed, HIGH);
    digitalWrite(GreenLed, LOW);
  }
  else{
    digitalWrite(RedLed, LOW);
    digitalWrite(GreenLed, HIGH);
  }
  delay(1000);
  
}