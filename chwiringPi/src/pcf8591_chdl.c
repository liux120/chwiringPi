#include <pcf8591.h>
#include <ch.h>

EXPORTCH int pcf8591Setup_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int pinBase;
    int i2cAddress;
    int retval;

    Ch_VaStart(interp, ap, varg);
    pinBase = Ch_VaArg(interp, ap, int);
    i2cAddress = Ch_VaArg(interp, ap, int);
    retval = pcf8591Setup(pinBase, i2cAddress);
    Ch_VaEnd(interp, ap);
    return retval;
}
