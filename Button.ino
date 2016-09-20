#define buttonPin 8 //Set Button pin


bool buttonState;            // current state of the button
bool lastButtonState = 0;     // previous state of the button


void setupButton() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT_PULLUP); // Initiated Button with internal resistor
  buttonState = digitalRead(buttonPin); //read the pushbutton value into a variable
}

void loopButton() {
  // put your main code here, to run repeatedly:

  buttonState = digitalRead(buttonPin); //read the pushbutton value into a variable

  if (buttonState != lastButtonState) {
    // if the state has changed, increment the counter when relised
    if (buttonState == LOW) {
      buttonPushCounter++; // Increse Couter by 1
      displayMenu = 1;
      loopPiezoTone(); //Play sound at 1KHz
      lcd.clear();
    }
    else {
      //Do nothing
    }
  }
  lastButtonState = buttonState; // save the current state as the last state
  // Reset buttonPushCounter to 1
  if (buttonPushCounter > menuCount) {
    buttonPushCounter = 1;
    digitalWrite(13, LOW);
  }

}

