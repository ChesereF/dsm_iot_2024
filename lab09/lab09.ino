// C++ code
//
const int led = 11;
const int sensor = 2;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(sensor, INPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = digitalRead(sensor);
  
  if (sensorValue == HIGH) {
    alarme();
  } else {
    digitalWrite(led, LOW);
  }
}

void alarme()
{
  digitalWrite(led, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(led, LOW);
  delay(100); // Wait for 1000 millisecond(s)
}