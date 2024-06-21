# ESP8266 Motor Driver Module Project

#### Project Overview
This project demonstrates how to control a motor using an ESP8266 microcontroller and an L298N motor driver module. The setup allows you to control the direction and speed of a DC motor, making it suitable for various robotics and automation applications.

#### Components Needed
- **ESP8266 Microcontroller**
- **L298N Motor Driver Module**
- **DC Motor**
- **Jumper Wires**
- **Power Supply for Motor**

#### Block diagram


#### Circuit Setup
1. **Connecting the Motor Driver Module to ESP8266:**
   - Connect `IN1` of the L298N module to GPIO pin `D1` on the ESP8266.
   - Connect `IN2` of the L298N module to GPIO pin `D2` on the ESP8266.
   - Connect `ENABLE` (EN1) of the L298N module to GPIO pin `D3` on the ESP8266 for PWM speed control.
   - Connect the motor terminals to the output terminals of the L298N module.
   - Ensure proper power (VCC) and ground (GND) connections between the ESP8266, L298N module, and the motor's power supply.

#### Instructions
1. **Setup:**
   - Open the Arduino IDE with ESP8266 board support installed.
   - Create a new sketch and paste the provided Arduino code.
   - Connect the ESP8266 to your computer, select the appropriate board and port from the Tools menu.
   - Upload the code to the ESP8266.

2. **Operation:**
   - After uploading the code, the motor will run in one direction for 2 seconds, then switch to the opposite direction for 2 seconds, and then stop for 1 second.
   - The cycle will repeat, demonstrating bidirectional control and speed adjustment of the motor.

#### Applications
- **Robotics:** Control motors for robot movement.
- **Automation:** Use in conveyor belts or other automated systems.
- **DIY Projects:** Build projects requiring precise motor control, such as RC cars or automated doors.

#### Notes
- **Motor Speed:** The speed of the motor can be adjusted by changing the value in the `analogWrite(motorEnable, 255);` function. The value ranges from 0 (stop) to 255 (full speed).
- **Direction Control:** The motor direction is controlled by the states of `IN1` and `IN2` pins. Reversing their states changes the motor's direction.
- **Power Supply:** Ensure the motor's power supply matches its voltage and current requirements.

---

#### Useful Links
🌐 [ProjectsLearner - ESP8266 Motor Driver Module](https://projectslearner.com/learn/esp8266-motor-driver-module)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner