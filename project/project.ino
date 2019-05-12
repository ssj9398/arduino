#include <Servo.h>
#include <LiquidCrystal_I2C.h>
#include <SoftwareSerial.h>

const int RX =2;
const int TX =3;
Servo servo = Servo();
const int SERVO_PIN = 9;
const int LED_PIN =7;
const int ECHO_PIN = 12;
const int TRIGGER_PIN = 13;

int i;
SoftwareSerial BT = SoftwareSerial(RX,TX);
LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27,16,2);
void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.begin(16, 2);
  lcd.clear();
  lcd.backlight();
  Serial.begin(115200UL);
  BT.begin(9600UL);
  
  pinMode(TRIGGER_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

    
     Serial.begin(115200UL);
     BT.begin(9600UL);
     BT.println("Welcome");
     pinMode(LED_PIN,OUTPUT);    
     pinMode(SERVO_PIN, OUTPUT);
     servo.attach(SERVO_PIN);
}

void loop() {
  callUltrasonic();
  // put your main code here, to run repeatedly:
  //lcd.setCursor(0,0);
  //  lcd.print("Welcome");

  //블르투스 1,2,3 으로 작동

     if(BT.available()>0)
     {
      long value = BT.parseInt();
     
       if(value == 1)
       {
        digitalWrite(LED_PIN,HIGH);
        
       } 
       
       if(value ==0)
       { 
        digitalWrite(LED_PIN, LOW);
       }
       
       if(value == 3)
       {
          for(i=0; i<=180;i++)
          {
            servo.write(i);
            delay(25);
            if(i ==50)
            digitalWrite(LED_PIN,HIGH);
            if(i ==100)
            digitalWrite(LED_PIN,LOW);
          }
      }
     
     if(value ==4)
     {
       lcd.print("Welcome");
     }
    
     if(value ==5)
     {
        lcd.clear();
     } 
   
   }
}
