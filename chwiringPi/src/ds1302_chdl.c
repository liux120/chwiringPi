#include <ds1302.h>
#include <ch.h>

EXPORTCH unsigned int ds1302rtcRead_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int reg;
    unsigned int retval;

    Ch_VaStart(interp, ap, varg);
    reg = Ch_VaArg(interp, ap, int);
    retval = ds1302rtcRead(reg);
    Ch_VaEnd(interp, ap);
    return retval;
}

EXPORTCH void ds1302rtcWrite_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int reg;
    unsigned int data;

    Ch_VaStart(interp, ap, varg);
    reg = Ch_VaArg(interp, ap, int);
    data = Ch_VaArg(interp, ap, unsigned int);
    ds1302rtcWrite(reg, data);
    Ch_VaEnd(interp, ap);
}

EXPORTCH unsigned int ds1302ramRead_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int addr;
    unsigned int retval;

    Ch_VaStart(interp, ap, varg);
    addr = Ch_VaArg(interp, ap, int);
    retval = ds1302ramRead(addr);
    Ch_VaEnd(interp, ap);
    return retval;
}

EXPORTCH void ds1302ramWrite_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int addr;
    unsigned int data;

    Ch_VaStart(interp, ap, varg);
    addr = Ch_VaArg(interp, ap, int);
    data = Ch_VaArg(interp, ap, unsigned int);
    ds1302ramWrite(addr, data);
    Ch_VaEnd(interp, ap);
}

EXPORTCH void ds1302clockRead_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int *clockData ;

    Ch_VaStart(interp, ap, varg);
    clockData  = Ch_VaArg(interp, ap, int *);
    ds1302clockRead(clockData );
    Ch_VaEnd(interp, ap);
}

EXPORTCH void ds1302clockWrite_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int *clockData ;

    Ch_VaStart(interp, ap, varg);
    clockData  = Ch_VaArg(interp, ap, int *);
    ds1302clockWrite(clockData );
    Ch_VaEnd(interp, ap);
}

EXPORTCH void ds1302trickleCharge_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int diodes;
    int resistors;

    Ch_VaStart(interp, ap, varg);
    diodes = Ch_VaArg(interp, ap, int);
    resistors = Ch_VaArg(interp, ap, int);
    ds1302trickleCharge(diodes, resistors);
    Ch_VaEnd(interp, ap);
}

EXPORTCH void ds1302setup_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int clockPin;
    int dataPin;
    int csPin;

    Ch_VaStart(interp, ap, varg);
    clockPin = Ch_VaArg(interp, ap, int);
    dataPin = Ch_VaArg(interp, ap, int);
    csPin = Ch_VaArg(interp, ap, int);
    ds1302setup(clockPin, dataPin, csPin);
    Ch_VaEnd(interp, ap);
}
