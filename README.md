# Bluetooth-Based Home Automation System

This project implements a Bluetooth-controlled home automation system using an ESP32 microcontroller. The system allows users to control home appliances like lights, fans, and TVs through voice commands sent over Bluetooth.

## Features
- **Bluetooth Control:** The system uses Bluetooth to receive voice commands for controlling home appliances.
- **Device-Specific Control:** Users can turn individual appliances (light, fan, TV) ON or OFF.
- **Group Control:** Users can turn all devices ON or OFF at once.
- **Serial Monitoring:** Commands received via Bluetooth are displayed on the serial monitor.

## Components Used
- ESP32
- Bluetooth module (built-in ESP32 Bluetooth)
- Relay Module (to control appliances)
- Light, Fan, TV (represented by GPIO pins)

## Circuit Connections
| Appliance | ESP32 Pin |
|-----------|-----------|
| Light     | GPIO 4    |
| Fan       | GPIO 33   |
| TV        | GPIO 5    |

## Installation & Setup
### 1. Install Required Libraries
Ensure you have the `BluetoothSerial.h` library installed in the Arduino IDE.

### 2. Upload the Code
Compile and upload the code to your ESP32 using Arduino IDE.

### 3. Pair with ESP32 Bluetooth
- Open Bluetooth settings on your phone.
- Search for available devices and connect to **"abcd"** (the ESP32 Bluetooth name).
- Use a Bluetooth terminal app to send voice commands.

## Usage
- Send commands via Bluetooth terminal or voice-to-text app.

### Supported Commands:
| Command          | Action |
|-----------------|--------|
| `everything on` | Turns ON all devices |
| `everything off` | Turns OFF all devices |
| `light on` | Turns ON the light |
| `light off` | Turns OFF the light |
| `fan on` | Turns ON the fan |
| `fan off` | Turns OFF the fan |
| `tv on` | Turns ON the TV |
| `tv off` | Turns OFF the TV |

## Future Enhancements
- Mobile app for improved control
- WiFi-based remote operation
- Integration with Google Assistant or Alexa

## License
This project is open-source under the MIT License.

