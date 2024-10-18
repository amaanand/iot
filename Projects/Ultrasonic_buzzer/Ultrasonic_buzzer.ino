const int trigPin = 9;
const int echoPin = 10;
int buzzer = 12;

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);  

}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  Serial.print("Distance :");
  Serial.println(distance);

  if (distance < 20){
    tone(buzzer, 100, 1000);
  }else
  {
    noTone(buzzer);
  }
  delay(500);

}
