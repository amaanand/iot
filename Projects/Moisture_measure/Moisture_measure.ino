void setup() {
  // put your setup code here, to run once:
  pinMode(A0, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  float moisturePercentage;
  float sensorAnalog;
  sensorAnalog = analogRead(A0);
  moisturePercentage = ((sensorAnalog / 1023) * 100);
  Serial.println(moisturePercentage);
  delay(1000);

}
