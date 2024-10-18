#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.clear();
  lcd.backlight();
  pinMode(A0, INPUT);
  Serial.begin(9600);

}

void loop() {
  float temp = analogRead(A0) * 0.48875855327468;
  lcd.setCursor(0, 0);
  lcd.print("Temperature :");
  lcd.setCursor(0, 1);
  lcd.print(temp);
  delay(1000);

}
