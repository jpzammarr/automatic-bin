# Automatic Bin (Arduino Project)

This is a simple automatic trash bin built using Arduino, an ultrasonic sensor, and a servo motor. The lid opens automatically when a hand or object is detected near the bin.

---

## Components Used

- Arduino UNO board
- Ultrasonic sensor (HC-SR04)
- Servo motor
- Jumper wires

---

## How It Works

1. The ultrasonic sensor continuously measures the distance in front of the bin.
2. If an object is detected within 10 cm, the servo motor rotates to open the lid.
3. The lid stays open for 5 seconds.
4. The servo then rotates back to close the lid.

---

## Pin Configuration

| Component       | Arduino Pin |
|----------------|------------|
| Ultrasonic Trig| 6          |
| Ultrasonic Echo| 7          |
| Servo Motor    | 10         |

---

## Code Overview

- `getValue()` → Measures the distance using the ultrasonic sensor.
- `needToOpen()` → Checks if an object is within 10 cm.
- `open()` → Opens the lid if needed and closes it after 5 seconds.

---

## Demo

[![Automatic Bin Demo](https://img.youtube.com/vi/zpxtyjhUNMQ/0.jpg)](https://www.youtube.com/watch?v=zpxtyjhUNMQ)


