#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.clear();
  lcd.backlight();

}

void loop() {
  lcd.setCursor(1, 0);
  lcd.print("ECE");

  lcd.setCursor(1, 1);
  lcd.print("Hello...");

}
