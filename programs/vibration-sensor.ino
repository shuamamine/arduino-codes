int Dpin = 7;
int Apin = A0;
int Dout = LOW;
int Ana_out = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Dig_pin, INPUT);
  pinMode(Ana_pin, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Dout = digitalRead(Dpin);
  Aout = analogRead(Apin);
  Serial.print("Analog: ");
  Serial.print(Aout);
  Serial.print("  Digital: ");
  Serial.print(Dout);
  if(Ana_out <= 500){
    digitalWrite(13,HIGH);
    Serial.println("Vibration Detected!!!!!");
    Serial.println();
    Serial.println();
    }
  else
  {
    
    digitalWrite(13,LOW);
    Serial.println("Vibration NOT Detected");
    Serial.println();
    Serial.println();
    }
  delay(500);
}
