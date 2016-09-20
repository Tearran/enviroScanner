#define photocellPin A1     // Photocell and 10K pulldown are connected to A3
int photocellReading;

void setupPhotoCell() {
  // put your setup code here, to run once:
  
}

void loopPhotoCell() {
  // put your main code here, to run repeatedly:

  photocellReading = analogRead(photocellPin);
      //lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print(" Ambiant Light: ");
      lcd.setCursor(0, 1);
      lcd.print(photocellReading);     // the raw analog reading

      Serial.println(photocellReading);

      // We'll have a few threshholds, qualitatively determined
      if (photocellReading < 200) {
        lcd.setCursor(12, 1);
        lcd.print("Dark");

      } else if (photocellReading < 400) {
        lcd.setCursor(13, 1);
        lcd.print("Dim");

      } else if (photocellReading < 500) {
        lcd.setCursor(11, 1);
        lcd.print("Light");

      } else if (photocellReading < 900) {
        lcd.setCursor(10, 1);
        lcd.print("Bright");

      } else {//Above 900
        lcd.setCursor(5, 1);
        lcd.print("Very bright");

      }
delay(500);

}
