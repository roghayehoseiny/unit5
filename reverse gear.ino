#include<LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 7, 6, 5, 4);
int trig =9;
int echo =10;
int duration;
int distance;

void setup() {
  lcd.begin(16, 2);

  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

}

void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);
 distance = (duration / 2)* 0.0343;
 lcd.setCursor(11,0);
 lcd.print(distance);
 delay(500);
lcd.clear();

}




