#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27,16,2);

const int VR_PIN = A0;  // 0
const int PWM_RED_PIN = 9;

void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.begin(16, 2);
  lcd.clear();
  lcd.backlight();
  Serial.begin(115200UL);
  pinMode(VR_PIN, INPUT);
  pinMode(PWM_RED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int vr_value = analogRead(VR_PIN);
  
  vr_value = map(vr_value,0,1023,0,255);
  analogWrite(PWM_RED_PIN, vr_value);
  Serial.println(vr_value);
  Serial.println("PWM");
  lcd.setCursor(0,0);
  lcd.print(vr_value);
  lcd.print("PWM");
  delay(5000UL);
  lcd.clear();

}
