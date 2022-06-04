void setup() {
  Serial.begin(9600);
  Serial.println("Hello, WOrld!");
}

void loop() {
  int val = analogRead(0);
  /* Print the stored Analog value on the Serial Monitor
   *  String() function is used to convert the value from Integer format into String
   */
   Serial.println("The random value in the Analog Pin is " + String(val));
   delay(1000); // dealay 1000
}
