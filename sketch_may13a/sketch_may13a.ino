int redPin = 11;

int greenPin = 10;

int val = 0;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  for (val = 255; val > 0; val--)
  {
    analogWrite(redPin, val);
    analogWrite(greenPin, 255- val);
    Serial.println(val, DEC);
    delay(10);
  }

  for (val = 0; 255 - val > 0; val++)
  {
    analogWrite(redPin, val);
    analogWrite(greenPin, 255- val);
    Serial.println(val, DEC);
    delay(10);
  }
}
