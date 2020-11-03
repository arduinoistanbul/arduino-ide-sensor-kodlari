int led = 3; // ledi 3. pine bağladığımızı tanımladık

void setup() {
  pinMode(led, OUTPUT); // ledl çıkış pinidir. Yani dışarı tepki verir.
}

void loop() {

  digitalWrite(led, HIGH); // ledi yakıyoruz
  delay(1000); // 1 sn boyunca
  digitalWrite(led, LOW); // ledi söndürüyoruz.
  delay(1000); // 1 sn boyunca

}
