#include <LiquidCrystal.h>

const int lm35Pin = A0;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.print("Temp: ");
}

void loop() {
  int sensorValue = analogRead(lm35Pin);
  float voltage = sensorValue * (5.0 / 1023.0);
  float temperatureC = voltage * 100;

  lcd.setCursor(0, 1);
  lcd.print(temperatureC);
  lcd.print(" C     ");
  delay(1000);
}

