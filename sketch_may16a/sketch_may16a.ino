#include "retrieval.h"

const int laserPin = 7;

static int dotDelay = 200;

int greenPin = 10;

int val = 0;

void setup() {
  pinMode(laserPin, OUTPUT);
  Serial.begin(9600);

}

void flashDot(char cha)
{
  digitalWrite(laserPin, HIGH);

  if (cha == '.')
  {
    delay(dotDelay);
  }
  else {
    delay(dotDelay * 3);
  }

  digitalWrite(laserPin, LOW);
  delay(dotDelay);
}

void flashSequence(char *sequence)
{
  int i = 0;
  while(sequence[i] != NULL)
  {
    flashDot(sequence[i]);
    i++;
  }
  delay(dotDelay * 3);
}

void morseSignal(char ch)
{
  if (ch >= 'a' && ch <= 'z')
  {
    flashSequence(letters[ch - 'a']);
  }
  else if (ch >= 'A' && ch <= 'Z')
  {
    flashSequence(letters[ch - 'A']);
   }
   else if(ch >= '0' && ch <= '9')
   {
    flashSequence(letters[ch - '0']);
   }
   else if(ch == ' ')
   {
    delay(dotDelay * 4);
   }
}

void loop() {
  char ch = 0;
  if (Serial.available() > 0)
  {
    ch = Serial.read();  
  }

  morseSignal(ch);
 
}
