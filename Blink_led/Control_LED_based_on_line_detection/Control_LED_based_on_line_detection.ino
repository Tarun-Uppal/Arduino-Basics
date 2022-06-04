void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int Sensor_value = analogRead(A0); // Read the Analog Value on pin A0 and store it on "Sensor_value"
  Serial.println("The value of Sensor_value is " + String(Sensor_value));
  if (Sensor_value <= 0)
  {
    
    digitalWrite(13, HIGH);
  }
  else
  {
    digitalWrite(13, LOW);
  }
}
