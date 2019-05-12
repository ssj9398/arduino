void callUltrasonic()
{
  digitalWrite(TRIGGER_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGGER_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGGER_PIN, LOW);
  long duration = pulseIn(ECHO_PIN, HIGH);  /*high가들어올때까지 기다림*/
  const unsigned long distance_mm = (duration/ 2.9)/2;
/**
*  거리가 200mm 인 경우 아랫코드 실행
 */ 
 if(distance_mm > 100UL && distance_mm < 1000UL)
 {
  Serial.println("Alert");
  
 }
  Serial.println(distance_mm);
 
  
  lcd.clear();
   if(distance_mm < 300)
   {
    lcd.clear();
    lcd.print("Welcome");
    digitalWrite(LED_PIN,HIGH);
   }
    else
     digitalWrite(LED_PIN,LOW);
   
}
   
