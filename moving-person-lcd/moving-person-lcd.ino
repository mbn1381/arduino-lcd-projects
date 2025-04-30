#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte personUp[8] = {
  0b00100,
  0b01110,
  0b10101,
  0b00100,
  0b01110,
  0b00100,
  0b01010,
  0b10001
};

byte personDown[8] = {
  0b00100,
  0b01110,
  0b00100,
  0b10101,
  0b01110,
  0b00100,
  0b01010,
  0b10001
};

void setup() {
  lcd.begin(16, 2);
  lcd.createChar(0, personUp);
  lcd.createChar(1, personDown);
  lcd.clear();
}

void loop() {
  for (int i = 0; i < 16; i++) {
    int row = i % 2;
    lcd.clear();
    lcd.setCursor(i, row);
    lcd.write(byte(0));
    delay(200);
    lcd.clear();
    lcd.setCursor(i, row);
    lcd.write(byte(1));
    delay(200);
  }

  for (int i = 15; i >= 0; i--) {
    int row = (i + 1) % 2;
    lcd.clear();
    lcd.setCursor(i, row);
    lcd.write(byte(0));
    delay(200);
    lcd.clear();
    lcd.setCursor(i, row);
    lcd.write(byte(1));
    delay(200);
  }
}

