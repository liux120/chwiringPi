/* File: blink2.ch */
#include <wiringPi.h>

wiringPiSetup();
pinMode(0, OUTPUT);
while(1) {
    digitalWrite(0, HIGH);
    delay(500);
    digitalWrite(0, LOW); 
    delay(500);
}
