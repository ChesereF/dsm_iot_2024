// Biblioteca para o display LCD:
#include <LiquidCrystal.h>

int ledPin = 11;               
int PIRpin = 8;            
int pirState = LOW;            
int val = 0;


int photocellPin = A0;     
int photocellReading;             

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);                        

void setup() {  

  pinMode(ledPin, OUTPUT);       
  pinMode(PIRpin, INPUT);     
  pinMode(photocellPin, INPUT);
  
  Serial.begin(9600);
  lcd.begin(16, 2); 
  
  lcd.setCursor(2, 0);                   	

  lcd.print("Olá!");               
  
  lcd.setCursor(0, 1);
  
  lcd.print("PIR + LED + LCD");           
  
  delay(2000); 
  
  lcd.clear();
  
  lcd.setCursor(0, 0);
  
  lcd.print("Programa em execução");
  delay(3000);
  lcd.clear();	
  
}

void loop(){
  val = digitalRead(PIRpin);  
  photocellReading = analogRead(photocellPin);

  if (val == HIGH) {            
    digitalWrite(ledPin, HIGH); 
    delay(150);

		if (pirState == LOW) {
		  lcd.clear() ;
		  lcd.setCursor(0, 0);                 
		  lcd.print("Detectado !");   
		  lcd.setCursor(0, 1);                 
		  lcd.print("Existe Movimento"); 		  
		  pirState = HIGH;
          delay(5000) ;
		}
  } else {
      digitalWrite(ledPin, LOW); 
	 
	  scrollScreenSaver() ;
      if (pirState == HIGH){
		
		  pirState = LOW;
      }
  }
}

void scrollScreenSaver() {
	
	lcd.clear() ;
  	lcd.setCursor(15, 0);                 
	lcd.print("Nao foi detectado");   
	lcd.setCursor(15, 1); 
    lcd.print("Não há movimento");	
	
    for (int positionCounter = 0; positionCounter < 22; positionCounter++) {
		
		lcd.scrollDisplayLeft();
		
		delay(150);
    
	}
}