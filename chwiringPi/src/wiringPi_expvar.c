/* set the values for global variables in the Ch space with values in the C space */
/* extern global variables 
extern const char *piModelNames    [16];
extern const char *piRevisionNames [16];
extern const char *piMakerNames    [16];
extern const int   piMemorySize    [ 8];
*/
#include <wiringPi.h>
#include <ch.h>

EXPORTCH void wiringPi_expvar_chdl(void *varg) {
    ChInterp_t interp;
    ChVaList_t ap;
    char **piModelNames_ptr;
    char **piRevisionNames_ptr;
    char **piMakerNames_ptr;
    int i, *piMemorySize_ptr;

    Ch_VaStart(interp, ap, varg);

    piModelNames_ptr = Ch_VaArg(interp, ap, char**);
    for(i = 0; i < 16; i++) {
      piModelNames_ptr[i] = (char *)piModelNames[i];
    }

    piRevisionNames_ptr = Ch_VaArg(interp, ap, char**);
    for(i = 0; i < 16; i++) {
      piRevisionNames_ptr[i] = (char*) piRevisionNames[i];
    }

    piMakerNames_ptr = Ch_VaArg(interp, ap, char**);
    for(i = 0; i < 16; i++) {
      piMakerNames_ptr[i] = (char *)piMakerNames[i];
    }

    piMemorySize_ptr = Ch_VaArg(interp, ap, int*);
    for(i = 0; i < 8; i++) {
      piMemorySize_ptr[i] = piMemorySize[i];
    }

    Ch_VaEnd(interp, ap);
    return;
}
