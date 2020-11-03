#include <Servo.h>  // Servo kutuphanesi projeye dahil edildi 
Servo servo_motor;  // servo motor nesnesi yaratildi 

void setup()
{
  servo_motor.attach(2);  // Servo motor 2 numarali pine baglandi 
}
 
void loop()
{
  servo_motor.write(0);  // Motorun mili 100. dereceye donuyor
  delay(1000);
  servo_motor.write(180);   // Motor mili 20. dereceye donuyor 
  delay(1000);
}
