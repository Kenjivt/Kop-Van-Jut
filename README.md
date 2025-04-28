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

![afbeelding](https://github.com/user-attachments/assets/88449554-7132-42f6-a83f-fa206d342b31)

<details>
  <summary>Code Druksensor (Arduino)</summary>

  ```cpp
int sensor = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(115200);
}

void loop()
{
  sensor = analogRead(A0);
  Serial.print("sensor = ");
  Serial.println(sensor);
  delay(100); // Wait for 100 millisecond(s)
}
```
</details>


## LEDs

![afbeelding](https://github.com/user-attachments/assets/2e5e726d-304a-4b6d-9dd7-5b7bde38c0f5)


<details>
  <summary>Code LEDs (Arduino)</summary>

  ```cpp
int sensor = 0;
int Led1 = 2;
int Led2 = 3;
int Led3 = 4;
int Led4 = 5;
int Led5 = 6;
int Led6 = 7;
int Led7 = 8;
int Led8 = 9;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Led3, OUTPUT);
  pinMode(Led4, OUTPUT);
  pinMode(Led5, OUTPUT);
  pinMode(Led6, OUTPUT);
  pinMode(Led7, OUTPUT);
  pinMode(Led8, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  sensor = analogRead(A0);
  if (sensor > 56) {
    digitalWrite(Led1, HIGH);
  } else {
    digitalWrite(Led1, LOW);
  }
  
  if (sensor > 2*56) {
    digitalWrite(Led2, HIGH);
  } else {
    digitalWrite(Led2, LOW);
  }
  
  if (sensor > 3*56) {
    digitalWrite(Led3, HIGH);
  } else {
    digitalWrite(Led3, LOW);
  }
  
  if (sensor > 4*56) {
    digitalWrite(Led4, HIGH);
  } else {
    digitalWrite(Led4, LOW);
  }
  
  if (sensor > 5*56) {
    digitalWrite(Led5, HIGH);
  } else {
    digitalWrite(Led5, LOW);
  }
  
  if (sensor > 6*56) {
    digitalWrite(Led6, HIGH);
  } else {
    digitalWrite(Led6, LOW);
  }
  
  if (sensor > 7*56) {
    digitalWrite(Led7, HIGH);
  } else {
    digitalWrite(Led7, LOW);
  }
  
  if (sensor > 8*56) {
    digitalWrite(Led8, HIGH);
  } else {
    digitalWrite(Led8, LOW);
  }
  
  
  Serial.print("sensor = ");
  Serial.println(sensor);
  delay(100); // Wait for 100 millisecond(s)
}
```
</details>

## LCD-scherm

![afbeelding](https://github.com/user-attachments/assets/288eb893-c3bd-464a-9df3-88abb5eb3c1f)

<details>
  <summary>Code LCD-scherm (Arduino)</summary>

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

