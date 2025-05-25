🚗 Automatic Car Parking System Using Arduino

An Arduino-powered smart parking solution designed to detect vehicle entry, track slot availability, and control gate access. Built to optimize parking space usage and assist drivers in locating available slots efficiently.

🤖 Introduction

Urban areas face rising traffic congestion and limited parking infrastructure. This project presents a prototype of an automatic car parking system that uses sensors and microcontrollers to manage space efficiently. The system detects vehicles, tracks available slots in real time, and operates a motorized gate based on availability. In future iterations, the system can be integrated with IoT features for remote monitoring, reservation, or mobile app control.

📚 Table of Contents

- Target Audience  
- Building the Project  
- Hardware Components  
- Software Setup  
- Documentation  
- Installation & Folder Structure  
- Screenshots  
- How to Use  
- Contributors  
- Acknowledgments  

👥 Target Audience

This project is ideal for students, hobbyists, and beginner-level developers interested in embedded systems, automation, or smart infrastructure. It also benefits those seeking practical applications of Arduino in real-world problems like parking management.


🛠️ Building the Project

The system is built using Arduino Uno, IR sensors, an OLED display, and a servo motor. When a vehicle approaches, the IR sensor detects its presence. If a parking slot is available, the gate opens automatically and the slot count updates. The OLED provides real-time feedback. The same logic applies to vehicle exits, allowing efficient slot reuse and automated control.

🔩 Hardware Components

- Arduino Uno (x1)  
- IR Sensors (x2)  
- SSD1306 OLED Display (I2C, 128x64)  
- Servo Motor (x1)  
- Breadboard  
- Jumper Wires  
- Resistors  
- USB Cable (Type-B)

💻 Software Setup

- IDE: [Arduino IDE](https://www.arduino.cc/en/software)  
- Simulator : [Tinkercad Circuits](https://www.tinkercad.com/)  

Install the required libraries for:  
- Adafruit_GFX  
- Adafruit_SSD1306 
- Servo

📖 Documentation

The purpose of this project is to automate parking slot management, reduce manual effort, and provide a real-time overview of available space. With minimal components and optimized code, this system is cost-effective and scalable for small facilities or prototypes.

⚙️ How to Use

1. Connect the Arduino Uno to your PC via USB.  
2. Open `CarParkingSystem.ino` in Arduino IDE.  
3. Upload the code to the board.  
4. Connect IR sensors, OLED display, and servo motor as per schematic.  
5. Power on and test vehicle detection and gate automation.

👨‍💻 Contributors

- M.V.S. Harshith  
- N. Digvijay  
- D.S. Rohith  


🙏 Acknowledgments

Special thanks to **Dr. S. Padmini**, Associate Professor at SRM Institute of Science and Technology, for her guidance and support throughout the project.


📅 Project Date: November 2024  
🏫 Department of Computing Technologies, SRMIST
