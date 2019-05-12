#include <Servo.h>

#include <SoftwareSerial.h>

const int RX =2;
const int TX =3;
Servo servo = Servo();
const int SERVO_PIN = 9;
const int LED_PIN =7;
int i;
SoftwareSerial BT = SoftwareSerial(RX,TX);
void setup() {
  // put your setup code here, to run once:

    
     Serial.begin(115200UL);
     BT.begin(9600UL);
     BT.println("Welcome");
     pinMode(LED_PIN,OUTPUT);
     pinMode(SERVO_PIN, OUTPUT);
     servo.attach(SERVO_PIN);
}

void loop() {
  // put your main code here, to run repeatedly:
     if(BT.available()>0)
     {
      long value = BT.parseInt();
     if(value == 1)
     {
      digitalWrite(LED_PIN,HIGH);
     } 
     else if(value ==0){
      digitalWrite(LED_PIN, LOW);
     }
     
     if(value ==3)
     for(i=0; i<180;i++)
    {
      servo.write(i);
     delay(200);
     if(i ==50)
   digitalWrite(LED_PIN,LOW);
   }
   
     }

      
//      Serial.println(BT.readString());
//     
//     if(Serial.available())
//     {
//      BT.println(Serial.readString());
//     }
//     }
}




//     if(==2)
//
//     1입력시 relay 스위치  on
//     2      led  on
//     3입력시 relay      of
//     4     led    off
