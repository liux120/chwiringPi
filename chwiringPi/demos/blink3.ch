#!/bin/ch
/* File: blink3.ch */

gpio mode 0 out
while(1) {
  gpio write 0 1
  delay(500);
  gpio write 0 0
  delay(500);
}
