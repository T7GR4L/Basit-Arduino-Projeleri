void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(0, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  delay(400); // Wait for 400 millisecond(s)
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(400); // Wait for 400 millisecond(s)
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  delay(400); // Wait for 400 millisecond(s)
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  delay(400); // Wait for 400 millisecond(s)
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(400); // Wait for 400 millisecond(s)
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  delay(400); // Wait for 400 millisecond(s)
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
  delay(400); // Wait for 400 millisecond(s)
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
  delay(400); // Wait for 400 millisecond(s)
  digitalWrite(3, LOW);

  digitalWrite(0, HIGH);
}