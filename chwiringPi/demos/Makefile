target: blink

blink::blink.c
	gcc -Wall -o blink blink.c -lwiringPi
	gcc -Wall -o test1 test1.c -lwiringPi

runc:
	sudo ./blink

runch:
	ch ./blink.ch

clean:
	rm -rf blink.o test1.o a.out

cleanall:
	rm -rf blink test1
