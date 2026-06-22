# Attiny_bat
It's a samll dev board based on attiny 85 and has a in built battery charging ic and a rgb led .

# Zine 
<img width="540" height="828" alt="Frame 6" src="https://github.com/user-attachments/assets/6f8c77f9-aa69-480a-8f33-a292c7fd60fa" />

# Why i build it 
I need a attiny to work on my upcoming project that inculed some I2C protocal so i built this 

# Schematics 
<img width="1059" height="404" alt="Screenshot 2026-06-22 at 8 28 33 AM" src="https://github.com/user-attachments/assets/5a15e9a3-95da-467f-b082-393dfa264133" />

I have used Attiny 85 as the main MCU and a USB-C for prgraming .

There is a TP4056 Charging IC for the on board CR2032 battery to be charged by the same USB-C.

I have also added a addresable RGB Led with an in-built ws2812b ic and also the d-out is esposed to connect ferther leds .

The expose pins are SCL , SDA , VCC , GND , DO (D OUT).

