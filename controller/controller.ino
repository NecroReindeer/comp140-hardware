#include <Keyboard.h>

// String that will be read from serial port
String incomingString = "";

const int upLedPin = 13;
const int rightLedPin = 12;
const int downLedPin = 11;
const int leftLedPin = 10;
// LEDs listed in this order to correspond with serial string from game
int leds[] = {leftLedPin, downLedPin, upLedPin, rightLedPin};

const int upButtonPin = 2;
const int rightButtonPin = 3;
const int downButtonPin = 4;
const int leftButtonPin = 5;
// Buttons listed in same order as keys so that loop can be used
int buttons[] = {leftButtonPin, downButtonPin, upButtonPin, rightButtonPin};
int directionKeys[] = {KEY_LEFT_ARROW, KEY_DOWN_ARROW, KEY_UP_ARROW, KEY_RIGHT_ARROW};

// Whether the LED is on or off, set from the serial string
int ledState = 0;

// Whether the button is on or off, read from the digital pins
int buttonState = 0;

void setup() 
{
  // Set LEDs and buttons to output and input respectively
  for (int i = 0; i < 4; i++)
  {
    pinMode(leds[i], OUTPUT);
    pinMode(buttons[i], INPUT);
  }
}

void loop() 
{  
  if (Serial.available() > 0) 
  {
    // Using 9 to terminate the string
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
