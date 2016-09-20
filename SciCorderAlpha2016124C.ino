// put your variables code here:

#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int displayMenu = 1;         //Place holder to activat case
int buttonPushCounter = 0;   // counter for the number of button presses
int menuCount = 5;
void setup() {
  setupBMP180();
  // put your setup code here, to run once:
  Serial.begin (9600); // Initiate Serial output
  lcd.begin(16, 2);
  setupButton();
  setupKY307();
  setupDHT11();
  lcd.begin(16, 2);
  lcd.setCursor(1, 0);
  lcd.print("Hold Button to");
  lcd.setCursor(1, 1);
  lcd.print("change sensors");
}

void loop() {
  // put your main code here, to run repeatedly:
  loopButton();
  int range = buttonPushCounter;
  switch (range) {
//read tempature humidity from DHT11
    case 1:

      loopDHT11();

      break;
//read pressure from BMP180
    case 2:

      loopBMP180Pressure();

      break;

    case 3:
//read altitude BMP180
      loopBMP180();

      break;

    case 4:
//read ambient light level from PhotoCell
      loopPhotoCell();

      break;
    case 5:
// read ambient sound levels from KY307
      loopKY307();

      break;
  }




}
