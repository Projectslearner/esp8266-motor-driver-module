/*
    Project name : ESP8266 Motor Driver Module
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-motor-driver-module
*/

// Motor pins connected to L298N motor driver
const int motorIN1 = D1;
const int motorIN2 = D2;
const int motorEnable = D3; // PWM pin for speed control

void setup() {
  pinMode(motorIN1, OUTPUT);
  pinMode(motorIN2, OUTPUT);
  pinMode(motorEnable, OUTPUT);

  digitalWrite(motorIN1, LOW); // Set motor direction
  digitalWrite(motorIN2, HIGH);
  analogWrite(motorEnable, 255); // Motor speed (0-255) - 255 for full speed
}

void loop() {
  // Motor running in one direction
  digitalWrite(motorIN1, LOW);
  digitalWrite(motorIN2, HIGH);
  delay(2000); // Run for 2 seconds

  // Motor running in the opposite direction
  digitalWrite(motorIN1, HIGH);
  digitalWrite(motorIN2, LOW);
  delay(2000); // Run for 2 seconds

  // Stop the motor
  digitalWrite(motorIN1, LOW);
  digitalWrite(motorIN2, LOW);
  delay(1000); // Stop for 1 second
}

