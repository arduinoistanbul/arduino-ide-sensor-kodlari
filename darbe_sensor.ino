int darbe_sensor=3;
int darbe_deger;

void setup() {
  pinMode(darbe_sensor,INPUT);
  Serial.begin(9600);

}

void loop() {
  darbe_deger = digitalRead(darbe_sensor);

  if(darbe_deger==HIGH){
    Serial.println("darbe var");
    delay(1000);
  } else if(darbe_deger==LOW) {
    Serial.println("darbe yok");
    delay(1000);
  }

}
