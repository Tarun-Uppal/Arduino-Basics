#include <Servo.h>;
Servo ESC1;
Servo ESC2;
Servo ESC3;
Servo ESC4;
int pos = 0; //Sets position variable
// int speed; //Implements speed variable

void setSpeed(int speed){
  ESC1.write(speed);
  ESC2.write(speed);
  ESC3.write(speed);
  ESC4.write(speed);
}

void setup() {
  ESC1.attach(8);
  ESC2.attach(9);
  ESC3.attach(10);
  ESC4.attach(11); //Adds ESC to D8 pin. 
  setSpeed(1000); //Sets speed variable(arming esc)
  delay(2000); //Arming esc
}

void loop() {
  int speed; //Implements speed variable

  for(speed = 1000; speed < 2000; speed += 100) { //Cycles speed up to 50% power for 1 second each step
    setSpeed(speed); //Creates variable for speed to be used in in for loop
    delay(2000);
  }

  delay(4000); //Stays on for 4 seconds
  for(speed = 1000; speed >= 2000; speed -= 100) { // Cycles speed down to 0% power for 1 second
    setSpeed(speed); 
    delay(1000);
  }
  setSpeed(0); //Sets speed variable to zero no matter what
  delay(1000); //Turns off for 1 second
}