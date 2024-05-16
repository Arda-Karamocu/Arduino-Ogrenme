void setup() {
  Serial.begin(9600);

  for (int i=0; i < 10; i++){//(1. parametre değişkenin başlangıç noktası; 2. parametre döngünün devam şartı;3. parametre değişkenin güncelleme tipi)
  Serial.println(i);
  Serial.println("Hello");
  Serial.println("World");
  }


}

void loop() {
  // put your main code here, to run repeatedly:

}
