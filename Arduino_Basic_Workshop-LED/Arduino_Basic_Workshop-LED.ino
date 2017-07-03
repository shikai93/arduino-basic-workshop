int monPin = 5;
int tuePin = 4;
int wedPin = 0;
int thuPin = 2;
int friPin = 14;

void setup() {
  pinMode(monPin, OUTPUT);
  pinMode(tuePin, OUTPUT);
  pinMode(wedPin, OUTPUT);
  pinMode(thuPin, OUTPUT);
  pinMode(friPin, OUTPUT);
}

void loop() {
  onLED (monPin);
  blinkLED (tuePin);
}

void blinkLED(int pin) {
  digitalWrite(pin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(pin, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
}

void onLED(int pin) {
  digitalWrite(pin, HIGH);
}
