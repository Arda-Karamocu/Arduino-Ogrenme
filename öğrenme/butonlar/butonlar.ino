#define button1 4
#define button2 8
int sayac;
void setup() {
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(button1)) {
    sayac++;
  }
  if (digitalRead(button2)) {
    sayac--;
  }
  Serial.println(sayac);
  delay(100);
}
