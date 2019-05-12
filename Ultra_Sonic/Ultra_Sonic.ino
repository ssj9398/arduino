#include <Servo.h>
#include <LiquidCrystal_I2C.h>
#include <SoftwareSerial.h>

const int ECHO_PIN = 12;
const int TRIGGER_PIN = 13;
const int Water_Sensor = 4;

Servo servo = Servo();
SoftwareSerial BT = SoftwareSerial(2,3);
LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16,2);


void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.begin(16, 2);
  lcd.clear();
  lcd.backlight();
  Serial.begin(115200UL);
  BT.begin(9600UL);
  servo.attach(9);
  pinMode(TRIGGER_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
callUltrasonic();
}
