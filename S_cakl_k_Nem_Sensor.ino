#include <dht11.h> // dht11 kütüphanesini ekliyoruz.
int DHT11PIN = 2; // DHT11PIN olarak Dijital 2"yi belirliyoruz.
dht11 DHT11; // dht11 nesnesine isim veriyoruz

void setup() {
  Serial.begin(9600);  // serial monitoru başlattık
  
}

void loop() {
  int chk = DHT11.read(DHT11PIN); // dht11 degerini okuttuk

  // Sicaklık degerini yazdırdık
  Serial.println("Sicaklik ");
  Serial.println((float)DHT11.temperature, 2);
  
  // nem degerini yazdırdık
  Serial.println("Nem (%): ");
  Serial.println((float)DHT11.humidity, 2);
  
  delay(2000);

}
