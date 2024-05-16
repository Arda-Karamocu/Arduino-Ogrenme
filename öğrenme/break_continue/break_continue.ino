int i = 0;
int a = 0;

void setup() {
  Serial.begin(9600);

  while (i < 10) {
    i++;
    Serial.println("Çok yaşa Mustafa Kemal Paşa A");
    if (i == 4) {
      break;  //Döngüyü terk et
    }
    Serial.println("Çok yaşa Mustafa Kemal Paşa B");  //Çalışmayacak
    Serial.println("Çok yaşa Mustafa Kemal Paşa C");  //çalışmayacak
  }

  while (a < 10) {

    Serial.print(a); Serial.println((". tur başladı"));
    a++;
    Serial.println("Çok yaşa Mustafa Kemal Paşa A");
    if (a == 4) {
      continue;  //Döngüyü terk et
    }
    Serial.println("Çok yaşa Mustafa Kemal Paşa B");
    Serial.println("Çok yaşa Mustafa Kemal Paşa C");
  }
}

void loop() {
  // put your main code here, to run repeatedly:
}
