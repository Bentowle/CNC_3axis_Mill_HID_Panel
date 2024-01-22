#include <Keyboard.h>

const int STOP = 2; // KEY_ESC
const int DUST = 3; // KEY_F7 // using flood coolant M code to turn dust collector on/off
const int RUN = 4; // 'r' // Currently only cycle start will not resume
const int PAUSE = 5; // 'p'
const int RESUME = 6; // 's'   // not currently working
const int Y_PLUS = 7; // KEY_UP_ARROW
const int Y_MINUS = 8; // KEY_DOWN_ARROW
const int X_PLUS = 9; // KEY_RIGHT_ARROW
const int X_MINUS = 10; // KEY_LEFT_ARROW
const int Z_PLUS = 11; // KEY_PAGE_UP
const int Z_MINUS = 12; // KEY_PAGE_DOWN

void setup() {
    
    pinMode(STOP, INPUT_PULLUP);
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
    
    Keyboard.begin();
}

void loop() {


    if (digitalRead(DUST) == LOW) {
        // DUST button is pressed
        // Perform action for DUST button
        // KEY_F7
        Keyboard.press(KEY_F7);
        delay(100);
        Keyboard.releaseAll();
        delay(1000);
    }

    if (digitalRead(RUN) == LOW) {
        // RUN button is pressed
        // Perform action for RUN button
        // 'r'
        Keyboard.press('r');
        delay(100);
        Keyboard.releaseAll();
        delay(1000);
    }
    
    if (digitalRead(PAUSE) == LOW) {
        // PAUSE button is pressed
        // Perform action for PAUSE button
        // 'p'
        Keyboard.press('p');
        delay(100);
        Keyboard.releaseAll();
        delay(1000);
    }
    
    if (digitalRead(RESUME) == LOW) {
        // RESUME button is pressed
        // Perform action for RESUME button
        // 's'
        Keyboard.press('s');
        delay(100);
        Keyboard.releaseAll();
        delay(1000);
    }
        
    if (digitalRead(STOP) == LOW) {
        // STOP button is pressed
        // Perform action for STOP button
        // KEY_ESC
        Keyboard.press(KEY_ESC);
        delay(100);
        Keyboard.releaseAll();
        delay(1000);
    }
    
    if (digitalRead(Y_PLUS) == LOW) {
        // Y_PLUS button is pressed
        // Perform action for Y_PLUS button
        // KEY_UP_ARROW
        Keyboard.press(KEY_UP_ARROW);
        delay(100);
        Keyboard.releaseAll();
        delay(1000);
    }
    
    if (digitalRead(Y_MINUS) == LOW) {
        // Y_MINUS button is pressed
        // Perform action for Y_MINUS button
        // KEY_DOWN_ARROW
        Keyboard.press(KEY_DOWN_ARROW);
        delay(100);
        Keyboard.releaseAll();
        delay(1000);
    }
    
    if (digitalRead(X_PLUS) == LOW) {
        // X_PLUS button is pressed
        // Perform action for X_PLUS button
        // KEY_RIGHT_ARROW
        Keyboard.press(KEY_RIGHT_ARROW);
        delay(100);
        Keyboard.releaseAll();
        delay(1000);
    }
    
    if (digitalRead(X_MINUS) == LOW) {
        // X_MINUS button is pressed
        // Perform action for X_MINUS button
        // KEY_LEFT_ARROW
        Keyboard.press(KEY_LEFT_ARROW);
        delay(100);
        Keyboard.releaseAll();
        delay(1000);
    }
    
    if (digitalRead(Z_PLUS) == LOW) {
        // Z_PLUS button is pressed
        // Perform action for Z_PLUS button
        // KEY_PAGE_UP
        Keyboard.press(KEY_PAGE_UP);
        delay(100);
        Keyboard.releaseAll();
        delay(1000);
    }
    
    if (digitalRead(Z_MINUS) == LOW) {
        // Z_MINUS button is pressed
        // Perform action for Z_MINUS button
        // KEY_PAGE_DOWN
        Keyboard.press(KEY_PAGE_DOWN);
        delay(100);
        Keyboard.releaseAll();
        delay(1000);
    }
}