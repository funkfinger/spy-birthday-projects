// #include <Wire.h>
#include "TinyWireM.h"
#include <Adafruit_GFX.h>
#include "Adafruit_LEDBackpack.h"

Adafruit_AlphaNum4 alpha4 = Adafruit_AlphaNum4();

void setup() {
  alpha4.begin(0x70);  // pass in the address  
  alpha4.clear();
  alpha4.writeDisplay();
}

char displaybuffer[4] = {' ', ' ', ' ', ' '};

void loop() {
  alpha4.writeDigitAscii(0, 'B');
  alpha4.writeDigitAscii(1, 'O');
  alpha4.writeDigitAscii(2, 'M');
  alpha4.writeDigitAscii(3, 'B');
  alpha4.writeDisplay();
  delay(1000);
  alpha4.writeDigitAscii(0, ' ');
  alpha4.writeDigitAscii(1, 'I');
  alpha4.writeDigitAscii(2, 'N');
  alpha4.writeDigitAscii(3, ' ');
  alpha4.writeDisplay();
  delay(1000);
  alpha4.writeDigitAscii(0, ' ');
  alpha4.writeDigitAscii(1, '1');
  alpha4.writeDigitAscii(2, '0');
  alpha4.writeDigitAscii(3, ' ');
  alpha4.writeDisplay();
  delay(1000);
  alpha4.writeDigitAscii(0, ' ');
  alpha4.writeDigitAscii(1, ' ');
  alpha4.writeDigitAscii(2, '9');
  alpha4.writeDigitAscii(3, ' ');
  alpha4.writeDisplay();
  delay(1000);
  alpha4.writeDigitAscii(0, ' ');
  alpha4.writeDigitAscii(1, ' ');
  alpha4.writeDigitAscii(2, '8');
  alpha4.writeDigitAscii(3, ' ');
  alpha4.writeDisplay();
  delay(1000);
  alpha4.writeDigitAscii(0, ' ');
  alpha4.writeDigitAscii(1, ' ');
  alpha4.writeDigitAscii(2, '7');
  alpha4.writeDigitAscii(3, ' ');
  alpha4.writeDisplay();
  delay(1000);
  alpha4.writeDigitAscii(0, ' ');
  alpha4.writeDigitAscii(1, ' ');
  alpha4.writeDigitAscii(2, '6');
  alpha4.writeDigitAscii(3, ' ');
  alpha4.writeDisplay();
  delay(1000);
  alpha4.writeDigitAscii(0, ' ');
  alpha4.writeDigitAscii(1, ' ');
  alpha4.writeDigitAscii(2, '5');
  alpha4.writeDigitAscii(3, ' ');
  alpha4.writeDisplay();
  delay(1000);
  alpha4.writeDigitAscii(0, ' ');
  alpha4.writeDigitAscii(1, ' ');
  alpha4.writeDigitAscii(2, '4');
  alpha4.writeDigitAscii(3, ' ');
  alpha4.writeDisplay();
  delay(1000);
  alpha4.writeDigitAscii(0, ' ');
  alpha4.writeDigitAscii(1, ' ');
  alpha4.writeDigitAscii(2, '3');
  alpha4.writeDigitAscii(3, ' ');
  alpha4.writeDisplay();
  delay(1000);
  alpha4.writeDigitAscii(0, ' ');
  alpha4.writeDigitAscii(1, ' ');
  alpha4.writeDigitAscii(2, '2');
  alpha4.writeDigitAscii(3, ' ');
  alpha4.writeDisplay();
  delay(1000);
  alpha4.writeDigitAscii(0, ' ');
  alpha4.writeDigitAscii(1, ' ');
  alpha4.writeDigitAscii(2, '1');
  alpha4.writeDigitAscii(3, ' ');
  alpha4.writeDisplay();
  delay(1000);
  alpha4.writeDigitAscii(0, ' ');
  alpha4.writeDigitAscii(1, ' ');
  alpha4.writeDigitAscii(2, '0');
  alpha4.writeDigitAscii(3, ' ');
  alpha4.writeDisplay();
  delay(1000);

  for (uint8_t i; i<20; i++) {
    alpha4.writeDigitAscii(0, '-');
    alpha4.writeDigitAscii(1, ' ');
    alpha4.writeDigitAscii(2, ' ');
    alpha4.writeDigitAscii(3, ' ');
    alpha4.writeDisplay();
    delay(100);
    alpha4.writeDigitAscii(0, ' ');
    alpha4.writeDigitAscii(1, '-');
    alpha4.writeDigitAscii(2, ' ');
    alpha4.writeDigitAscii(3, ' ');
    alpha4.writeDisplay();
    delay(100);
    alpha4.writeDigitAscii(0, ' ');
    alpha4.writeDigitAscii(1, ' ');
    alpha4.writeDigitAscii(2, '-');
    alpha4.writeDigitAscii(3, ' ');
    alpha4.writeDisplay();
    delay(100);
    alpha4.writeDigitAscii(0, ' ');
    alpha4.writeDigitAscii(1, ' ');
    alpha4.writeDigitAscii(2, ' ');
    alpha4.writeDigitAscii(3, '-');
    alpha4.writeDisplay();
    delay(100);
    alpha4.writeDigitAscii(0, ' ');
    alpha4.writeDigitAscii(1, ' ');
    alpha4.writeDigitAscii(2, '-');
    alpha4.writeDigitAscii(3, ' ');
    alpha4.writeDisplay();
    alpha4.writeDigitAscii(0, ' ');
    alpha4.writeDigitAscii(1, '-');
    alpha4.writeDigitAscii(2, ' ');
    alpha4.writeDigitAscii(3, ' ');
    alpha4.writeDisplay();
    delay(100);
  }

  for (uint8_t i; i<30; i++) {
    alpha4.writeDigitAscii(0, 'B');
    alpha4.writeDigitAscii(1, 'O');
    alpha4.writeDigitAscii(2, 'O');
    alpha4.writeDigitAscii(3, 'M');
    alpha4.writeDisplay();
    delay(200);
    alpha4.clear();
    alpha4.writeDisplay();
    delay(100);
    
  }
  
  alpha4.clear();
  alpha4.writeDisplay();
  delay(10000);
  
  
}