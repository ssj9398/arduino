 
//enum LED_PINS {LED1=3, LED2, LED3, LED4, LED5};

const int LED_PINS[] = {3,4,5,6,7,8,9,10};
void setup() {
  // put your setup code here, to run once:
//  pinMode(3, OUTPUT);
//  pinMode(4, OUTPUT);
//  pinMode(5, OUTPUT);
//  pinMode(6, OUTPUT);
//  pinMode(7, OUTPUT);

for(int i=0;i<8;i++)
{
  pinMode(LED_PINS[i],OUTPUT);
  digitalWrite(LED_PINS[i],LOW);
}


}
void loop() {
  //0
digitalWrite (3,LOW);
digitalWrite (4,LOW);
digitalWrite (5,LOW);
digitalWrite (6,LOW);
digitalWrite (7,LOW);
digitalWrite (8,LOW);
digitalWrite (9,HIGH);
digitalWrite (10,LOW);
delay(500);

//1
digitalWrite (3,HIGH);
digitalWrite (4,HIGH);
digitalWrite (5,LOW);
digitalWrite (6,HIGH);
digitalWrite (7,LOW);
digitalWrite (8,HIGH);
digitalWrite (9,HIGH);
digitalWrite (10,HIGH);
delay(500);

//2
digitalWrite (3,LOW);
digitalWrite (4,LOW);
digitalWrite (5,HIGH);
digitalWrite (6,LOW);
digitalWrite (7,LOW);
digitalWrite (8,LOW);
digitalWrite (9,LOW);
digitalWrite (10,HIGH);
delay(500);

//3
digitalWrite (3,HIGH);
digitalWrite (4,LOW);
digitalWrite (5,LOW);
digitalWrite (6,HIGH);
digitalWrite (7,LOW);
digitalWrite (8,LOW);
digitalWrite (9,LOW);
digitalWrite (10,HIGH);
delay(500);

//4
digitalWrite (3,HIGH);
digitalWrite (4,HIGH);
digitalWrite (5,LOW);
digitalWrite (6,LOW);
digitalWrite (7,LOW);
digitalWrite (8,HIGH);
digitalWrite (9,LOW);
digitalWrite (10,LOW);
delay(500);

//5
digitalWrite (3,HIGH);
digitalWrite (4,LOW);
digitalWrite (5,LOW);
digitalWrite (6,HIGH);
digitalWrite (7,HIGH);
digitalWrite (8,LOW);
digitalWrite (9,LOW);
digitalWrite (10,LOW);
delay(500);

//6
digitalWrite (3,LOW);
digitalWrite (4,LOW);
digitalWrite (5,LOW);
digitalWrite (6,LOW);
digitalWrite (7,HIGH);
digitalWrite (8,HIGH);
digitalWrite (9,LOW);
digitalWrite (10,LOW);
delay(500);

//7
digitalWrite (3,HIGH);
digitalWrite (4,HIGH);
digitalWrite (5,LOW);
digitalWrite (6,HIGH);
digitalWrite (7,LOW);
digitalWrite (8,LOW);
digitalWrite (9,HIGH);
digitalWrite (10,LOW);
delay(500);

//8
digitalWrite (3,LOW);
digitalWrite (4,LOW);
digitalWrite (5,LOW);
digitalWrite (6,LOW);
digitalWrite (7,LOW);
digitalWrite (8,LOW);
digitalWrite (9,LOW);
digitalWrite (10,LOW);
delay(500);

//9
digitalWrite (3,HIGH);
digitalWrite (4,LOW);
digitalWrite (5,LOW);
digitalWrite (6,HIGH);
digitalWrite (7,LOW);
digitalWrite (8,LOW);
digitalWrite (9,LOW);
digitalWrite (10,LOW);
delay(500);

//A
digitalWrite (3,LOW);
digitalWrite (4,HIGH);
digitalWrite (5,LOW);
digitalWrite (6,LOW);
digitalWrite (7,LOW);
digitalWrite (8,LOW);
digitalWrite (9,LOW);
digitalWrite (10,LOW);
delay(500);

}
