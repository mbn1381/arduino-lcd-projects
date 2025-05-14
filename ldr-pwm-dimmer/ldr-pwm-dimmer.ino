#include <LiquidCrystal.h>
int sensor;
int led = 9;  // تغییر پایه به یکی که PWM پشتیبانی می‌کنه

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  sensor = analogRead(A0); 
  Serial.print("Sensor Value = ");
  Serial.println(sensor);
  delay(300);

  // تبدیل مقدار سنسور (0 تا 1023) به مقدار PWM (0 تا 255)
  int brightness = map(sensor, 0, 1023, 255, 0);  // معکوس چون مقدار زیاد یعنی نور زیاد محیط

  analogWrite(led, brightness);
}
