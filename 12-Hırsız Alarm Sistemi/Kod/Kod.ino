void setup()
{
  pinMode(4, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  if (digitalRead(4) == 1) {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    tone(5, 523, 100); // play tone 60 (C5 = 523 Hz)
  } else {
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
  }
  delay(10); // Delay a little bit to improve simulation performance
}