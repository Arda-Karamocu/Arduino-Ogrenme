int Led1 = 16;
int Led2 = 17;
int Led3 = 5;
int Led4 = 18;
int Led5 = 19;
int state;
int button = 23;

void setup() {
  Serial.begin(9600);

  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Led3, OUTPUT);
  pinMode(Led4, OUTPUT);
  pinMode(Led5, OUTPUT);

  pinMode(button, INPUT);
}

void loop() {
  state = digitalRead(button);

  if (state == 1) {
    digitalWrite(Led1, HIGH);
    digitalWrite(Led2, HIGH);
    digitalWrite(Led3, HIGH);
    digitalWrite(Led4, HIGH);
    digitalWrite(Led5, HIGH);

  } else {
    digitalWrite(Led1, LOW);
    digitalWrite(Led2, LOW);
    digitalWrite(Led3, LOW);
    digitalWrite(Led4, LOW);
    digitalWrite(Led5, LOW);
  }
}
