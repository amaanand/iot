void setup() {
  pinMode(12, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  if(digitalRead(12) == HIGH){
    digitalWrite(13, HIGH);
  }
  else if(digitalRead(12) == LOW){
    digitalWrite(13, LOW);
  }

}
