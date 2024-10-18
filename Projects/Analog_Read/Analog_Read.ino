void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);

}

void loop() {
  int analog_temperature;
  analog_temperature = analogRead(A0);
  double reference_voltage = analog_temperature * 0.0048875;
  float temperature_celsius = (float)reference_voltage * 100;
  float temperature_fahrenheit = temperature_celsius * 1.8 + 32;
  Serial.println(reference_voltage);
  Serial.println(temperature_celsius);
  Serial.println(temperature_fahrenheit);
  delay(1000);

}
