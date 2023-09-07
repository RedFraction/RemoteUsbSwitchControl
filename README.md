# RemoteUsbSwitchControl
Remote control of usb switch with 2 buttons using simple and chipest SG90 servo and chipest arduino nano. (Also you can use clones)

### Installing microcontroller firmware
- First you need to setup Arduino IDE and install Servo library
- Connect servo to your arduino +5v - +5v, GND - GND, Servo signal - D3 (You can use other PWM output you want, but it need to change PINOUT in firmware)
- After installing you can test it with serial monitor by sending 1 or 2.
- You can change angles of rotation in INO by setting yours

### Pyhton terminal client
- Install python3.xx and pip
  ###### Ubuntu / Mint and other Debian like
  ```bash
  sudo apt install python pip
  ```
  For other linux distros, Windows/Mac os users, please search how to do it 
- Install pyserial module/library. You can do it by executing - 
  ```python
  pip install pyserial
  ```
- If you use Windows please change "/dev/ttyUSB0" to port you need example "COM3"
- If you use other serial/com-port change "/dev/ttyUSB0" to port you need
- Run it by executing
  ```python
  python usbSwitch.py
  ```

### Instruction of how to use 
- Enter '1' to press button 1
- Enter '2' to press button 2
- Enter '3' to set servo in neutral position (not too usefull)
- Enter 'exit' to close serial client
