# Krisha-DE

Download Requaired Library using Tools > Manage Libraries

# Connection Guide

Connect the VCC (power) pin of the BMP180 to the 3.3V pin on the Arduino Nano.

Connect the GND (ground) pin of the BMP180 to the GND pin on the Arduino Nano.

Connect the SDA pin of the BMP180 to the A4 (SDA) pin on the Arduino Nano.

Connect the SCL pin of the BMP180 to the A5 (SCL) pin on the Arduino Nano.

Connect the VCC (power) pin of the ADXL345 to the 3.3V pin on the Arduino Nano.

Connect the GND (ground) pin of the ADXL345 to the GND pin on the Arduino Nano.

Connect the SDA pin of the ADXL345 to the A4 (SDA) pin on the Arduino Nano.

Connect the SCL pin of the ADXL345 to the A5 (SCL) pin on the Arduino Nano.

Connect the VCC (power) pin of the SD card module to the 5V pin on the Arduino Nano.

Connect the GND (ground) pin of the SD card module to the GND pin on the Arduino Nano.

Connect the MOSI pin of the SD card module to the MOSI (11) pin on the Arduino Nano.

Connect the MISO pin of the SD card module to the MISO (12) pin on the Arduino Nano.

Connect the SCK pin of the SD card module to the SCK (13) pin on the Arduino Nano.

Connect the CS (Chip Select) pin of the SD card module to any digital pin (e.g., 10) on the Arduino Nano.

# Here are a few things you can check to resolve the issue:

1. Verify the correct board and port: Make sure you have selected the correct board model (Arduino Nano) and the appropriate port from the "Tools" menu in the Arduino IDE.

2. USB cable and connections: Ensure that the USB cable is securely connected to both the Arduino Nano and your computer. Try using a different USB cable or USB port on your computer to eliminate any potential issues with the cable or port.

3. Reset the Arduino: Press the reset button on the Arduino Nano and immediately click the "Upload" button in the Arduino IDE. Sometimes, the timing of the reset and upload process can affect the upload success.

4. Check the bootloader: If you recently flashed a new bootloader or firmware to the Arduino Nano, it's possible that the bootloader is not functioning correctly. In this case, you may need to reflash the bootloader using an ISP programmer.

5. Driver issues: Ensure that the necessary drivers are installed for the Arduino Nano on your computer. If you are using Windows, check the Device Manager to see if the Arduino Nano is recognized and if any driver issues are reported.

6. Try a different Arduino: If you have access to another Arduino board, try uploading a simple sketch to that board to see if it uploads successfully. This will help determine if the issue is specific to the Arduino Nano or a more general problem.

By going through these troubleshooting steps, you should be able to identify and resolve the issue preventing the successful upload of the code to your Arduino Nano.
