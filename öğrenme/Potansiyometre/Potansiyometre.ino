#define led 3
#define pot A0
int potValue = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(pot, INPUT);
}

void loop() {
  potValue = analogRead(pot);
  potValue = map(potValue, 0, 1023, 0, 255);
  analogWrite(led,potValue);
}
