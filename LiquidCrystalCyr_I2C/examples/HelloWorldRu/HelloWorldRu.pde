//DFRobot.com
//Compatible with the Arduino IDE 1.0
//Library version:1.1
//
//Vasyl Yudin
//BlockDuino.org
//With support Cyrillic

#include <Wire.h> 
#include <LiquidCrystalCyr_I2C.h>

LiquidCrystalCyr_I2C lcd(0x27,8,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
 
  // Print a message to the LCD.
  lcd.backlight();
  lcd.print("Миру");
  lcd.setCursor(0, 1);
  lcd.print("     МИР");
  delay(5000);
  lcd.home();
}

void loop()
{
  lcd.print("АБВГДЕЁЖ");
  lcd.setCursor(0, 1);
  lcd.print("ЗИЙКЛМНО");
  delay(3000);
  lcd.clear();
  lcd.print("ПРСТУФХЦ");
  lcd.setCursor(0, 1);
  lcd.print("ЧШЩЪЫЬЭЮ");
  delay(3000);
  lcd.clear();  
  lcd.print("абвгдеёж");
  lcd.setCursor(0, 1);
  lcd.print("зийклмно");
  delay(3000);
  lcd.clear();
  lcd.print("прстуфхц");
  lcd.setCursor(0, 1);
  lcd.print("чшщъыьэю");
  delay(3000);
  lcd.clear();
  lcd.print("ЯЯЯЯЯЯЯЯ");
  lcd.setCursor(0, 1);
  lcd.print("яяяяяяяя");
  delay(3000);
  lcd.clear();
}