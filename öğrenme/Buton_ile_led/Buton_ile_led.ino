#define button1 8
#define button2 9

#define led1 2
#define led2 3
#define led3 4
#define led4 5

int last_s = 0;
int toggle = 0;

void setup() {
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  if (digitalRead(button2)) {
    toggle = !(toggle);
    while (digitalRead(button2)) {
      delay(100);
    }
    digitalWrite(led1, toggle);
    digitalWrite(led2, toggle);
    digitalWrite(led3, toggle);
    digitalWrite(led4, toggle);
  }
}
