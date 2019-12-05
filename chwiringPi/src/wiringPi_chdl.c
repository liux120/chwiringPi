#include <wiringPi.h>
#include <ch.h>

EXPORTCH struct wiringPiNodeStruct * wiringPiFindNode_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int pin;
    struct wiringPiNodeStruct *retval;

    Ch_VaStart(interp, ap, varg);
    pin = Ch_VaArg(interp, ap, int);
    retval = wiringPiFindNode(pin);
    Ch_VaEnd(interp, ap);
    return retval;
}

EXPORTCH struct wiringPiNodeStruct * wiringPiNewNode_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int pinBase;
    int numPins;
    struct wiringPiNodeStruct *retval;

    Ch_VaStart(interp, ap, varg);
    pinBase = Ch_VaArg(interp, ap, int);
    numPins = Ch_VaArg(interp, ap, int);
    retval = wiringPiNewNode(pinBase, numPins);
    Ch_VaEnd(interp, ap);
    return retval;
}

EXPORTCH int wiringPiSetup_chdl(void *varg) {
    int retval;
    retval = wiringPiSetup();
    return retval;
}

EXPORTCH int wiringPiSetupSys_chdl(void *varg) {
    int retval;
    retval = wiringPiSetupSys();
    return retval;
}

EXPORTCH int wiringPiSetupGpio_chdl(void *varg) {
    int retval;
    retval = wiringPiSetupGpio();
    return retval;
}

EXPORTCH int wiringPiSetupPhys_chdl(void *varg) {
    int retval;
    retval = wiringPiSetupPhys();
    return retval;
}

EXPORTCH void pinModeAlt_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int pin;
    int mode;

    Ch_VaStart(interp, ap, varg);
    pin = Ch_VaArg(interp, ap, int);
    mode = Ch_VaArg(interp, ap, int);
    pinModeAlt(pin, mode);
    Ch_VaEnd(interp, ap);
}

EXPORTCH void pinMode_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int pin;
    int mode;

    Ch_VaStart(interp, ap, varg);
    pin = Ch_VaArg(interp, ap, int);
    mode = Ch_VaArg(interp, ap, int);
    pinMode(pin, mode);
    Ch_VaEnd(interp, ap);
}

EXPORTCH void pullUpDnControl_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int pin;
    int pud;

    Ch_VaStart(interp, ap, varg);
    pin = Ch_VaArg(interp, ap, int);
    pud = Ch_VaArg(interp, ap, int);
    pullUpDnControl(pin, pud);
    Ch_VaEnd(interp, ap);
}

EXPORTCH int digitalRead_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int pin;
    int retval;

    Ch_VaStart(interp, ap, varg);
    pin = Ch_VaArg(interp, ap, int);
    retval = digitalRead(pin);
    Ch_VaEnd(interp, ap);
    return retval;
}

EXPORTCH void digitalWrite_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int pin;
    int value;

    Ch_VaStart(interp, ap, varg);
    pin = Ch_VaArg(interp, ap, int);
    value = Ch_VaArg(interp, ap, int);
    digitalWrite(pin, value);
    Ch_VaEnd(interp, ap);
}

EXPORTCH void pwmWrite_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int pin;
    int value;

    Ch_VaStart(interp, ap, varg);
    pin = Ch_VaArg(interp, ap, int);
    value = Ch_VaArg(interp, ap, int);
    pwmWrite(pin, value);
    Ch_VaEnd(interp, ap);
}

EXPORTCH int analogRead_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int pin;
    int retval;

    Ch_VaStart(interp, ap, varg);
    pin = Ch_VaArg(interp, ap, int);
    retval = analogRead(pin);
    Ch_VaEnd(interp, ap);
    return retval;
}

EXPORTCH void analogWrite_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int pin;
    int value;

    Ch_VaStart(interp, ap, varg);
    pin = Ch_VaArg(interp, ap, int);
    value = Ch_VaArg(interp, ap, int);
    analogWrite(pin, value);
    Ch_VaEnd(interp, ap);
}

EXPORTCH int wiringPiSetupPiFace_chdl(void *varg) {
    int retval;
    retval = wiringPiSetupPiFace();
    return retval;
}

EXPORTCH int wiringPiSetupPiFaceForGpioProg_chdl(void *varg) {
    int retval;
    retval = wiringPiSetupPiFaceForGpioProg();
    return retval;
}

EXPORTCH void piBoardId_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int *model;
    int *rev;
    int *mem;
    int *maker;
    int *overVolted;

    Ch_VaStart(interp, ap, varg);
    model = Ch_VaArg(interp, ap, int *);
    rev = Ch_VaArg(interp, ap, int *);
    mem = Ch_VaArg(interp, ap, int *);
    maker = Ch_VaArg(interp, ap, int *);
    overVolted = Ch_VaArg(interp, ap, int *);
    piBoardId(model, rev, mem, maker, overVolted);
    Ch_VaEnd(interp, ap);
}

EXPORTCH int wpiPinToGpio_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int wpiPin;
    int retval;

    Ch_VaStart(interp, ap, varg);
    wpiPin = Ch_VaArg(interp, ap, int);
    retval = wpiPinToGpio(wpiPin);
    Ch_VaEnd(interp, ap);
    return retval;
}

EXPORTCH int physPinToGpio_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int physPin;
    int retval;

    Ch_VaStart(interp, ap, varg);
    physPin = Ch_VaArg(interp, ap, int);
    retval = physPinToGpio(physPin);
    Ch_VaEnd(interp, ap);
    return retval;
}

EXPORTCH void setPadDrive_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int group;
    int value;

    Ch_VaStart(interp, ap, varg);
    group = Ch_VaArg(interp, ap, int);
    value = Ch_VaArg(interp, ap, int);
    setPadDrive(group, value);
    Ch_VaEnd(interp, ap);
}

EXPORTCH int getAlt_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int pin;
    int retval;

    Ch_VaStart(interp, ap, varg);
    pin = Ch_VaArg(interp, ap, int);
    retval = getAlt(pin);
    Ch_VaEnd(interp, ap);
    return retval;
}

EXPORTCH void pwmToneWrite_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int pin;
    int freq;

    Ch_VaStart(interp, ap, varg);
    pin = Ch_VaArg(interp, ap, int);
    freq = Ch_VaArg(interp, ap, int);
    pwmToneWrite(pin, freq);
    Ch_VaEnd(interp, ap);
}

EXPORTCH void digitalWriteByte_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int value;

    Ch_VaStart(interp, ap, varg);
    value = Ch_VaArg(interp, ap, int);
    digitalWriteByte(value);
    Ch_VaEnd(interp, ap);
}

EXPORTCH unsigned int digitalReadByte_chdl(void *varg) {
    unsigned int retval;
    retval = digitalReadByte();
    return retval;
}

EXPORTCH void pwmSetMode_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int mode;

    Ch_VaStart(interp, ap, varg);
    mode = Ch_VaArg(interp, ap, int);
    pwmSetMode(mode);
    Ch_VaEnd(interp, ap);
}

EXPORTCH void pwmSetRange_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    unsigned int range;

    Ch_VaStart(interp, ap, varg);
    range = Ch_VaArg(interp, ap, unsigned int);
    pwmSetRange(range);
    Ch_VaEnd(interp, ap);
}

EXPORTCH void pwmSetClock_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int divisor;

    Ch_VaStart(interp, ap, varg);
    divisor = Ch_VaArg(interp, ap, int);
    pwmSetClock(divisor);
    Ch_VaEnd(interp, ap);
}

EXPORTCH void gpioClockSet_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int pin;
    int freq;

    Ch_VaStart(interp, ap, varg);
    pin = Ch_VaArg(interp, ap, int);
    freq = Ch_VaArg(interp, ap, int);
    gpioClockSet(pin, freq);
    Ch_VaEnd(interp, ap);
}

EXPORTCH int waitForInterrupt_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int pin;
    int mS;
    int retval;

    Ch_VaStart(interp, ap, varg);
    pin = Ch_VaArg(interp, ap, int);
    mS = Ch_VaArg(interp, ap, int);
    retval = waitForInterrupt(pin, mS);
    Ch_VaEnd(interp, ap);
    return retval;
}

EXPORTCH void piLock_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int key;

    Ch_VaStart(interp, ap, varg);
    key = Ch_VaArg(interp, ap, int);
    piLock(key);
    Ch_VaEnd(interp, ap);
}

EXPORTCH void piUnlock_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int key;

    Ch_VaStart(interp, ap, varg);
    key = Ch_VaArg(interp, ap, int);
    piUnlock(key);
    Ch_VaEnd(interp, ap);
}

EXPORTCH int piHiPri_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int pri;
    int retval;

    Ch_VaStart(interp, ap, varg);
    pri = Ch_VaArg(interp, ap, int);
    retval = piHiPri(pri);
    Ch_VaEnd(interp, ap);
    return retval;
}

EXPORTCH void delay_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    unsigned int howLong;

    Ch_VaStart(interp, ap, varg);
    howLong = Ch_VaArg(interp, ap, unsigned int);
    delay(howLong);
    Ch_VaEnd(interp, ap);
}

EXPORTCH void delayMicroseconds_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    unsigned int howLong;

    Ch_VaStart(interp, ap, varg);
    howLong = Ch_VaArg(interp, ap, unsigned int);
    delayMicroseconds(howLong);
    Ch_VaEnd(interp, ap);
}

EXPORTCH unsigned int millis_chdl(void *varg) {
    unsigned int retval;
    retval = millis();
    return retval;
}

EXPORTCH unsigned int micros_chdl(void *varg) {
    unsigned int retval;
    retval = micros();
    return retval;
}
