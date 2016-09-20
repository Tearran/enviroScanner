#include <Wire.h>
#include <Adafruit_BMP085.h>
Adafruit_BMP085 bmp;

void setupBMP180() {
  // put your setup code here, to run once:
  bmp.begin();
}

void loopBMP180() {
  // put your main code here, to run repeatedly:
  if (displayMenu != 0) {
    displayMenu = 0;
    lcd.clear();
    lcd.setCursor(4, 0);
    lcd.print("Altitude");
    delay(1000);
    lcd.clear();
  }
  else {

    lcd.setCursor(0, 0);
    lcd.print(bmp.readAltitude(101500), 2);
    lcd.setCursor(9, 0);
    lcd.print(" Meters  ");
    lcd.setCursor(0, 1);
    lcd.print(bmp.readAltitude(101500) * 3.28084, 0);
    lcd.setCursor(11, 1);
    lcd.print("Feet");
    delay(500);
  }

}

void loopBMP180Pressure() {
  if (displayMenu != 0) {
    displayMenu = 0;
    lcd.clear();
    lcd.setCursor(3, 0);
    lcd.print("Barometric");
    lcd.setCursor(4, 1);
    lcd.print("Pressure");
    delay(1000);
    lcd.clear();
  }
  else {

    float bmp180inhg = bmp.readPressure() * 0.000295299830714 ;
    lcd.setCursor(0, 0);
    lcd.print(bmp180inhg, 4);
    lcd.setCursor(11, 0);
    lcd.print(" inHg");
    lcd.setCursor(0, 1);
    lcd.print(bmp.readPressure());
    lcd.setCursor(14, 1);
    lcd.print("Pa");
    delay(1000);
  }
}


