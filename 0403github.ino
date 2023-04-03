int led = 32;
int led2 = 31;
int pot = A14;
int delayTime;
int buttonPina = 33;



void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(buttonPina, INPUT);

}

void loop() {
  if (digitalRead(buttonPina) == HIGH) {

    delayTime = analogRead(pot);
    digitalWrite(led, HIGH);
    digitalWrite(led2, HIGH);
    delay(delayTime);
    digitalWrite(led, LOW);
    digitalWrite(led2, HIGH);
  }

}
