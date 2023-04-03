int led = 32;
int led2 = 31;
int pot = A14;
int delayTime;


void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  delayTime = analogRead(pot);
  digitalWrite(led, HIGH);
  digitalWrite(led2, HIGH);

  delay(500);
  digitalWrite(led, LOW);
  digitalWrite(led2, HIGH);

}
