#include <wiringPiSPI.h>
#include <ch.h>

EXPORTCH int wiringPiSPIGetFd_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int channel;
    int retval;

    Ch_VaStart(interp, ap, varg);
    channel = Ch_VaArg(interp, ap, int);
    retval = wiringPiSPIGetFd(channel);
    Ch_VaEnd(interp, ap);
    return retval;
}

EXPORTCH int wiringPiSPIDataRW_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int channel;
    unsigned char *data;
    int len;
    int retval;

    Ch_VaStart(interp, ap, varg);
    channel = Ch_VaArg(interp, ap, int);
    data = Ch_VaArg(interp, ap, unsigned char *);
    len = Ch_VaArg(interp, ap, int);
    retval = wiringPiSPIDataRW(channel, data, len);
    Ch_VaEnd(interp, ap);
    return retval;
}

EXPORTCH int wiringPiSPISetupMode_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int channel;
    int speed;
    int mode;
    int retval;

    Ch_VaStart(interp, ap, varg);
    channel = Ch_VaArg(interp, ap, int);
    speed = Ch_VaArg(interp, ap, int);
    mode = Ch_VaArg(interp, ap, int);
    retval = wiringPiSPISetupMode(channel, speed, mode);
    Ch_VaEnd(interp, ap);
    return retval;
}

EXPORTCH int wiringPiSPISetup_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int channel;
    int speed;
    int retval;

    Ch_VaStart(interp, ap, varg);
    channel = Ch_VaArg(interp, ap, int);
    speed = Ch_VaArg(interp, ap, int);
    retval = wiringPiSPISetup(channel, speed);
    Ch_VaEnd(interp, ap);
    return retval;
}
