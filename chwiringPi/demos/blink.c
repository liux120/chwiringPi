/* File: blink.c */
#include <wiringPi.h>

int main() {
   wiringPiSetup();
   pinMode(0, OUTPUT);
   while(1) {
      digitalWrite(0, HIGH); 
      delay(500);
      digitalWrite(0, LOW); 
      delay(500);
   }
   return 0 ;
}
