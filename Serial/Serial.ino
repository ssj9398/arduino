void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200UL);
  
  
}

void loop() {
  // put your main code here, to run repeatedly:

  if (Serial.available() > 0)
  {
    String temp = String(Serial.read());
    Serial.println(temp);
    Serial.write(temp);
  }
  

}
