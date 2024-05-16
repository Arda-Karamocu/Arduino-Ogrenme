int i = 1;
int a = 100;
int b = 1;
String c = "*";
void setup() {
  Serial.begin(9600);


  while (i < 10) {  //normal while
    Serial.println("Hello World");
    i++;
  }

  do {
    Serial.println("Atatürk");  //önce yap sonra kontrol et tarzı bir şey
  } while (i < 10);

  //Örnekler
  while (a > 0) {
    Serial.println(a);
    a--;
  }


  while (b < 20){
    Serial.println(c);
    c += "*";
    b++;

  }
}
void loop() {
  // put your main code here, to run repeatedly:
}
