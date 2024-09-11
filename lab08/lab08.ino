const int sensorPin = A0; 
const int buzzerPin = A2; 


void setup() {
  Serial.begin(9600); 
  pinMode(buzzerPin, OUTPUT); 
}

void loop() {
  
  int sensorValue = analogRead(sensorPin);
  
  
  float voltage = sensorValue * (5.0 / 1023.0);
  
  
  float temperature = (voltage - 0.5) * 100.0;
  
  
  Serial.print("Temperatura: ");
  Serial.print(temperature);
  Serial.println(" °C");
  
  
  if (temperature > 90.0) {
    digitalWrite(buzzerPin, HIGH); 
  } else {
    digitalWrite(buzzerPin, LOW); 
  }
  
  if (temperature > 30.0) {
    Serial.println("Temperatura acima de 30°C!");
  }
  
  
  delay(2500);
}