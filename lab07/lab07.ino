// C++ code
//

int ledverde = 11;
int ledbranco = 10;
int ledvermelho = 9;
float LDR = A0;
int valorLDR = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(ledverde, OUTPUT);
  pinMode(ledbranco, OUTPUT);
  pinMode(ledvermelho, OUTPUT);
  pinMode(LDR, INPUT);
}

void loop()
{
  valorLDR = analogRead(LDR);
    
 //luminosidade baixa
    
    if(valorLDR < 100){
     apagaLeds();
     digitalWrite(ledverde, HIGH);
  }
  
  //luminosidade média
  
  if(valorLDR >= 100 && valorLDR < 150){
    apagaLeds();
    digitalWrite(ledbranco, HIGH);
  }
  
  //luminosidade alta
  
  if(valorLDR > 150){
   apagaLeds();
   digitalWrite(ledvermelho, HIGH);
  }
  
  Serial.print(valorLDR);
}

void apagaLeds(){
  digitalWrite(ledverde, LOW);
  digitalWrite(ledbranco, LOW);
  digitalWrite(ledvermelho, LOW);
}