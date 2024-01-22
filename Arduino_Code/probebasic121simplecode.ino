#include <Keyboard.h>

const int BUTTON_PINS[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 13, 12, 14};
const char BUTTON_KEYS[] = {KEY_ESC, KEY_F7, 'r', 'p', 's', KEY_UP_ARROW, KEY_DOWN_ARROW, KEY_RIGHT_ARROW, KEY_LEFT_ARROW, KEY_PAGE_UP, KEY_PAGE_DOWN, 't'};

void setup() {
    for (int i = 0; i < sizeof(BUTTON_PINS) / sizeof(BUTTON_PINS[0]); i++) {
        pinMode(BUTTON_PINS[i], INPUT_PULLUP);
    }
    Keyboard.begin();
}


void loop() {
    for (int i = 0; i < sizeof(BUTTON_PINS) / sizeof(BUTTON_PINS[0]); i++) {
        if (digitalRead(BUTTON_PINS[i]) == LOW) {
            Keyboard.press(BUTTON_KEYS[i]);
            delay(100);
            Keyboard.releaseAll();
            //delay(1000);
        }
    }
}