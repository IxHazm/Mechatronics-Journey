# Button Controlled LED

Simple circuit that turns LED on/off based on button press state.

## Demo
## What I Learned

**Digital Input:**
- `pinMode(pin, INPUT)` - Configure pin to read button state
- `digitalRead(pin)` - Returns HIGH (pressed) or LOW (not pressed)
- Reading button state in real-time

**Control Flow:**
- `if/else` statements to control LED based on button
- Real-time response (loop checks button continuously)

**Circuit Design:**
- Button needs pull-down resistor (10kΩ) to prevent floating state
- When button pressed: Pin reads HIGH (5V)
- When button not pressed: Pin reads LOW (0V through resistor to GND)

**Challenges:**
- First time reading INPUT (previous projects were OUTPUT only)
- Understanding why pull-down resistor is needed
- Button polarity - learned which legs connect when pressed

## Components
- 1x Arduino UNO
- 1x Push button
- 1x LED (any color)
- 1x 220Ω resistor (for LED)
- 1x 10kΩ resistor (pull-down for button)
- Breadboard + jumper wires

## Circuit Diagram

**Connections:**
```
Button circuit:
- Button leg 1 → 5V
- Button leg 2 → Pin 2 AND 10kΩ resistor → GND

LED circuit:
- Pin 13 → 220Ω resistor → LED (+) → LED (-) → GND
```

## Code

See [button_led.ino](button_led.ino)

**Key concepts:**
```cpp
pinMode(button, INPUT);      // Set pin 2 as input to read button
digitalRead(button)          // Returns HIGH or LOW
if (condition) { } else { }  // Control flow based on button state
```

**How it works:**
1. Arduino continuously checks button state in `loop()`
2. If button pressed (HIGH)  Turn LED on
3. If button released (LOW)  Turn LED off
4. Repeats instantly (no delay)

## Next Steps
- Add multiple LEDs controlled by same button
- Try different button logic (toggle instead of hold)
- Learn about debouncing for more reliable button reading

---
**Date:** Feb 9, 2026  
**Time Spent:** 1.5 hours  
