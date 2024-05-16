int value = 0;
#define pot 36
float voltage = 0.0;

void setup() {
  Serial.begin(9600);

}

void loop() {
  value = analogRead(pot);
  Serial.print("value= ");
  Serial.print(value);
  delay(100);
}
