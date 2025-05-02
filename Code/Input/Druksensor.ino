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

