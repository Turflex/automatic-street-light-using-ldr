# Automatic Street Light Using LDR

An Arduino Uno-based Automatic Street Light System that uses a Light Dependent Resistor (LDR) to monitor ambient light intensity. The system automatically turns an LED on in dark conditions and off when sufficient light is available.

## Features

- 🌙 Automatic night detection using an LDR
- 💡 Automatic LED control
- 🔌 Arduino Uno based
- 🖥️ Simulated in Wokwi
- 📚 Beginner-friendly embedded systems project

## Hardware Components

- Arduino Uno
- LDR (Photoresistor Module)
- LED
- Jumper Wires

## Pin Configuration

| Component | Arduino Pin |
|-----------|-------------|
| LDR Analog Output | A0 |
| LED | D8 |

## Working Principle

1. The Arduino continuously reads the analog value from the LDR.
2. If the light intensity falls below the predefined threshold, the LED turns ON.
3. When the environment becomes bright again, the LED turns OFF.
4. The sensor readings are displayed on the Serial Monitor for monitoring and debugging.

## Project Structure

```
automatic-street-light-using-ldr/
├── sketch.ino
├── diagram.json
├── README.md
└── wokwi.toml
```

## Applications

- Automatic Street Lighting
- Garden Lighting
- Smart Home Lighting
- Energy Saving Systems
- Embedded Systems Learning

