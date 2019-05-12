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
  if(vr_value<200)
  analogWrite(PWM_RED_PIN, vr_value);
  vr_value = map(vr_value,0,1023,0,500);
  Serial.println("CDS:");
  Serial.println(vr_value);
  lcd.setCursor(0,0);
  lcd.print("CDS:");
  lcd.print(vr_value);
    delay(500UL);
  lcd.clear();

}
