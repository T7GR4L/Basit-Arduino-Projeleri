void setup()
{
  pinMode(A0, INPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  if (analogRead(A0) > 350) {
    digitalWrite(2, HIGH);
  } else {
    digitalWrite(2, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}