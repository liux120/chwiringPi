//extern int wiringPiFailure (int fatal, const char *message, ...) ;

extern struct wiringPiNodeStruct *wiringPiFindNode (int pin) ;
extern struct wiringPiNodeStruct *wiringPiNewNode  (int pinBase, int numPins) ;

extern int  wiringPiSetup       (void) ;
extern int  wiringPiSetupSys    (void) ;
extern int  wiringPiSetupGpio   (void) ;
extern int  wiringPiSetupPhys   (void) ;

extern void pinModeAlt          (int pin, int mode) ;
extern void pinMode             (int pin, int mode) ;
extern void pullUpDnControl     (int pin, int pud) ;
extern int  digitalRead         (int pin) ;
extern void digitalWrite        (int pin, int value) ;
extern void pwmWrite            (int pin, int value) ;
extern int  analogRead          (int pin) ;
extern void analogWrite         (int pin, int value) ;

extern int  wiringPiSetupPiFace (void) ;
extern int  wiringPiSetupPiFaceForGpioProg (void) 

extern          int  piBoardRev          (void) ;
extern          void piBoardId           (int *model, int *rev, int *mem, int *maker, int *overVolted) ;
extern          int  wpiPinToGpio        (int wpiPin) ;
extern          int  physPinToGpio       (int physPin) ;
extern          void setPadDrive         (int group, int value) ;
extern          int  getAlt              (int pin) ;
extern          void pwmToneWrite        (int pin, int freq) ;
extern          void digitalWriteByte    (int value) ;
extern unsigned int  digitalReadByte     (void) ;
extern          void pwmSetMode          (int mode) ;
extern          void pwmSetRange         (unsigned int range) ;
extern          void pwmSetClock         (int divisor) ;
extern          void gpioClockSet        (int pin, int freq) ;

extern int  waitForInterrupt    (int pin, int mS) ;
//extern int  wiringPiISR         (int pin, int mode, void (*function)(void)) ;

//extern int  piThreadCreate      (void *(*fn)(void *)) ;
extern void piLock              (int key) ;
extern void piUnlock            (int key) ;

extern int piHiPri (const int pri) ;

extern void         delay             (unsigned int howLong) ;
extern void         delayMicroseconds (unsigned int howLong) ;
extern unsigned int millis            (void) ;
extern unsigned int micros            (void) ;
