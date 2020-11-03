int nem_sensor = A0; // sensoru A0 pinine atadık
int nem_deger; // nem deger adında değişken atadık

void setup() {
  Serial.begin(9600); // Serial monitoru başlattık

}

void loop() {
  nem_deger = analogRead(nem_sensor); // nem degerini okuttuk

  Serial.println(nem_deger); // nem degerini ekrana yazdırdık
  delay(1000);

}
