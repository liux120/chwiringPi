extern unsigned int ds1302rtcRead       (const int reg) ;
extern void         ds1302rtcWrite      (const int reg, const unsigned int data) ;

extern unsigned int ds1302ramRead       (const int addr) ;
extern void         ds1302ramWrite      (const int addr, const unsigned int data) ;

extern void         ds1302clockRead     (int clockData [8]) ;
extern void         ds1302clockWrite    (const int clockData [8]) ;

extern void         ds1302trickleCharge (const int diodes, const int resistors) ;

extern void         ds1302setup         (const int clockPin, const int dataPin, const int csPin) ;
