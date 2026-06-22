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

# PCB 
I have used EASYEDA for pcb degining and it a 2 layer pcb with a very basic tracing .
TOP LAYER 
<img width="2160" height="2102" alt="2D_PCB1_2026-06-22" src="https://github.com/user-attachments/assets/d1833f52-a29c-40c7-a2a2-51bdd5338c8d" />
BOTTOM LAYER 
<img width="2160" height="2102" alt="2D_PCB1_2026-06-22 (1)" src="https://github.com/user-attachments/assets/24b19a6a-f97c-4006-b027-2dc4d63ed1f1" />

<img width="1068" height="1082" alt="Untitled - June 22, 2026 at 08 43 49" src="https://github.com/user-attachments/assets/e335e3f8-c942-465e-96ac-ed8373bac57f" />
<img width="1144" height="1248" alt="Untitled - June 22, 2026 at 08 44 34" src="https://github.com/user-attachments/assets/f3fcf153-e3f0-4817-bb47-fea8aedf9223" />
<img width="1304" height="976" alt="Untitled - June 22, 2026 at 08 43 06" src="https://github.com/user-attachments/assets/4ba8a5f2-0cfd-4049-944c-37f31858bbee" />

# Firmeware 
It's a very basic test firmware for just the rgb led 





