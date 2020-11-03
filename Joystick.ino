// joysitck pinleri tanımlandı
int X_pin = A2; 
int Y_pin = A3; 

void setup() {
  Serial.begin(9600);  // Serial Monitor çalıştı
}

void loop() {
  // x ve y degerleri ekrana yazılıyor
  Serial.print("X-deger: ");
  Serial.print(analogRead(X_pin));
  Serial.print(" | ");
  Serial.print("Y-deger: ");
  Serial.print(analogRead(Y_pin));
  Serial.println(" | ");
  delay(200);
}
