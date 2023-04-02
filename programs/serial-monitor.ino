int value = 0;
void setup() 
{
Serial.begin(9600);
}
void loop() 
{
  value = random(100);
  Serial.println(value);
  delay(2000);
}
