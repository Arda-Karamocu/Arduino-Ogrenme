int a = 0;  //Global değişkenler
int b = 7;
void setup() {
  int b = 0;//Lokal değişkendir sadece bulunduğu fonksiyon içinde geçer(eğer öyle bir değişken varsa lokal olarak günceller)
  Serial.begin(9600);
  Serial.println(b);
  //örnek
}

void loop() {
  int b = 6;//Lokal değişkendir sadece bulunduğu fonksiyon içinde geçer(eğer öyle bir değişken varsa lokal olarak günceller)
  Serial.println(b);
  for (; a < 10; a++) {
    int b = 9;//Lokal değişkendir sadece bulunduğu fonksiyon(for) içinde geçer(eğer öyle bir değişken varsa lokal olarak günceller)
    Serial.println(b);
  }
}
