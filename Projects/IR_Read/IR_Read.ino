int IR = 10;

void setup() {
  pinMode(IR, INPUT);
  Serial.begin(9600);

}

void loop() {
  int IRValue = digitalRead(IR);
  Serial.println(IRValue);
  delay(1000);

}