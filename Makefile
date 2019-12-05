# install Ch wiringPi package
# uninstall Ch wiringPi package
# create ../chwiringPi-1.0.0.zip for distribution
PACKAGE=chwiringPi
VERSION=1.0.0

install:
	ch pkginstall.ch $(PACKAGE)
uninstall:
	ch pkginstall.ch -u $(PACKAGE)
createpkg:
	echo building $(PACKAGE)-$(VERSION).zip
	(cd $(PACKAGE)/src; make chf; make)
	rm -rf ../$(PACKAGE)-$(VERSION).zip
	cp license.txt chwiringPi
	(cd ../; zip -rq $(PACKAGE)-$(VERSION).zip $(PACKAGE)-$(VERSION) )
