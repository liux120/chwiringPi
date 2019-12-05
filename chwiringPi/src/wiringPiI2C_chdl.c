#include <wiringPiI2C.h>
#include <ch.h>

EXPORTCH int wiringPiI2CRead_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int fd;
    int retval;

    Ch_VaStart(interp, ap, varg);
    fd = Ch_VaArg(interp, ap, int);
    retval = wiringPiI2CRead(fd);
    Ch_VaEnd(interp, ap);
    return retval;
}

EXPORTCH int wiringPiI2CReadReg8_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int fd;
    int reg;
    int retval;

    Ch_VaStart(interp, ap, varg);
    fd = Ch_VaArg(interp, ap, int);
    reg = Ch_VaArg(interp, ap, int);
    retval = wiringPiI2CReadReg8(fd, reg);
    Ch_VaEnd(interp, ap);
    return retval;
}

EXPORTCH int wiringPiI2CReadReg16_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int fd;
    int reg;
    int retval;

    Ch_VaStart(interp, ap, varg);
    fd = Ch_VaArg(interp, ap, int);
    reg = Ch_VaArg(interp, ap, int);
    retval = wiringPiI2CReadReg16(fd, reg);
    Ch_VaEnd(interp, ap);
    return retval;
}

EXPORTCH int wiringPiI2CWrite_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int fd;
    int data;
    int retval;

    Ch_VaStart(interp, ap, varg);
    fd = Ch_VaArg(interp, ap, int);
    data = Ch_VaArg(interp, ap, int);
    retval = wiringPiI2CWrite(fd, data);
    Ch_VaEnd(interp, ap);
    return retval;
}

EXPORTCH int wiringPiI2CWriteReg8_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int fd;
    int reg;
    int data;
    int retval;

    Ch_VaStart(interp, ap, varg);
    fd = Ch_VaArg(interp, ap, int);
    reg = Ch_VaArg(interp, ap, int);
    data = Ch_VaArg(interp, ap, int);
    retval = wiringPiI2CWriteReg8(fd, reg, data);
    Ch_VaEnd(interp, ap);
    return retval;
}

EXPORTCH int wiringPiI2CWriteReg16_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int fd;
    int reg;
    int data;
    int retval;

    Ch_VaStart(interp, ap, varg);
    fd = Ch_VaArg(interp, ap, int);
    reg = Ch_VaArg(interp, ap, int);
    data = Ch_VaArg(interp, ap, int);
    retval = wiringPiI2CWriteReg16(fd, reg, data);
    Ch_VaEnd(interp, ap);
    return retval;
}

EXPORTCH int wiringPiI2CSetupInterface_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    char *device;
    int devId;
    int retval;

    Ch_VaStart(interp, ap, varg);
    device = Ch_VaArg(interp, ap, char *);
    devId = Ch_VaArg(interp, ap, int);
    retval = wiringPiI2CSetupInterface(device, devId);
    Ch_VaEnd(interp, ap);
    return retval;
}

EXPORTCH int wiringPiI2CSetup_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int devId;
    int retval;

    Ch_VaStart(interp, ap, varg);
    devId = Ch_VaArg(interp, ap, int);
    retval = wiringPiI2CSetup(devId);
    Ch_VaEnd(interp, ap);
    return retval;
}
