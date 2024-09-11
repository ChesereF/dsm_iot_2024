// C++ code
//

#include <Servo.h>

int pos = 0;
int button = 13;
int buttonState = 0;

Servo servo_9;

void setup()
{
  pinMode(button, INPUT);
  servo_9.attach(9, 500, 2500);
  Serial.begin(9600);
}

void loop()
{
  buttonState = digitalRead(button);
  if(buttonState == HIGH)
    {
		servo_9.write(90);   
    }
  	else
    {
		servo_9.write(0);       
    }
  
}