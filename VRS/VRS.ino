const int VR_X_PIN = A0;
const int VR_Y_PIN = A1;
const int VR_PIN = A2;
void setup() {
  // put your setup code here, to run once:
  
  pinMode(VR_X_PIN, INPUT);
  pinMode(VR_Y_PIN, INPUT);
  pinMode(VR_PIN, INPUT);
  Serial.begin(115200UL);

  Servo servo1 = Servo();
  Servo servo2 = Servo();

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(A0));
  vr_x_value = map(vr_x_value, 0, 1023, 0, 180);
  servol.write(vr_x_value);
  Serial.println("\tVR_X");
  delay(100UL);
  Serial.println(analogRead(A1));
  Serial.println("\tVR_Y");
  delay(100UL);
  Serial.println(analogRead(A2));
  Serial.println("\tVR");
  delay(100UL);

}
