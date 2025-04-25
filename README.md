# Kop-Van-Jut

## Uitleg

Voor onze opdracht binnen het vak Opkomende Technologieën ontwikkelen we een realistische versie van de klassieke kermisattractie “Kop van Jut”.
Hierbij meten we de kracht van een slag met behulp van een druksensor, en geven we directe feedback via LED-verlichting en eventueel geluidseffecten. 
Alles wordt aangestuurd door een Arduino.

## Beschrijving van het project

De gebruiker slaat met een hamer op een stevige drukplaat. 
De kracht van deze slag wordt nauwkeurig gemeten via een druksensor (zoals een piezo-elektrische sensor of een FSR). 
De Arduino verwerkt deze data en toont de score via een reeks oplichtende LEDs, vergelijkbaar met de echte “Kop van Jut”-machines op de kermis.

## Onderdelen

Arduino Uno

Druksensor (voor het meten van de slagkracht)

7 rode LEDs (scorebalk)

1 witte LED (voor maximale score-indicatie)

Buzzer (voor geluidssignaal bij score)

16x2 LCD-scherm (voor numerieke scoreweergave)

Drukknop (om een nieuwe beurt te starten)

## Druksensor



![afbeelding](https://github.com/user-attachments/assets/288eb893-c3bd-464a-9df3-88abb5eb3c1f)
<details>
  <summary>Code druksensor (Arduino)</summary>

  ```cpp
  #include <Adafruit_LiquidCrystal.h>

  int seconds = 0;

  Adafruit_LiquidCrystal lcd_1(0);

  void setup()
  {
    lcd_1.begin(16, 2);
    lcd_1.print("hello world");
  }

  void loop()
  {
    lcd_1.setCursor(0, 1);
    lcd_1.print(seconds);
    lcd_1.setBacklight(1);
    delay(500); // Wait for 500 millisecond(s)
    lcd_1.setBacklight(0);
    delay(500); // Wait for 500 millisecond(s)
    seconds += 1;
  }
```
</details>

