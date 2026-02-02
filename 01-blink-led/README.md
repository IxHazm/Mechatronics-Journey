# Blink LED

My first Arduino project - makes an LED blink on/off every second.

## What I Learned
- `pinMode()` configures pins as INPUT/OUTPUT
- `digitalWrite()` sets pins HIGH (on) or LOW (off)
- `delay()` pauses execution in milliseconds
- LED needs resistor to avoid burning out

## Components
- Arduino UNO R3
- Red LED
- 220Ω resistor
- Jumper wires
- Breadboard

## Circuit
```
Pin 13 → 220Ω resistor → LED (long leg) → LED (short leg) → GND
```

## Code
See [blink.ino](blink.ino)

---
**Date:** Feb 2, 2026  
**Time:** 1 hour  
**Status:** ✅ Complete
