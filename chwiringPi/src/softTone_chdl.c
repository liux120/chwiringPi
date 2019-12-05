#include <softTone.h>
#include <ch.h>

EXPORTCH int softToneCreate_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int pin;
    int retval;

    Ch_VaStart(interp, ap, varg);
    pin = Ch_VaArg(interp, ap, int);
    retval = softToneCreate(pin);
    Ch_VaEnd(interp, ap);
    return retval;
}

EXPORTCH void softToneStop_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int pin;

    Ch_VaStart(interp, ap, varg);
    pin = Ch_VaArg(interp, ap, int);
    softToneStop(pin);
    Ch_VaEnd(interp, ap);
}

EXPORTCH void softToneWrite_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int pin;
    int freq;

    Ch_VaStart(interp, ap, varg);
    pin = Ch_VaArg(interp, ap, int);
    freq = Ch_VaArg(interp, ap, int);
    softToneWrite(pin, freq);
    Ch_VaEnd(interp, ap);
}
