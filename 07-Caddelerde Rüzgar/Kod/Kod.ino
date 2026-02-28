/*
  Caddelerde Rüzgar
*/

int counter;

int counter2;

int counter3;

int counter4;

int counter5;

int counter6;

int counter7;

int counter8;

void setup()
{
  pinMode(3, OUTPUT);
}

void loop()
{
  // mi mi mi mi fa_ mi
  for (counter = 0; counter < 4; ++counter) {
    tone(3, 330, 200); // play tone 52 (E4 = 330 Hz)
    delay(250); // Wait for 250 millisecond(s)
  }
  tone(3, 349, 400); // play tone 53 (F4 = 349 Hz)
  delay(450); // Wait for 450 millisecond(s)
  tone(3, 330, 200); // play tone 52 (E4 = 330 Hz)
  delay(400); // Wait for 400 millisecond(s)
  // mi mi mi la_ mi_
  for (counter2 = 0; counter2 < 3; ++counter2) {
    tone(3, 330, 200); // play tone 52 (E4 = 330 Hz)
    delay(250); // Wait for 250 millisecond(s)
  }
  tone(3, 440, 400); // play tone 57 (A4 = 440 Hz)
  delay(450); // Wait for 450 millisecond(s)
  tone(3, 330, 400); // play tone 52 (E4 = 330 Hz)
  delay(450); // Wait for 450 millisecond(s)
  // re re re re mi_ re
  for (counter3 = 0; counter3 < 4; ++counter3) {
    tone(3, 294, 200); // play tone 50 (D4 = 294 Hz)
    delay(250); // Wait for 250 millisecond(s)
  }
  tone(3, 330, 400); // play tone 52 (E4 = 330 Hz)
  delay(450); // Wait for 450 millisecond(s)
  tone(3, 294, 200); // play tone 50 (D4 = 294 Hz)
  delay(400); // Wait for 400 millisecond(s)
  // re re re mi_ re_
  for (counter4 = 0; counter4 < 3; ++counter4) {
    tone(3, 294, 200); // play tone 50 (D4 = 294 Hz)
    delay(250); // Wait for 250 millisecond(s)
  }
  tone(3, 330, 400); // play tone 52 (E4 = 330 Hz)
  delay(450); // Wait for 450 millisecond(s)
  tone(3, 294, 400); // play tone 50 (D4 = 294 Hz)
  delay(450); // Wait for 450 millisecond(s)
  // do do do do re_ do
  for (counter5 = 0; counter5 < 4; ++counter5) {
    tone(3, 262, 200); // play tone 48 (C4 = 262 Hz)
    delay(250); // Wait for 250 millisecond(s)
  }
  tone(3, 294, 400); // play tone 50 (D4 = 294 Hz)
  delay(450); // Wait for 450 millisecond(s)
  tone(3, 262, 200); // play tone 48 (C4 = 262 Hz)
  delay(400); // Wait for 400 millisecond(s)
  // do do do re_ do_
  for (counter6 = 0; counter6 < 3; ++counter6) {
    tone(3, 262, 200); // play tone 48 (C4 = 262 Hz)
    delay(250); // Wait for 250 millisecond(s)
  }
  tone(3, 294, 400); // play tone 50 (D4 = 294 Hz)
  delay(450); // Wait for 450 millisecond(s)
  tone(3, 262, 400); // play tone 48 (C4 = 262 Hz)
  delay(450); // Wait for 450 millisecond(s)
  // si si si si do_ si_
  for (counter7 = 0; counter7 < 4; ++counter7) {
    tone(3, 247, 200); // play tone 47 (B3 = 247 Hz)
    delay(250); // Wait for 250 millisecond(s)
  }
  tone(3, 262, 400); // play tone 48 (C4 = 262 Hz)
  delay(450); // Wait for 450 millisecond(s)
  tone(3, 247, 400); // play tone 47 (B3 = 247 Hz)
  delay(450); // Wait for 450 millisecond(s)
  // si si do_ si_ la___
  for (counter8 = 0; counter8 < 2; ++counter8) {
    tone(3, 247, 200); // play tone 47 (B3 = 247 Hz)
    delay(250); // Wait for 250 millisecond(s)
  }
  tone(3, 262, 400); // play tone 48 (C4 = 262 Hz)
  delay(450); // Wait for 450 millisecond(s)
  tone(3, 247, 400); // play tone 47 (B3 = 247 Hz)
  delay(450); // Wait for 450 millisecond(s)
  tone(3, 220, 1000); // play tone 45 (A3 = 220 Hz)
  delay(10000); // Wait for 10000 millisecond(s)
}