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