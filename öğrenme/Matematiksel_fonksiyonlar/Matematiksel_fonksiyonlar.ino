int a = 5;
int b = 2;
int c = -582;
int d = 50;

void setup() {
  Serial.begin(9600);
  Serial.println(sq(a)); //"Sayının kökü"

  Serial.println(sqrt(a)); //"Sayının karakökü"

  Serial.println(pow(a,b)); //"a üssü b"

  Serial.println(min(a,b)); //"Küçük olanı döndürür"

  Serial.println(max(a,b)); //"Büyük olanı döndürür"

  Serial.println(abs(c)); //"Mutlak değer"

  d = constrain(d, 10, 250); //"Belirtilen aralıktaysa sayıyı döndür eğer daha büyükse aralığın en büyüğünü, küçükse aralığın en küçüğünü döndürür"

  Serial.println(d);

  //"map(potValue, 0, 1023, 0, 255);" //"Orantılamaya yarar"
}

void loop() {

}
