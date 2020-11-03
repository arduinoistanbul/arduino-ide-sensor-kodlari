int potpin = A0;  // potansiyometre analog pine bağlandı
int deger; // pot deger olçmek için değişken atandı

void setup() {
  Serial.begin(9600); // Seri port ekranı çalıştı

}

void loop() {
  deger = analogRead(potpin); // potansiyometre degeri ölçüldü

  Serial.println(deger); // deger ekrana basıldı
  delay(300);

}
