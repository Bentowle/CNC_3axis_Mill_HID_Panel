#include <Keyboard.h>

const int MAN = 2; // KEY_F3
const int AUTO = 3; // KEY_F4
const int MDI = 4; // KEY_F5
const int DUST = 5; // KEY_F8
const int RUN = 6; // 'r'
const int PAUSE = 7; // 'p'
const int RESUME = 8; // 's'
const int Y_PLUS = 9; // KEY_UP_ARROW
const int Y_MINUS = 10; // KEY_DOWN_ARROW
const int X_PLUS = 11; // KEY_RIGHT_ARROW
const int X_MINUS = 12; // KEY_LEFT_ARROW
const int Z_PLUS = 13; // KEY_PAGE_UP
const int Z_MINUS = 14; // KEY_PAGE_DOWN
const int FEED_PLUS = 15; // '>'
const int FEED_MINUS = 16; // '<'
const int SPINDLE_PLUS = 17; // KEY_F12
const int SPINDLE_MINUS = 18; // KEY_F11

void setup() {
  pinMode(MAN, INPUT_PULLUP);
  pinMode(AUTO, INPUT_PULLUP);
  pinMode(MDI, INPUT_PULLUP);
  pinMode(DUST, INPUT_PULLUP);
  pinMode(RUN, INPUT_PULLUP);
  pinMode(PAUSE, INPUT_PULLUP);
  pinMode(RESUME, INPUT_PULLUP);
  pinMode(Y_PLUS, INPUT_PULLUP);
  pinMode(Y_MINUS, INPUT_PULLUP);
  pinMode(X_PLUS, INPUT_PULLUP);
  pinMode(X_MINUS, INPUT_PULLUP);
  pinMode(Z_PLUS, INPUT_PULLUP);
  pinMode(Z_MINUS, INPUT_PULLUP);
  pinMode(FEED_PLUS, INPUT_PULLUP);
  pinMode(FEED_MINUS, INPUT_PULLUP);
  pinMode(SPINDLE_PLUS, INPUT_PULLUP);
  pinMode(SPINDLE_MINUS, INPUT_PULLUP);
 
  Keyboard.begin();
}

void loop() {
  if (digitalRead(MAN) == LOW) {
    // MAN button is pressed
    // Perform action for MAN button
    // KEY_F3
    Keyboard.press(KEY_F3);
    delay(100);
    Keyboard.releaseAll();
    //delay(1000);
  }

  if (digitalRead(AUTO) == LOW) {
    // AUTO button is pressed
    // Perform action for AUTO button
    // KEY_F4
    Keyboard.press(KEY_F4);
    delay(100);
    Keyboard.releaseAll();
    //delay(1000);
  }
  
  if (digitalRead(MDI) == LOW) {
    // MDI button is pressed
    // Perform action for MDI button
    // KEY_F5
    Keyboard.press(KEY_F5);
    delay(100);
    Keyboard.releaseAll();
    //delay(1000);
  }

  if (digitalRead(DUST) == LOW) {
    // DUST button is pressed
    // Perform action for DUST button
    // KEY_F8
    Keyboard.press(KEY_F8);
    delay(100);
    Keyboard.releaseAll();
    //delay(1000);
  }

  if (digitalRead(RUN) == LOW) {
    // RUN button is pressed
    // Perform action for RUN button
    // 'r'
    Keyboard.press('r');
    delay(100);
    Keyboard.releaseAll();
    //delay(1000);
  }
  
  if (digitalRead(PAUSE) == LOW) {
    // PAUSE button is pressed
    // Perform action for PAUSE button
    // 'p'
    Keyboard.press('p');
    delay(100);
    Keyboard.releaseAll();
    //delay(1000);
  }

  if (digitalRead(SPINDLE_PLUS) == LOW) {
    // SPINDLE_PLUS button is pressed
    // Perform action for SPINDLE_PLUS button
    // KEY_F12
    Keyboard.press(KEY_F12);
    delay(100);
    Keyboard.releaseAll();
    //delay(1000);
  }
  

  if (digitalRead(SPINDLE_MINUS) == LOW) {
    // SPINDLE_MINUS button is pressed
    // Perform action for SPINDLE_MINUS button
    // KEY_F11
    Keyboard.press(KEY_F11);
    delay(100);
    Keyboard.releaseAll();
    //delay(1000);
  }


  if (digitalRead(RESUME) == LOW) {
    // RESUME button is pressed
    // Perform action for RESUME button
    // 's'
    Keyboard.press('s');
    delay(100);
    Keyboard.releaseAll();
    //delay(1000);
  }

  if (digitalRead(FEED_MINUS) == LOW) {
    // FEED_MINUS button is pressed
    // Perform action for FEED_MINUS button
    // '<'
    Keyboard.press('<');
    delay(100);
    Keyboard.releaseAll();
    //delay(1000);
  }

  if (digitalRead(FEED_PLUS) == LOW) {
    // FEED_PLUS button is pressed
    // Perform action for FEED_PLUS button
    // '>'
    Keyboard.press('>');
    delay(100);
    Keyboard.releaseAll();
    //delay(1000);
  }

  if (digitalRead(Y_PLUS) == LOW) {
    // Y+ button is pressed
    // Perform action for Y+ button
    // KEY_UP_ARROW
    Keyboard.press(KEY_UP_ARROW);
    delay(50);
    Keyboard.releaseAll();
    //delay(1000);
  }

  if (digitalRead(Y_MINUS) == LOW) {
    // Y- button is pressed
    // Perform action for Y- button
    // KEY_DOWN_ARROW
    Keyboard.press(KEY_DOWN_ARROW);
    delay(50);
    Keyboard.releaseAll();
    //delay(1000);
  }

  if (digitalRead(X_PLUS) == LOW) {
    // X+ button is pressed
    // Perform action for X+ button
    // KEY_RIGHT_ARROW
    Keyboard.press(KEY_RIGHT_ARROW);
    delay(50);
    Keyboard.releaseAll();
    //delay(1000);
  }

  if (digitalRead(X_MINUS) == LOW) {
    // X- button is pressed
    // Perform action for X- button
    // KEY_LEFT_ARROW
    Keyboard.press(KEY_LEFT_ARROW);
    delay(50);
    Keyboard.releaseAll();
    //delay(1000);
  }

  if (digitalRead(Z_PLUS) == LOW) {
    // Z+ button is pressed
    // Perform action for Z+ button
    // KEY_UP_ARROW
    Keyboard.press(KEY_PAGE_UP);
    delay(50);
    Keyboard.releaseAll();
    //delay(1000);
  }

  if (digitalRead(Z_MINUS) == LOW) {
    // Z- button is pressed
    // Perform action for Z- button
    // KEY_DOWN_ARROW
    Keyboard.press(KEY_PAGE_DOWN);
    delay(50);
    Keyboard.releaseAll();
    //delay(1000);
  }
}
