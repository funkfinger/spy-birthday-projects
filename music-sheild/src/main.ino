#include <avr/io.h>
#include "config.h"
#include "filesys.h"
#include "player.h"
#include "vs10xx.h"
#include "record.h"
#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3);//pin2-Rx,pin3-Tx(note: pin3 is actually later used as volume down input)

void setup()
{
  pinMode(24,INPUT);
  Serial.begin(9600);
  //Serial.println("Hello test!");
  mySerial.begin(19200);// used for receiving command data from the iPod dock.
  
  InitSPI();

  InitIOForVs10xx();

  InitIOForKeys();
  
  InitIOForLEDs();

  InitFileSystem();

  //VsSineTest();

  Mp3Reset();
  
}


void loop()
{ 
  Mp3SetVolume(100,100);
  Play();
 // if (digitalRead(24) == 0) {
 //
 //  Mp3SetVolume(0,0);
 //
 // Play();
 // }
 //
 // if(digitalRead(24) == 1) {
 //
 //  Mp3SetVolume(40,40);
 //  }
 //
 //  Serial.println(digitalRead(24));
 //
}