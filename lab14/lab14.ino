#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int tempo = 0;
int alarme = 0;

void setup() {
  lcd.begin(16, 2);
  lcd.print("Tudo ok");
  pinMode(8, INPUT_PULLUP);
  pinMode(9, OUTPUT);
}

void loop() {
  if (digitalRead(7)) {
    lcd.setCursor(0, 0);
    lcd.print("Alarme! Tempo:");
    tempo = millis();
    alarme = 1;
  }

  if (alarme) {
    lcd.setCursor(0, 1);
    int contador = (millis() - tempo) / 1000;
    lcd.print(contador);
    lcd.print("segundos");
    
    if (contador < 10) {
      digitalWrite(9, HIGH);
    } else {
      digitalWrite(9, LOW);
    }
    
    delay(100);
  }

  if (!digitalRead(8)) {
    alarme = 0;
    lcd.clear();
    lcd.print("Tudo ok");
  }
}