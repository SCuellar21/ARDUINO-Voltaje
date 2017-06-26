void setup() {
  Serial.begin(9600);         
}

void loop(){
  Serial.print("Voltaje = "); 
  Serial.println(analogRead(0) * 5.0 / 1023.0);
  delay(1000);     
}

