// C++ code
//

int button = 12;
int transistor = A0;

void setup()
{
  pinMode(button, INPUT);
  pinMode(transistor, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
    int buttonState = digitalRead(button);
	if(buttonState == HIGH)
    {
     	Serial.println("Pressionado");
		digitalWrite(transistor, buttonState);     
    }
  	else
    {
		digitalWrite(transistor, buttonState);     
    }
}