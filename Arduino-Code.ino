#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP085_U.h>
#include <Adafruit_ADXL345_U.h>
#include <SD.h>

#define BMP_SDA A4
#define BMP_SCL A5
#define ADXL_SDA A4
#define ADXL_SCL A5

Adafruit_BMP085_Unified bmp = Adafruit_BMP085_Unified(10085);
Adafruit_ADXL345_Unified accel = Adafruit_ADXL345_Unified(12345);

const int chipSelect = 10;
File dataFile;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  bmp.begin();

  Wire.begin();
  accel.begin();

  if (!SD.begin(chipSelect)) {
    Serial.println("SD card initialization failed!");
    return;
  }

  dataFile = SD.open("data.txt", FILE_WRITE);
  if (dataFile) {
    dataFile.println("Time (ms), Pressure (Pa), Temperature (°C), Accel X (m/s^2), Accel Y (m/s^2), Accel Z (m/s^2)");
    dataFile.close();
  } else {
    Serial.println("Error opening data file!");
  }
}

void loop() {
  sensors_event_t event;
  bmp.getEvent(&event);
  float pressure = event.pressure;
  float temperature = event.temperature;

  sensors_event_t accelEvent;
  accel.getEvent(&accelEvent);
  float accelX = accelEvent.acceleration.x;
  float accelY = accelEvent.acceleration.y;
  float accelZ = accelEvent.acceleration.z;

  unsigned long currentTime = millis();

  dataFile = SD.open("data.txt", FILE_WRITE);
  if (dataFile) {
    dataFile.print(currentTime);
    dataFile.print(", ");
    dataFile.print(pressure);
    dataFile.print(", ");
    dataFile.print(temperature);
    dataFile.print(", ");
    dataFile.print(accelX);
    dataFile.print(", ");
    dataFile.print(accelY);
    dataFile.print(", ");
    dataFile.println(accelZ);
    dataFile.close();
  } else {
    Serial.println("Error opening data file!");
  }

  delay(1000);  // Change the delay according to your sampling frequency
}
