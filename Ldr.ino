int ldr = A0; // ldr A0 olarak atandı
int ldr_deger; // ldr_deger adında değişken atandı

void setup() {
  Serial.begin(9600); // Seri haberlesme başladı

}

void loop() {
  ldr_deger = analogRead(ldr); // ldr degeri ölçüldü

  Serial.println(ldr_deger); // deger ekrana basıldı
  delay(500); // yarım sn arayla
}
