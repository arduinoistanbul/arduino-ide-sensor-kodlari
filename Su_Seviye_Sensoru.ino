int su_sensor = A0; // Sensoru A0 pinine atadık
int su_seviyesi; // suyun seviyesini belirlemek amaçlı değişken atadık

void setup() {
  Serial.begin(9600); // serial monitoru başlattık

}

void loop() {
  su_seviyesi = analogRead(su_sensor); // su seviyesini ölçtü

  Serial.println(su_seviyesi); // su seviyesini ekrana yazdı
  delay(500);

}
