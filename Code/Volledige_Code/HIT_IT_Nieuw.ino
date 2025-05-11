#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;

// LCD kleur rood
const int colorR = 255;
const int colorG = 0;
const int colorB = 0;

// LED-pinnen
int leds[] = {2, 3, 4, 5, 6, 7, 8, 9};

// Potentiometer en speaker
const int potPin = A0;
const int speakerPin = 10;

int potValue = 0;

void setup() {
  // Init LCD
  lcd.begin(16, 2);
  lcd.setRGB(colorR, colorG, colorB);

  // Countdown bij opstarten
  lcd.setCursor(0, 0);
  lcd.print("3");
  delay(1000);
  lcd.setCursor(1, 0);
  lcd.print("2");
  delay(1000);
  lcd.setCursor(2, 0);
  lcd.print("1");
  lcd.setCursor(0, 1);
  delay(700);
  lcd.print("HIT IT!");
  delay(1000);
  lcd.clear();

  // Init LEDS en speaker
  for (int i = 0; i < 8; i++) {
    pinMode(leds[i], OUTPUT);
  }
  pinMode(speakerPin, OUTPUT);
  pinMode(potPin, INPUT);

  Serial.begin(9600);
}

void loop() {
  // Potentiometer uitlezen
  potValue = analogRead(potPin);

  // LEDs aansturen
  for (int i = 0; i < 8; i++) {
    if (potValue > (i + 1) * 128) {
      digitalWrite(leds[i], HIGH);
    } else {
      digitalWrite(leds[i], LOW);
    }
  }

  // Speaker geluid bij maximum
  if (potValue > 896) {
    tone(speakerPin, 1000, 200);  // 1000 Hz, 200 ms
  }

  // Toon potmeterwaarde
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Waarde: ");
  lcd.print(potValue);
  Serial.print("Potentiometer = ");
  Serial.println(potValue);

  delay(100);
}
