// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(13, LOW);
  digitalWrite(1, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(1, LOW);
  digitalWrite(5, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(5, LOW);
}