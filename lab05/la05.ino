// C++ code
//
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(2, INPUT);
}

void loop()
{
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  if (digitalRead(2) == 0) {
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    delay(2000); // Wait for 2000 millisecond(s)
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    delay(2000); // Wait for 2000 millisecond(s)
    digitalWrite(6, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    delay(3000); // Wait for 2000 millisecond(s)
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    delay(2000); // Wait for 3000 millisecond(s)
    digitalWrite(13, LOW);
    digitalWrite(11, HIGH);
  }
}