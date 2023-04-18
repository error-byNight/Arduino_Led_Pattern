int greenLed = 8;
int redLed = 7;
int yellowLed = 6;
int rgbLed = 9;

int delaytime = 40;

void setup()
{
  pinMode(greenLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(rgbLed, OUTPUT);

}
void loop()
{
  digitalWrite(greenLed, HIGH);
  delay(delaytime);
  digitalWrite(greenLed, LOW);
  delay(delaytime);

  digitalWrite(redLed, HIGH);
  delay(delaytime);
  digitalWrite(redLed, LOW);
  delay(delaytime);

  digitalWrite(yellowLed, HIGH);
  delay(delaytime);
  digitalWrite(yellowLed, LOW);
  delay(delaytime);

digitalWrite(rgbLed,HIGH);
delay(delaytime);
digitalWrite(rgbLed, LOW);
delay(delaytime);\
  
}
