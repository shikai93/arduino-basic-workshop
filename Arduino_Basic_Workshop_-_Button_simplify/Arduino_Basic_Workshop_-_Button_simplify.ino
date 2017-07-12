#define LEDpin 5
#define buttonPin 12

int buttonOn = false;

void setup() {
  // put your setup code here, to run once:
  pinMode (LEDpin, OUTPUT);
  pinMode (buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  checkButton();
  if (buttonOn) {
    blinkLED (buttonPin);
  }
}

void blinkLED (int pin) {
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW);
  delay(1000);
}

void checkButton() {
  if (digitalRead(buttonPin) == HIGH) {
    buttonOn = !buttonOn;   //toggle button
    delay(500);             //prevent button from toggling twice
  }
}

