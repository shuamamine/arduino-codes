void setup() {
  pinMode (13,OUTPUT);
  pinMode (10,INPUT);
  Serial.begin(9600);
}

void loop() {
  int SensorValue = digitalRead(10);
  Serial.print("IR pin value: ");
  Serial.print(SensorValue);
  if(SensorValue == LOW)
  {
    digitalWrite(13,HIGH);
    Serial.println("Object not black");
    }
  else
  {
    digitalWrite(13,LOW);
    Serial.println("Object Black");
    }
    delay(100);
  }
