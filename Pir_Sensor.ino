int pirPin = 3;  //Sensörü takacağımız pin
int hareket;  //Sensörden aldığımız veri

void setup() {
  Serial.begin(9600);  // serial monitor çalıştı
  pinMode(pirPin,INPUT);

}

void loop() {
  hareket = digitalRead(pirPin);    //Sensörden okuma yapıyoruz.

  if(hareket == HIGH) {  // eger hareket varsa
    Serial.println("hareket var !!");  // yaz
  } else if (hareket == LOW) { // eğer hareket yoksa 
    Serial.println("hareket yok !!");  // yaz
  }

}
