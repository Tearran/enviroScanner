#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <DHT.h>
#define dhtPin 7
DHT dht;
void setupDHT11()
{
  dht.setup(dhtPin); // data pin 7
}

void loopDHT11()
{


  float humidity = dht.getHumidity();
  float temperature = dht.getTemperature();

  if (displayMenu != 0) {
    displayMenu = 0;
    lcd.setCursor(2, 0);
    lcd.print("Temperature");
    lcd.setCursor(3, 1);
    lcd.print("& Humidity");
    //delay(1000);  
    delay(dht.getMinimumSamplingPeriod());
    lcd.clear();
  }

  else {
    lcd.setCursor(0, 0);
    lcd.print(dht.getTemperature());
    lcd.print("\337 C");
    lcd.setCursor(0, 1);
    lcd.print(dht.getTemperature() * 1.8 + 32);
    lcd.print("\337 F");
    lcd.setCursor(13, 0);
    lcd.print(dht.getHumidity(), 0);
    lcd.setCursor(15, 0);
    lcd.print("%");

    delay(500);
  }
}

