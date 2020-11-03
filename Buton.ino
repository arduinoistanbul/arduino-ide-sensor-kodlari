int buton = 7; // butonu 7. pine bağlı olduğunnu belirttik
int butondurumu; // butona basılıp basılmadığını anlamak için değişken atadık

void setup() {
  Serial.begin(9600); // serial monitor çalıştı
  pinMode(buton, INPUT); // buton giriş pini

}

void loop() {

  butondurumu = digitalRead(buton); // butona basılıp basılmadığını okuyor

  if (butondurumu == HIGH) { // eger butona basılmıssa
    Serial.println("butona basiliyor...");
    delay(250);
  }

  else { // aksi taktirde
    Serial.println("butona basilmiyor...");
    delay(250);
  }

}
