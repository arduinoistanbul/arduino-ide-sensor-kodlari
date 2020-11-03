#include <AvrI2c_Greiman.h>
#include <LiquidCrystal_I2C_AvrI2C.h>
LiquidCrystal_I2C_AvrI2C lcd(0x27,16,2);

void setup()
{
  lcd.begin();
  lcd.print("merhaba");
  }

void loop() {}
