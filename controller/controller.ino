#include <Keyboard.h>

// String that will be read from serial port
String incomingString = "";

const int upLedPin = 13;
const int rightLedPin = 12;
const int downLedPin = 11;
const int leftLedPin = 10;
// LEDs listed in this order to correspond with serial string from game
int leds[] = {leftLedPin, downLedPin, upLedPin, rightLedPin};
// sizeof returns size in bytes so divide by size of int
int numberOfLeds = sizeof(leds)/sizeof(int);

const int upButtonPin = 2;
const int rightButtonPin = 3;
const int downButtonPin = 4;
const int leftButtonPin = 5;
// Buttons listed in same order as keys so that loop can be used
int buttons[] = {leftButtonPin, downButtonPin, upButtonPin, rightButtonPin};
int directionKeys[] = {KEY_LEFT_ARROW, KEY_DOWN_ARROW, KEY_UP_ARROW, KEY_RIGHT_ARROW};
int numberOfButtons = sizeof(buttons)/sizeof(int);

// Whether the LED is on or off, set from the serial string
int ledState = 0;

// Whether the button is on or off, read from the digital pins
int buttonState = 0;

void setup() 
{
  // Set LEDs and buttons to output and input respectively
  // Using number of leds as there is the same number as buttons
  for (int i = 0; i < numberOfLeds; i++)
  {
    pinMode(leds[i], OUTPUT);
    pinMode(buttons[i], INPUT);
  }
}

void loop() 
{ 
  // In separate loop to buttons as check for serial needs to 
  // be outside loop for leds to behave correctly
  if (Serial.available() > 0) 
  {
    // Using 9 to terminate the string
    incomingString = Serial.readStringUntil('9');

    for (int i = 0; i < numberOfLeds; i++)
    {
      ledState = incomingString[i];
      // Turn LED on if '1' is received
      if (ledState == '1')
      {
       digitalWrite(leds[i], HIGH);
      }
      // Turn LED off if '0' is received
      else if (ledState == '0')
      {
       digitalWrite(leds[i], LOW);
      }
    }
  }  

  for (int i = 0; i < numberOfButtons; i++)
  {
    buttonState = digitalRead(buttons[i]);
    if (buttonState == HIGH)
    {
      Keyboard.press(directionKeys[i]);
      Keyboard.release(directionKeys[i]);
    }
  }
}
