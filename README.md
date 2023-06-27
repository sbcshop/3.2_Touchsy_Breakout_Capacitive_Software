# 3.2_Touchsy_Breakout_Capacitive_Software
<img src="https://github.com/sbcshop/3.2_Touchsy_HAT_Resistive_Software/blob/main/images/Touchsy%20banner.jpg">
3.2" Touchsy Capacitive Breakout - the perfect display solution for users who prefer use their favourite Arduino UNO/Mega/Nano or any other controllers. Here also you have the choice between resistive and capacitive touchscreens to suit your specific requirements.

With Touchsy Capacitive Breakout, you can easily program your display with the Arduino IDE and use it in various projects and applications, from DIY electronics to robotics. The level shifter ensures compatibility with various hardware options, and the support for both 3.3V and 5V makes it versatile and flexible.
Both SPI and Parallel data pins available on this Breakout. So you get flexibility of interfacing either SPI or 8 bit Parallel mode for faster operation. 

Here are the features and specifications that make 3.2" Touchsy Capacitive Breakout a unique and must-have accessory:

### Features:
- Perfect for Arduino community with 3/4 wire SPI interface, 8-bit parallel interface
- The level shifter for compatibility with various hardware options
- Supports both 3.3V and 5V, making it versatile and flexible
- Compatibility: Arduino or other controllers
- Connectivity: 3/4 wire SPI interface, 8- bit parallel interface

### Specifications:
- 3.2” Display with resolution 240 × 320
- Operating voltage of pins compatible for both 3.3V and 5V
- ILI934 Display Driver
- FT6236 capacitive touch controller
- Appearance: RGB
- Colors: 65K/262K
- Viewing Angle(in degree): Left:70, Right:70, Up:50, Down:70 
- Operating Temperature is -20℃~70℃
- Storage Temperature is -30℃~80℃

## Getting Started with 3.2 Touchsy Capacitive Breakout
### Pinout
<img src="https://github.com/sbcshop/3.2_Touchsy_Breakout_Capacitive_Software/blob/main/images/Touchsy%20Breakout%20Capacitive%20Pinout.jpg">

- (1) 3.2” Capacitive Touch Display 
- (2) Display Breakout Pins
  
**Breakout Pins Detail**
  
  <img src="https://github.com/sbcshop/3.2_Touchsy_Breakout_Capacitive_Software/blob/main/images/touchsy_capacitive_Breakout_pins.png" width = "621" height="379">

  _Display Control Pins:_
  | Pin No. | Symbol | Description |
  |---|---|---|
  | 5 | CS | Chip select pin for SPI interfacing |
  | 7 | CLK  | Clock pin for SPI interfacing |
  | 9 | D/C | Data/Command pin, Logic HIGH for Data and Logic LOW for Command   |
  | 11 | DIN | MOSI pin for SPI interfacing |
  | 13 | RST | Reset pin |
  | 15 | BL | BackLight for Display panel |
  
  _Touch Control Pins:_
  | Pin no. | Symbol | Description | 
  |---|---|---|
  | 1 | SCL | Serial Clock pin for I2C interfacing |
  | 3 | SDA  | Serial Data pin for I2C interfacing |
  | 18 | IRQ | Touch Controller Interrupt pin, Logic LOW when touch detected | |
  | 20 | TRS | Touch Controller Reset |
  
  **Note:** RST & TRS pins connected internally so while interfacing with MCU's GPIO you can use only one instead of both
  
   _Power Pins:_
  | Pin no. | Symbol | Description | 
  |---|---|---|
  | 17 | GND | Common Supply Ground pin |
  | 19 | 5V  | 5V Input Supply |
  | 21 | VCC | High Side Supply for Level Shifter, Not required when using with 3.3V/5V MCU| 
  | 22 | 3V3 | 3.3V Input Supply |
  
  **Note:** Using only one supply 5V or 3.3V at a time is enough to power Display Module

## Interfacing
### Interfacing Breakout with Pico W
  - Following below wiring diagram for connection
    
    <img src="https://github.com/sbcshop/3.2_Touchsy_Breakout_Capacitive_Software/blob/main/images/capacitive_display_picow_wiring.jpg">
    
  - Now just visit [Pico W with Capacitive GitHub](https://github.com/sbcshop/3.2_Touchsy_Pico_W_Capacitive_Software), and follow guide to add required library and then running example codes provided there for display and touch operations on Touch Display Module.

### Interfacing Breakout with Arduino Uno
**Circuit Connection:** Follow Below connection

<img src="https://github.com/sbcshop/3.2_Touchsy_Breakout_Capacitive_Software/blob/main/images/Touchsy%20Cap%20breakout%20arduino%20wiring.jpg">
  
  *Breakout Pins <-> Arduino Pins*
  | Breakout Pin No. | Breakout Symbol | Arduino Uno Pin|
  |---|---|---|
  | 5 | CS | D10 |
  | 7 | CLK  | D13 |
  | 9 | D/C | D9 |
  | 11 | DIN | D11 |
  | 13 | RST | D6 |
  | 15 | BL | D5  |
  | 1 | SCL | A5/SCL |
  | 3 | SDA  | A4/SDA |
  | 18 | IRQ | - |
  | 17 | GND | GND |
  | 19 | 5V  | 5V  |
  | 21 | VCC | 5V |
  
  **Note:** VCC connection required when connecting breakout with 5V operating MCU.
  Here interfacing with Arduino Uno provided, taking reference you can use Arduino Mega, Nano, or any other arduino family boards.
  
**Installing Libraries:**
   - Download Arduino IDE from [official site](https://www.arduino.cc/en/software) and install into your system. 
   - Download [library zip file](https://github.com/sbcshop/3.2_Touchsy_Breakout_Capacitive_Software/blob/main/libraries.zip) provided here in github.
   - Extract and copy files inside Document > Arduino > Libraries folder. Make sure to restart Arduino IDE whenever you update or add any libraries.

     <img src= "https://github.com/sbcshop/3.2_Touchsy_ESP-32_Resistive_Software/blob/main/images/library_files_path.png" />

**Testing** 
   - At this step you are all set to test codes, for easy getting started we have provided Display and Touch demo [example codes](https://github.com/sbcshop/3.2_Touchsy_Breakout_Capacitive_Software/tree/main/examples/) in github which you can download and try. 
   - Open any one example code in Arduino and make sure you have selected correct Arduino Uno board with suitable com port, click on upload button.
     
     <img src="https://github.com/sbcshop/3.2_Touchsy_Breakout_Capacitive_Software/blob/main/images/arduino_select_upload.gif">
     
## Resources
  * [Schematic](https://github.com/sbcshop/3.2_Touchsy_Breakout_Capacitive_Hardware/blob/main/Design%20Data/Sch%203.2%20inch%20Touchsy%20Breakout(capacitive).pdf)
  * [Hardware Files](https://github.com/sbcshop/3.2_Touchsy_Breakout_Capacitive_Hardware)
  * [Step File](https://github.com/sbcshop/3.2_Touchsy_Breakout_Capacitive_Hardware/blob/main/Mechanical%20Data/STEP%203.2%20inch%20Touchsy%20Breakout(capacitive).step)
  * [MicroPython getting started for RPi Pico/Pico W](https://docs.micropython.org/en/latest/rp2/quickref.html)
  * [Pico W Getting Started](https://projects.raspberrypi.org/en/projects/get-started-pico-w)
  * [Getting Started with ESP32 in Arduino](https://docs.espressif.com/projects/arduino-esp32/en/latest/)
  * [ESP32 S3 Hardware Reference](https://docs.espressif.com/projects/esp-idf/en/latest/esp32s3/hw-reference/index.html)
  * [ESP32 S3 Datasheet](https://github.com/sbcshop/3.2_Touchsy_ESP-32_Resistive_Software/blob/main/documents/esp32-s3_datasheet_en.pdf)
  * [Arduino IDE 1 overview](https://docs.arduino.cc/software/ide-v1/tutorials/Environment)


## Related Products
   * [3.2" Touchsy ESP32](https://shop.sb-components.co.uk/collections/pre-order/products/touchsy-3-2-touch-lcd-display-based-on-esp32-mcu) - 3.2" Touchsy ESP32 with Resistive and Capacitive version. 
   * [3.2" Touchsy Pico W](https://shop.sb-components.co.uk/collections/pre-order/products/touchsy-3-2-touch-lcd-display-based-on-pico-w) - 3.2" Touchsy Pico W with Resistive and Capacitive version.
   * [3.2" Touchsy Breakout](https://shop.sb-components.co.uk/collections/pre-order/products/touchsy-3-2-touch-lcd-display-breakout-board) - 3.2" Touchsy Breakout with Resistive and Capacitive version.
   * [3.2" Touchsy HAT](https://shop.sb-components.co.uk/collections/pre-order/products/touchsy-3-2-touch-lcd-display-for-raspberry-pi) - 3.2" Touchsy HAT with Resistive version for Raspberry Pi.

## Product License

This is ***open source*** product. Kindly check LICENSE.md file for more information.

Please contact support@sb-components.co.uk for technical support.
<p align="center">
  <img width="360" height="100" src="https://cdn.shopify.com/s/files/1/1217/2104/files/Logo_sb_component_3.png?v=1666086771&width=300">
</p>
