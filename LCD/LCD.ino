#include <LiquidCrystal_I2C.h>
//#include <Wire.h>

LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27,16,2);

void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.begin(16, 2);
  lcd.clear();
  lcd.backlight();

  Serial.begin(115200UL);

//  lcd.print("Hello world");
//  lcd.print("!");
//  lcd.setCursor(0,1);
//  lcd.print("Android.");
}

void loop() {
  // put your main code here, to run repeatedly:
//  lcd.setCursor(0,0);
//  lcd.home();
//  for(int i = 0; i < 2; ++i)
//  {
//    lcd.setCursor(0,i);
//    lcd.print("*****");
//    delay(100UL);
//    lcd.clear();
//  }

}
