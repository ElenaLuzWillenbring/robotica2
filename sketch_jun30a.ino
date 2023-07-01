//
int pinoLed = 11;


void setup() {
  pinMode(pinoLed, OUTPUT);
  
}

void loop() {
  analogWrite(pinoLed, 5);
  delay(500);
  analogWrite(pinoLed, 50);
  delay(500);
  analogWrite(pinoLed, 100);
  delay(500);
  analogWrite(pinoLed, 150);
  delay(500);
  analogWrite(pinoLed, 200);
  delay(500);
  analogWrite(pinoLed, 250);
  delay(500);
  analogWrite(pinoLed, 255);
  delay(500);
  analogWrite(pinoLed, 255);
  delay(500);
  analogWrite(pinoLed, 250);
  delay(500);
  analogWrite(pinoLed, 150);
  delay(500);
  analogWrite(pinoLed, 100);
  delay(500);
  analogWrite(pinoLed, 50);
  delay(500);
  analogWrite(pinoLed, 5);
  delay(500);
  analogWrite(pinoLed, 0);
  delay(500);
}
