/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */

int switchState = LOW;

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(3, OUTPUT); // Red
  pinMode(4, OUTPUT); // Red
  pinMode(5, OUTPUT); // Green
  pinMode(2, INPUT);
}

void myLoop() {
  digitalWrite(5, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  delay(250);
  digitalWrite(5, LOW);
  delay(250);
}

// the loop function runs over and over again forever
void loop() {
  switchState = digitalRead(2);

  if (switchState == 0) {
    myLoop();
  } 
  
  else {
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(250);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    delay(250);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    delay(250);
  }
  
}
