#define sinyal_sag 14

int ledState = LOW;
unsigned long previousMillis = 0;
const long interval = 1000;

void setup() {
  pinMode(sinyal_sag, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
    digitalWrite(sinyal_sag, ledState);
  }
  Serial.println("kamilll");
}
