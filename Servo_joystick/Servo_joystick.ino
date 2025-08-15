#include <Servo.h>

#define JOY_X A0   // axe X du joystick
Servo servoPan;    // servo sur un axe

void setup() {
  servoPan.attach(9);  // Pin signal du servo
}

void loop() {
  int xVal = analogRead(JOY_X);        // lire le joystick
  int angle = map(xVal, 0, 1023, 0, 180); // convertir en angle
  servoPan.write(angle);               // tourner le servo
  delay(15);
}
