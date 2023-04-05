int dig_val;
float ana_val;
int dig_Pin = 12;
float ana_Pin = A0;
void setup()
{
  pinMode(ana_Pin, INPUT);
  pinMode(dig_Pin, INPUT);
  Serial.begin(9600);
  Serial.print("Sensor is warming");
  delay(20000);
}
void loop()
{
  ana_val = analogRead(ana_Pin);
  dig_val = digitalRead(dig_Pin);
  if(ana_val > 400)
  {
    Serial.println("Gas Detected");
  }
  else
  {
    Serial.println("Gas not detected");
  }
}
