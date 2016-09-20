// put your variables code here:
#define KY307Pin  A0 // select the input pin for the potentiometer
int KY307Read; // variable to store the value from KY307
int KY307Value;  // variable to store the value coming from the sensor
int KY307StartValue = analogRead(KY307Pin);

const long interval = 1000;           // interval at which to blink (milliseconds)
unsigned long previousMillis = 0;        // will store last time LED was updated

void setupKY307() {

  while (millis() < 1000) {
    
    lcd.setCursor(0, 0);
    
    lcd.print(" Calibrating");
    KY307StartValue = analogRead(KY307Pin);
    lcd.setCursor(0, 0);

    lcd.print(" Calibrating");

  }
  
  KY307StartValue = KY307StartValue + 1;
  delay(1000);
}

void loopKY307()
{
  //read the value from the sensor:
  KY307Value = analogRead(KY307Pin);
  lcd.setCursor(0, 0);
  if (KY307Value < KY307StartValue - 16 ) {

    lcd.setCursor(15, 1);
    lcd.print(">");



  }
  if (KY307Value < KY307StartValue - 15 ) {

    lcd.setCursor(14, 1);
    lcd.print(">");



  }
  if (KY307Value < KY307StartValue - 14 ) {

    lcd.setCursor(13, 1);
    lcd.print(">");


  }
  if (KY307Value < KY307StartValue - 13 ) {

    lcd.setCursor(12, 1);
    lcd.print(">");



  }
  if (KY307Value < KY307StartValue - 12 ) {

    lcd.setCursor(11, 1);
    lcd.print(">");
 

  }
  if (KY307Value < KY307StartValue - 11 ) {

    lcd.setCursor(10, 1);
    lcd.print(">");


  }
  if (KY307Value < KY307StartValue - 10 ) {

    lcd.setCursor(9, 1);
    lcd.print(">");


  }
  if (KY307Value < KY307StartValue - 9 ) {

    lcd.setCursor(8, 1);
    lcd.print(">");


  }
  if (KY307Value < KY307StartValue - 8 ) {

    lcd.setCursor(7, 1);
    lcd.print(">");



  }
  if (KY307Value < KY307StartValue - 7 ) {

    lcd.setCursor(6, 1);
    lcd.print(">");


  }
  if (KY307Value < KY307StartValue - 6 ) {

    lcd.setCursor(5, 1);
    lcd.print(">");



  }
  if (KY307Value < KY307StartValue - 5 ) {

    lcd.setCursor(4, 1);
    lcd.print(">");


  }
  if (KY307Value < KY307StartValue - 4 ) {

    lcd.setCursor(3, 1);
    lcd.print(">");


  }
  if (KY307Value < KY307StartValue - 3 ) {

    lcd.setCursor(2, 1);
    lcd.print(">");

  }
  if (KY307Value < KY307StartValue - 2 ) {

    lcd.setCursor(1, 1);
    lcd.print(">");

  }
  if (KY307Value < KY307StartValue - 1 ) {

    lcd.setCursor(0, 1);
    lcd.print(">");


  }
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    
    previousMillis = currentMillis;
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Ambiant Sound");
    //lcd.setCursor(13, 0);
    //lcd.print(KY307Value);

  }
}
