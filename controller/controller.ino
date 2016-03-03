#include <Keyboard.h>

String incomingString = "";


int upLedPin = 13;
int rightLedPin = 12;
int downLedPin = 11;
int leftLedPin = 10;
int leds[] = {leftLedPin, downLedPin, upLedPin, rightLedPin};

const int upButtonPin = 2;
const int rightButtonPin = 3;
const int downButtonPin = 4;
const int leftButtonPin = 5;
int buttons[] = {leftButtonPin, downButtonPin, upButtonPin, rightButtonPin};

char directionKeys[] = {KEY_LEFT_ARROW, KEY_DOWN_ARROW, KEY_UP_ARROW, KEY_RIGHT_ARROW};

int ledState = 0;
int buttonState = 0;

void setup() 
{
  pinMode(upLedPin, OUTPUT);
  pinMode(rightLedPin, OUTPUT);
  pinMode(leftLedPin, OUTPUT);
  pinMode(downLedPin, OUTPUT);
  pinMode(upButtonPin, INPUT);
  pinMode(downButtonPin, INPUT);
  pinMode(rightButtonPin, INPUT);
  pinMode(leftButtonPin, INPUT);

}

void loop() 
{  
  if (Serial.available() > 0) 
  {
    incomingString = Serial.readStringUntil('9');

    for (int i = 0; i < 4; i++)
    {
      ledState = incomingString[i];
      if (ledState == '1')
      {
       digitalWrite(leds[i], HIGH);
      }
      else if (ledState == '0')
      {
       digitalWrite(leds[i], LOW);
      }
    }
  }  

  for (int i = 0; i < 4; i++)
    {
      buttonState = digitalRead(buttons[i]);
      if (buttonState == HIGH)
      {
        Keyboard.press(directionKeys[i]);
        Keyboard.release(directionKeys[i]);
      }
    }

}
