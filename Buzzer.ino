int buzzer = 3; // buzzer + kısmı 3. pine atadık

void setup() {
 pinMode(buzzer,OUTPUT); // buzzer çıkış pini

}

void loop() {
  digitalWrite(buzzer,HIGH); // buzzer öttü
  delay(1000); // 1 sn boyunca
  digitalWrite(buzzer,LOW); // buzzer söndü
  delay(1000); // 1 sn boyunca
 
}
