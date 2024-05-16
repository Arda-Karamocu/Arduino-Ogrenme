const int Led1 = 16;//"Const" değiştirilemez değişken

#define Led2 16 //Bütün "Led2" olan yerlere 3 yazılacak
#define Led3 17 //Integer ile aynı yeri tutar
#define Led3 5 //Sonuna noktalı virgül yazılmaz ve eşittir (=) işareti kullanılmaz
#define Led4 18
#define Led5 19
#define button 23

int state;


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
