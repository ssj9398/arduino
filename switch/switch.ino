enum PINS {INPUT_SW_PIN = 5, OUTPUT_LED_PIN = 7};


void setup() {
  // put your setup code here, to run once:
  pinMode(INPUT_SW_PIN, INPUT);   //pullup - 
  pinMode(OUTPUT_LED_PIN, OUTPUT);
  digitalWrite(OUTPUT_LED_PIN, LOW);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead (INPUT_SW_PIN) == HIGH)
  {
    Serial.println("someone is here");
    digitalWrite(OUTPUT_LED_PIN, HIGH);
    delay(10);
  }
  
  else {
    Serial.println("no one is here");
    digitalWrite(OUTPUT_LED_PIN, LOW);
    delay(10);
  }
}
