// see comments below for source...



/*
** Example Arduino sketch for SainSmart I2C LCD Screen 16x2
** based on https://bitbucket.org/celem/sainsmart-i2c-lcd/src/3adf8e0d2443/sainlcdtest.ino
** by
** Edward Comer
** LICENSE: GNU General Public License, version 3 (GPL-3.0)

** This example uses F Malpartida's NewLiquidCrystal library. Obtain from:
** https://bitbucket.org/fmalpartida/new-liquidcrystal 

** Modified - Ian Brennan ianbren at hotmail.com 23-10-2012 to support Tutorial posted to Arduino.cc

** Written for and tested with Arduino 1.0
**
** NOTE: Tested on Arduino Uno whose I2C pins are A4==SDA, A5==SCL

*/
#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>

#define I2C_ADDR    0x3F // <<----- Add your address here.  Find it from I2C Scanner
#define BACKLIGHT_PIN     3
#define En_pin  2
#define Rw_pin  1
#define Rs_pin  0
#define D4_pin  4
#define D5_pin  5
#define D6_pin  6
#define D7_pin  7

int n = 100;

LiquidCrystal_I2C  lcd(I2C_ADDR,En_pin,Rw_pin,Rs_pin,D4_pin,D5_pin,D6_pin,D7_pin);

void setup(){
 lcd.begin (16,2); //  16x2
 lcd.home (); // go home
 pinMode(11, OUTPUT); // buzzer
 pinMode(3, INPUT); // switch
 pinMode(4, INPUT_PULLUP); // button
 
}

void loop() {
  if (!digitalRead(3)) {
  lcd.setCursor(0,0);
  lcd.print("  Wilson's Birthday");
  lcd.setCursor(0,1);
  lcd.print("CAKE EXPLODES IN: " );
  lcd.print(n--,DEC);
}
else {
  for(int i=0; i<1000; i++) {
    lcd.setCursor(0,0);
    lcd.clear();
    delay(100);
    lcd.print("     DIFFUSED!");
    delay(200);
    // if (!digitalRead(3)) break;
  }
}
digitalWrite(11, HIGH);
delay(10);
digitalWrite(11, LOW);
  delay(1000);
}