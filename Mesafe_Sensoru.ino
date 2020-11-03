// mesafe sensörünün pinlerini tanımladık
int echoPin = 8;
int trigPin = 9;
// mesafe ve sure adlı değişkenleri tanımladık
long mesafe,sure;

void setup() {
  Serial.begin(9600); // Serial monitoru baslattık
  // Mesafe sensorunun pinlerini giriş çıkış olarak tanımladık
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);
}

void loop() {
  // mesafe sensorünü başlattık
  digitalWrite(trigPin,LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  sure = pulseIn(echoPin,HIGH);

  mesafe = sure /29.1/2; // mesafeyi ölçtü

  Serial.println(mesafe); // mesafeyi ekrana yazdı
  delay(1000);

}
