#include "OneButton.h"
#define LAYOUT_UNITED_KINGDOM	
#include "DigiKeyboard.h"


OneButton button(0, true);

void click() {
  digitalWrite(1, HIGH);
  DigiKeyboard.sendKeyStroke(0, MOD_SHIFT_LEFT | MOD_CONTROL_LEFT | MOD_ALT_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_A, MOD_ALT_LEFT);
  digitalWrite(1, LOW); 
} 

void setup() {
  pinMode(1, OUTPUT);
  button.attachClick(click);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
}

void loop() {
  button.tick();
}

