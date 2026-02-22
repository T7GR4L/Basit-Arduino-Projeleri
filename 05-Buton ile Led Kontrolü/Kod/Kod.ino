int Buton = 0;

int Led = 0;

void setup()
{
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  Buton = digitalRead(3);
  if (Buton == 1) {
    if (Led == 1) {
      digitalWrite(4, LOW);
      Led = 0;
    } else {
      digitalWrite(4, HIGH);
      Led = 1;
    }
    delay(500); // Wait for 500 millisecond(s)
  }
}