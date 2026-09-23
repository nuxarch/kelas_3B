# Week 5 - PWM 3 Channel & Voltage Baterai

Project PlatformIO untuk membaca tegangan baterai menggunakan Arduino Uno.

## Hardware

- Arduino Uno
- Voltage divider (R1 = 4.5kΩ, R2 = 500Ω)
- Sensor tegangan pada pin A0

## Cara Kerja

Membaca tegangan baterai melalui pin analog A0 dengan menggunakan voltage divider, kemudian mengkonversi nilai ADC 10-bit menjadi nilai tegangan aktual.

**Rumus:**
```
V_baterai = (ADC_value × 5.0 / 1023) × ((R1 + R2) / R2)
```

## Upload & Monitor

```bash
# Upload firmware
pio run -t upload

# Monitor serial (115200 baud)
pio device monitor
```

## Serial Plotter

Output direpresentasikan dalam format serial plotter:
```
>teg:12.50
```
