#define buton 1
#define led 12

int buton_durumu = 0;

void setup() {
  
  pinMode(buton, INPUT);
  pinMode(led, OUTPUT);

}

void loop() {

  buton_durumu = digitalRead(buton);

  if (buton_durumu == 1){

    digitalWrite(led, HIGH);
  }
  else{
    
    digitalWrite(led, LOW);
  }
}
