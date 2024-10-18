void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  float readsensor = analogRead(A0);
  float sensoroutput = readsensor * 0.00488;
  Serial.print("read sensor : ");
  Serial.println(readsensor);
  Serial.print("sensor output : ");
  Serial.println(sensoroutput);
  delay(1000);

}
