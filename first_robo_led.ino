int greenLed = 8;
int redLed = 7;
int yellowLed = 6;
int rgbLed = 9;
int green2 = 10;

int delaytime = 200;

void setup()
{ 
  pinMode(greenLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(rgbLed, OUTPUT);
  pinMode(green2, OUTPUT);
}
void loop() 
{
  digitalWrite(greenLed, HIGH);
  digitalWrite(green2, HIGH);
  digitalWrite(redLed, HIGH);
  delay(delaytime);
  digitalWrite(greenLed, LOW);
  digitalWrite(green2, LOW);
  digitalWrite(redLed, LOW);
  delay(delaytime);
  

  // digitalWrite(green2, HIGH);
  // delay(delaytime);
  // digitalWrite(green2, LOW);
  // delay(delaytime);

  // digitalWrite(redLed, HIGH);
  // delay(delaytime);
  // digitalWrite(redLed, LOW);
  // delay(delaytime);

  // digitalWrite(redLed, HIGH);
  // delay(delaytime);
  // digitalWrite(redLed, LOW);
  // delay(delaytime);

  digitalWrite(yellowLed, HIGH);
  digitalWrite(rgbLed,HIGH);
  delay(delaytime);
  digitalWrite(yellowLed, LOW);
  digitalWrite(rgbLed, LOW);
  delay(delaytime);

  // digitalWrite(rgbLed,HIGH);
  // delay(delaytime);
  // digitalWrite(rgbLed, LOW);
  // delay(delaytime);

 // digitalWrite(rgbLed, HIGH);
 // delay(500);
 // digitalWrite(rgbLed, LOW);
 // delay(500);

 // digitalWrite(green2, HIGH);
 // delay(delaytime);
 // digitalWrite(green2, LOW);
 // delay(delaytime);
 
 
}
