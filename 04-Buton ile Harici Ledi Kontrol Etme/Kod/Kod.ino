void setup()
{
  pinMode(3, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  if (digitalRead(3) == 1) {
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    digitalWrite(LED_BUILTIN, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}