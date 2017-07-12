#define LEDpin 5
#define buttonPin 12
#define buzzer 2
// need to change according to wemos pin

int pwm = 0;
bool buttonOn = false;

void setup() {
  // put your setup code here, to run once:
  pinMode (LEDpin, OUTPUT);
  pinMode (buzzer, OUTPUT);
  pinMode (buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  checkButton();
  if (buttonOn) {
    varyOutput();
    analogWrite(LEDpin, pwm);
    tone(buzzer, 1000);
  } else {
    digitalWrite (LEDpin, LOW);
    noTone(buzzer);
  }
}

void varyOutput() {
  if (pwm > (255 - 30)) {
    pwm = 0;
  } else {
    pwm = pwm + 30;
  }
  delay(1000);
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

