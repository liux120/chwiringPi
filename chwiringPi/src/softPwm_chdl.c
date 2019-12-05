#include <softPwm.h>
#include <ch.h>

EXPORTCH int softPwmCreate_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int pin;
    int value;
    int range;
    int retval;

    Ch_VaStart(interp, ap, varg);
    pin = Ch_VaArg(interp, ap, int);
    value = Ch_VaArg(interp, ap, int);
    range = Ch_VaArg(interp, ap, int);
    retval = softPwmCreate(pin, value, range);
    Ch_VaEnd(interp, ap);
    return retval;
}

EXPORTCH void softPwmWrite_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int pin;
    int value;

    Ch_VaStart(interp, ap, varg);
    pin = Ch_VaArg(interp, ap, int);
    value = Ch_VaArg(interp, ap, int);
    softPwmWrite(pin, value);
    Ch_VaEnd(interp, ap);
}

EXPORTCH void softPwmStop_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int pin;

    Ch_VaStart(interp, ap, varg);
    pin = Ch_VaArg(interp, ap, int);
    softPwmStop(pin);
    Ch_VaEnd(interp, ap);
}
