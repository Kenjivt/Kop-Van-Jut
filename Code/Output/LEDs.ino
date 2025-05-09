//Met deze code kan je elke led testen als deze werkt. Sluit de led aan op pin 2 en de ground met een weerstand tussen. Als de led aan en uit flikkert dan werkt deze.

int Led = 2;

void setup() {
  pinMode(Led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(Led, HIGH);
  Serial.println("Hoog");
  delay(100);
  digitalWrite(Led, LOW);
  Serial.println("Laag");
  delay(100);
  
}
