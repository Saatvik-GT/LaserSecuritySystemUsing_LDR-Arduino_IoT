# LaserSecuritySystemUsing_LDR-Arduino_IoT
A simple IoT-based security system built in my 1st semester, 1st year with @mayhack-8 . The project uses an Arduino and LDR sensor to detect laser interruption and trigger alerts, demonstrating basic IoT applications in security.
---

## Components Used
- Arduino Uno (or compatible board)  
- LDR (Light Dependent Resistor)  
- Laser pointer or laser diode  
- 10kΩ resistor (for LDR voltage divider)  
- Buzzer  
- LED  
- Jumper wires  
- Breadboard  

---

## Circuit Connections

- **LDR Sensor**  
  - One leg to **5V**  
  - Other leg to **Analog Pin A0** and a **10kΩ resistor** to **GND**  

- **Buzzer**  
  - Positive to **Digital Pin 8**  
  - Negative to **GND**  

- **LED**  
  - Anode (+) to **Digital Pin 9** (with 220Ω resistor in series)  
  - Cathode (-) to **GND**  

- **Laser Pointer**  
  - Powered separately (battery or USB), aligned to focus on the LDR  

---

## How It Works
1. The laser beam continuously falls on the LDR.  
2. The LDR value remains above the threshold as long as the beam is uninterrupted.  
3. If the beam is blocked, the LDR value drops below the threshold.  
4. The Arduino detects this and triggers the buzzer and LED as an alarm.  

---

## Arduino Code
The Arduino code reads the LDR values, compares them with a threshold, and activates the alarm if the beam is interrupted.  

---

## Future Improvements
- Integrate IoT features using ESP8266/ESP32 for real-time alerts on a smartphone (via Blynk or MQTT).  
- Add GSM module to send SMS alerts.  
- Implement multiple LDR-laser pairs for enhanced security coverage.  
