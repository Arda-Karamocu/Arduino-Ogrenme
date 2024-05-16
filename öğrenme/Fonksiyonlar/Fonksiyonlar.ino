//void fonksiyon tanımlar pythondaki def gibi
int a = 5;
int b = 7;
int sonuc = 0;
int sonuc2 = 0;
void setup() {
  Serial.begin(9600);
  sonuc = hesapla(a,b);
  ekranaYaz(sonuc);
  sifirla();
  Serial.println(a);
  Serial.println(b);
  Serial.println(sonuc);
  sonuc2 = hepsiniTopla();
  Serial.println(sonuc2);
}

void loop() {
  // put your main code here, to run repeatedly:

}
void ekranaYaz(int z){//Değer döndüren ve parametre alan fonksiyon
  Serial.println(z);
}

int hesapla(int x , int y){//int değeri döndürdüğü için int
  return (x + y) / 
  2 + 5;
}

void sifirla(){//Değer döndürmeyen ve parametre almayan fonksiyon
  a = 0;
  b = 0;
  sonuc = 0;
}

int hepsiniTopla(){
  return a + b;
}