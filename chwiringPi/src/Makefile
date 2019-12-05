# build dynamically loaded lib ../dl/libwiringPi.dl

target: ../dl/libwiringPi.dl

../dl/libwiringPi.dl: wiringPi_expvar.o wiringPi_chdl.o wiringPiI2C_chdl.o wiringPiSPI_chdl.o wiringSerial_chdl.o wiringShift_chdl.o ds1302_chdl.o pcf8591_chdl.o softPwm_chdl.o softTone_chdl.o
	ch dllink libwiringPi.dl wiringPi_expvar.o wiringPi_chdl.o wiringPiI2C_chdl.o wiringPiSPI_chdl.o wiringSerial_chdl.o wiringShift_chdl.o ds1302_chdl.o pcf8591_chdl.o softPwm_chdl.o softTone_chdl.o -lwiringPi
	mv libwiringPi.dl ../dl/libwiringPi.dl 
	make clean
wiringPi_expvar.o:  wiringPi_expvar.c 
	ch dlcomp libwiringPi.dl wiringPi_expvar.c
wiringPi_chdl.o:  wiringPi_chdl.c 
	ch dlcomp libwiringPi.dl wiringPi_chdl.c
wiringPiI2C_chdl.o:  wiringPiI2C_chdl.c 
	ch dlcomp libwiringPi.dl wiringPiI2C_chdl.c
wiringPiSPI_chdl.o:  wiringPiSPI_chdl.c 
	ch dlcomp libwiringPi.dl wiringPiSPI_chdl.c
wiringSerial_chdl.o:  wiringSerial_chdl.c 
	ch dlcomp libwiringPi.dl wiringSerial_chdl.c
wiringShift_chdl.o:  wiringShift_chdl.c 
	ch dlcomp libwiringPi.dl wiringShift_chdl.c
ds1302_chdl.o:  ds1302_chdl.c 
	ch dlcomp libwiringPi.dl ds1302_chdl.c
pcf8591_chdl.o:  pcf8591_chdl.c 
	ch dlcomp libwiringPi.dl pcf8591_chdl.c
softPwm_chdl.o:  softPwm_chdl.c 
	ch dlcomp libwiringPi.dl softPwm_chdl.c
softTone_chdl.o:  softTone_chdl.c 
	ch dlcomp libwiringPi.dl softTone_chdl.c

# create wiringPi_chdl.c and ../lib/*.chf
chf:  
	rm -rf ../lib
	ch c2chf header/wiringPi.h     -o c . -o chf ../lib -h _ChwiringPi_handle
	ch c2chf header/wiringPiI2C.h  -o c . -o chf ../lib -h _ChwiringPi_handle
	ch c2chf header/wiringPiSPI.h  -o c . -o chf ../lib -h _ChwiringPi_handle
	ch c2chf header/wiringSerial.h -o c . -o chf ../lib -h _ChwiringPi_handle
	ch c2chf header/wiringShift.h  -o c . -o chf ../lib -h _ChwiringPi_handle
	ch c2chf header/ds1302.h  -o c . -o chf ../lib -h _ChwiringPi_handle
	ch c2chf header/pcf8591.h  -o c . -o chf ../lib -h _ChwiringPi_handle
	ch c2chf header/softPwm.h  -o c . -o chf ../lib -h _ChwiringPi_handle
	ch c2chf header/softTone.h  -o c . -o chf ../lib -h _ChwiringPi_handle
clean:
	rm *.o
