int IR = 10;

void setup() {
  pinMode(IR, INPUT);
  Serial.begin(9600);

}

void loop() {
  int IRValue = digitalRead(IR);
  if (IRValue == LOW){
    Serial.println("Object detected.");

  }else if (IRValue == HIGH){
  Serial.println("No Object detected.");
  

  }
  delay(1000);
  

}
