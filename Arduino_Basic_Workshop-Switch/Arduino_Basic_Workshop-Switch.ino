int monPin = 5;
int tuePin = 4;
int wedPin = 0;
int thuPin = 2;
int friPin = 14;
int buttonPin = 12;

int pwm = 0;
bool buttonOn = false;

void setup() {
  pinMode(monPin, OUTPUT);
  pinMode(tuePin, OUTPUT);
  pinMode(wedPin, OUTPUT);
  pinMode(thuPin, OUTPUT);
  pinMode(friPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonOn = checkButton();
  if (buttonOn) {
    onLED (monPin);
  } else {
    offLED (monPin);
  }
}

bool checkButton(){
  if (digitalRead(buttonPin) == HIGH){
    buttonOn = !buttonOn;   //toggle button
    delay(500);             //prevent button from toggling twice
  }
  return buttonOn;
}

void varyOutput(){
  if (pwm > 225) {
    pwm = 0;
  } else {
    pwm = pwm + 30;
  }
  delay(1000);
}

void offLED(int pin) {
  digitalWrite(pin, LOW);
}

void blinkLED(int pin) {
  digitalWrite(pin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(pin, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
}

void onLED(int pin) {
  analogWrite(pin, pwm);
}
