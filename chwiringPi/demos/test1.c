/* File: test.c
   Test global variables */
#include <wiringPi.h>
#include <stdio.h>
/*
const char *piModelNames    [16];
const char *piRevisionNames [16];
const char *piMakerNames    [16];
const int   piMemorySize    [ 8];
*/


int main (void) {
   int i;

   wiringPiSetup();
   for(i = 0; i < 16; i++) {
     printf("piModelNames[%d] = %s\n", i, piModelNames[i]);
   }

   for(i = 0; i < 16; i++) {
     printf("piRevisionNames[%d] = %s\n", i, piRevisionNames[i]);
   }

   for(i = 0; i < 16; i++) {
     printf("piMakerNames[%d] = %s\n", i, piMakerNames[i]);
   }

   for(i = 0; i < 8; i++) {
     printf("piMemorySize[%d] = %d\n", i, piMemorySize[i]);
   }
   return 0 ;
}
