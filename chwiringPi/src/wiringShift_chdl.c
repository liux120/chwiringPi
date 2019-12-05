#include <wiringShift.h>
#include <ch.h>

EXPORTCH uint8_t shiftIn_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    uint8_t dPin;
    uint8_t cPin;
    uint8_t order;
    uint8_t retval;

    Ch_VaStart(interp, ap, varg);
    dPin = Ch_VaArg(interp, ap, uint8_t);
    cPin = Ch_VaArg(interp, ap, uint8_t);
    order = Ch_VaArg(interp, ap, uint8_t);
    retval = shiftIn(dPin, cPin, order);
    Ch_VaEnd(interp, ap);
    return retval;
}

EXPORTCH void shiftOut_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    uint8_t dPin;
    uint8_t cPin;
    uint8_t order;
    uint8_t val;

    Ch_VaStart(interp, ap, varg);
    dPin = Ch_VaArg(interp, ap, uint8_t);
    cPin = Ch_VaArg(interp, ap, uint8_t);
    order = Ch_VaArg(interp, ap, uint8_t);
    val = Ch_VaArg(interp, ap, uint8_t);
    shiftOut(dPin, cPin, order, val);
    Ch_VaEnd(interp, ap);
}
