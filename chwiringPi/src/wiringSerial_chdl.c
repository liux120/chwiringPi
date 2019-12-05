#include <wiringSerial.h>
#include <ch.h>

EXPORTCH int serialOpen_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    char *device;
    int baud;
    int retval;

    Ch_VaStart(interp, ap, varg);
    device = Ch_VaArg(interp, ap, char *);
    baud = Ch_VaArg(interp, ap, int);
    retval = serialOpen(device, baud);
    Ch_VaEnd(interp, ap);
    return retval;
}

EXPORTCH void serialClose_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int fd;

    Ch_VaStart(interp, ap, varg);
    fd = Ch_VaArg(interp, ap, int);
    serialClose(fd);
    Ch_VaEnd(interp, ap);
}

EXPORTCH void serialFlush_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int fd;

    Ch_VaStart(interp, ap, varg);
    fd = Ch_VaArg(interp, ap, int);
    serialFlush(fd);
    Ch_VaEnd(interp, ap);
}

EXPORTCH void serialPutchar_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int fd;
    unsigned char c;

    Ch_VaStart(interp, ap, varg);
    fd = Ch_VaArg(interp, ap, int);
    c = Ch_VaArg(interp, ap, unsigned char);
    serialPutchar(fd, c);
    Ch_VaEnd(interp, ap);
}

EXPORTCH void serialPuts_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int fd;
    char *s;

    Ch_VaStart(interp, ap, varg);
    fd = Ch_VaArg(interp, ap, int);
    s = Ch_VaArg(interp, ap, char *);
    serialPuts(fd, s);
    Ch_VaEnd(interp, ap);
}

EXPORTCH int serialDataAvail_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int fd;
    int retval;

    Ch_VaStart(interp, ap, varg);
    fd = Ch_VaArg(interp, ap, int);
    retval = serialDataAvail(fd);
    Ch_VaEnd(interp, ap);
    return retval;
}

EXPORTCH int serialGetchar_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    int fd;
    int retval;

    Ch_VaStart(interp, ap, varg);
    fd = Ch_VaArg(interp, ap, int);
    retval = serialGetchar(fd);
    Ch_VaEnd(interp, ap);
    return retval;
}
