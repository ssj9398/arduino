#include <Servo.h>

#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27,16,2);

Servo servo;
const int SERVO_PIN = 9; 
const int VR_PIN = A0;

void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.begin(16, 2);
  lcd.clear();
  lcd.backlight();
  Serial.begin(115200UL);
  pinMode(VR_PIN, INPUT);
  pinMode(SERVO_PIN, OUTPUT);
  servo.attach(SERVO_PIN);
}

void loop() {
  // put your main code here, to run repeatedly:
//  int vr_value = analogRead(VR_PIN);
//  vr_value = map(vr_value,0,1023,0,180);
  servo.write(vr_value);
  
  Serial.println(vr_value);
  Serial.println();
  lcd.setCursor(0,0);
  lcd.print("CDS:");
  lcd.print(vr_value);
  delay(500UL);
  lcd.clear();


}
