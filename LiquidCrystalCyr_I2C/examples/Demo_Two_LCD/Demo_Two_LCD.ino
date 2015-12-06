//Vasyl Yudin
//BlockDuino.org
//With support Cyrillic

#include <Wire.h> 
#include <LiquidCrystalCyr_I2C.h>

LiquidCrystalCyr_I2C lcd1(0x3F,8,2);  
LiquidCrystalCyr_I2C lcd2(0x27,8,2); 
//LiquidCrystalCyr_I2C lcd2(0x3D,8,2);
void setup()
{
  lcd1.init();
  lcd2.init();
 
  lcd2.backlight();
  lcd1.print("Миру");
  lcd1.setCursor(0, 1);
  lcd1.print("     МИР");
  lcd2.print("Риму");
  lcd2.setCursor(0, 1);
  lcd2.print("     РИМ");
  delay(5000);
  lcd1.home();
  lcd2.home();
}

void loop()
{
  lcd1.print("АБВГДЕЁЖ");
  lcd1.setCursor(0, 1);
  lcd1.print("ЗИЙКЛМНО");
  lcd2.print("ПРСТУФХЦ");
  lcd2.setCursor(0, 1);
  lcd2.print("ЧШЩЪЫЬЭЮ");
  delay(3000);
  lcd1.clear();
  lcd2.clear();  
  lcd1.print("абвгдеёж");
  lcd1.setCursor(0, 1);
  lcd1.print("зийклмно");
  lcd2.print("прстуфхц");
  lcd2.setCursor(0, 1);
  lcd2.print("чшщъыьэю");
  delay(3000);
  lcd1.clear();
  lcd2.clear();
  lcd1.print("ЯЯЯЯЯЯЯЯ");
  lcd2.setCursor(0, 1);
  lcd2.print("яяяяяяяя");
  delay(3000);
  lcd1.clear();
  lcd2.clear();
}
