void setup(){
  pinMode(A0, INPUT); 
  Serial.begin(9600);
}

void loop(){
  int sensorValue = analogRead(A0); 
  Serial.println(sensorValue);
  delay(5000);
}
