(1) Setup for compilation and linking in Ch shell based on
    instructions in section 1.1 in Ch SDK Users's Guide at
    CHHOME/docs/chsdk.pdf such as /usr/local/ch/docs/chsdk.pdf
(2) In a Ch command shell, type
       make chf
    to create ./wiringPi_chdl.c and ../lib/*.chf function files.
(3) In a Ch command shell, type
       make 
    to create the dynamically loaded lib ../dl/libwiringPi.dl.
(4) File ../include/wiringPi.h modified based on /usr/include/wiringPi.h
    or ../include/wiringPi.h_orig
(5) File header/wiringPi.h is used 
    to create ./wiringPi_chdl.c and ../lib/*.chf function files.
    File header/wiringPi.h is modified from file /usr/include/wiringPi.h.
    It cannot be used for compilation.
(6) File wiringPi_expvar.c for handling the global variables in WiringPi.
