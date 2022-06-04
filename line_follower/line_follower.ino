void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
}

void loop() {
//  right a0
//  left a1

int right = analogRead(A0);
int left = analogRead(A1);
Serial.print("Value of Right Sensor is : " + String(right));
Serial.print("\t");
Serial.print("Value of Left Sensor is : " + String(left));
delay(1000);

//if ((right < 600) && (left < 600)){
//  moveRobot("FORWARD");
//}  
//if ((right > 600) && (left > 600)){
//  moveRobot("STOP");
//}  
//if ((right < 600) && (left > 600)){
//  moveRobot("RIGHT");
//}  
//if ((right > 600) && (left < 600)){
//  moveRobot("LEFT");
//}  
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
