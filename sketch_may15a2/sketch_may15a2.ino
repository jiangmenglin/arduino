const int redPin = 11;
const int greenPin = 10;
const int bluePin = 9; 

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void color(unsigned char red, unsigned char green, unsigned char blue)
{
  analogWrite(redPin, red);
  analogWrite(bluePin, blue);
  analogWrite(greenPin, green);
}

void loop() {
  // put your main code here, to run repeatedly:
  color(0,255,255);
  delay(1000);
  color(255,0,255);
  delay(1000);
  color(255,255,0);
  delay(1000);

  color(0,255,255);
  delay(1000);
  color(0,128,255);
  delay(1000);
  color(0,0,255);
  delay(1000);

  color(255,0,255);
  delay(1000);
  color(255,255,0);
  delay(1000);
  color(255,0,0);
  delay(1000);

  color(128,255,0);
  delay(1000);
}
