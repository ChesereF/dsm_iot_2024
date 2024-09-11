// C++ code
//
int sensor = 11;
int lampada = 2;
void setup()
{
  Serial.begin(9600);
  pinMode(sensor, INPUT);
  pinMode(lampada, OUTPUT);
}

void loop()
{
  int valorSensor = digitalRead(sensor);
  if(valorSensor == HIGH){
    digitalWrite(lampada, HIGH);
  }
  else
  {
    digitalWrite(lampada, LOW);
  }
}