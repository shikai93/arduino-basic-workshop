#define LEDpin 5

void setup() {
  // put your setup code here, to run once:
  pinMode (LEDpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  blinkLED (LEDpin);
}

void blinkLED (int pin) {
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW);
  delay(1000);
}

