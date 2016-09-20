#define piezoPin 10 //Set Buzzer pin
int piezoDelay = 50;
int piezo1KHz = 1000;
void loopPiezoTone() {


  tone(piezoPin, piezo1KHz, piezoDelay);
  delay(piezoDelay * 1.25);
  noTone(piezoPin);     // Stop sound

//  for (int k = 0; k <= 5; k++) {
//       Serial.println(k);
//        for (int i = 1000; i <= 1200; i++) {
//          //Serial.println(i);
//          tone(10, i, 10);
//          //delay(2);
//        }
//  
//        for (int j = 1200; j >= 1000; j--) {
//          //Serial.println(j);
//          tone(10, j, 100);
//        }
//        delay(10);
//        noTone(piezoPin);     // Stop sound
//      }



}
