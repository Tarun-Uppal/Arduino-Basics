void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  int del = 2000;
  // put your main code here, to run repeatedly:
  moveRobot("FORWARD");
  delay(del);
  moveRobot("BACKWARD");
  delay(del); 
  moveRobot("LEFT");
  delay(del);
  moveRobot("RIGHT");
  delay(del);
  moveRobot("STOP");
  delay(del);
}

void moveRobot(String motion){
  if (motion == "FORWARD"){
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    Serial.println("forward");
  } else if (motion == "STOP") {
     digitalWrite(10, LOW);
     digitalWrite(11, LOW);
     digitalWrite(12, LOW);
     digitalWrite(13, LOW);
     Serial.println("Stop");
  } else if (motion == "RIGHT") {
    digitalWrite(10, LOW);
     digitalWrite(11, HIGH);
     digitalWrite(12, HIGH);
     digitalWrite(13, LOW);
     Serial.println("RIGHT");
  } else if (motion == "LEFT") {
    digitalWrite(10, HIGH);
     digitalWrite(11, LOW);
     digitalWrite(12, LOW);
     digitalWrite(13, HIGH);
     Serial.println("LEFT");
  } else if (motion == "BACKWARD"){
    digitalWrite(10, LOW);
     digitalWrite(11, HIGH);
     digitalWrite(12, LOW);
     digitalWrite(13, HIGH);
     Serial.println("BACKWARD");
}
}
