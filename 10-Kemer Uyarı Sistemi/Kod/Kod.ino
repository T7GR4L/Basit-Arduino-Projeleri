int Kuvvet = 0;

int Kemer = 0;

void setup()
{
  pinMode(5, INPUT);
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  Kemer = digitalRead(5);
  Kuvvet = analogRead(A0);
  if (Kuvvet > 800) {
    if (Kemer == 1) {
      digitalWrite(3, HIGH);
      digitalWrite(2, LOW);
    } else {
      digitalWrite(3, LOW);
      digitalWrite(2, HIGH);
      delay(1000); // Wait for 1000 millisecond(s)
      tone(4, 523, 100); // play tone 60 (C5 = 523 Hz)
    }
  } else {
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
  }
}