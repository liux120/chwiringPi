The Ch WiringPi Open Source Package is a Ch binding to
the WiringPiD_C C library version 1.0.0. With Ch WiringPi,
WiringPi C library functions can run in Ch interpretively without
compilation. You don't need to install WiringPi C library
to install and run Ch WiringPi package.

Ch is an embeddable C/C++ interpreter for cross platform scripting,
2D/3D plotting, numerical computing and embedded scripting.
More information about Ch can be found at
http://www.softintegration.com/.

More information about the WiringPi C library can be found at
http://www.wiringpi.com


Release Notes
------------------------------------------------------------------
Ch WiringPi version 1.0, March 1, 2017

System Requirements
------------------------------------------------------------------
(1) Ch Professional Edition version 8.0.0 or higher.
    Ch is available from http://www.softintegration.com.

Contents
------------------------------------------------------------------
Ch WiringPi package contains the following directories

README.TXT             ---  This file 
license.txt            ---  Copyright license file
Makefile               ---  Makefile for install/uninstall/create the package
chwiringPi             ---  Ch WiringPi package
chwiringPi/demos       ---  WiringPi C demo programs in C readily to run in Ch
chwiringPi/dl          ---  dynamically loaded library
chwiringPi/include     ---  header files
chwiringPi/lib         ---  function files
chwiringPi/src         ---  source code to create chwiringPi/dl/libwiringPi.dl and lib/*.chf

The following files are from WiringPi in the operating system for Pi.
chwiringPi/include/WiringPi.H and *.h 

The following files are modified based on the original distribution
chwiringPi/include/wiringPi.h
chwiringPi/src/header/wiringPi.h


------------------------------------------------------------------
INSTRUCTIONS FOR HANDLING THE PACKAGE
------------------------------------------------------------------

(a) Launch a Ch command shell similar to a MS-DOS shell.
(b) Go go the directory such as
    /home/pi/Downloads/
    where the downloaded package chwiringPi-1.0.0.zip is 
    located by the command.

       cd /home/pi/Downloads/

(1) Unpack the package chwiringPi-1.0.0.zip
------------------------------------------------------------------
Run command

      unzip chwiringPi-1.0.0.zip

It will create the directory chwiringPi-1.0.0 in the current directory such as
/home/pi/Downloads/chwiringPi-1.0.0

(2) Installation Instructions:
------------------------------------------------------------------
Assume the directory /home/pi/Downloads/chwiringPi-1.0.0
contains the Ch WiringPi package.
Run commands

      cd /home/pi/Downloads/chwiringPi-1.0.0
      make install

The above command copies chwiringPi/ into /usr/local/ch/package/chwiringPi/.
It will also copies chwiringPi/include/wiringPi.h and other header files into
/usr/local/ch/toolkit/include/ directory. The installed files and directory
are listed and saved in file /usr/local/ch/package/installed/chwiringPi.


(3) Uninstallation Instructions:
------------------------------------------------------------------
Assume the directory "/home/pi/Downloads/chwiringPi-1.0.0" 
contains the Ch WiringPi package.
Run commands

      cd /home/pi/Downloads/chwiringPi-1.0.0
      make uninstall

The above command will remove the installed files and directory listed
in file /usr/local/ch/package/installed/chwiringPi.


(4) Run demo programs 'blink.c', 'blink.ch', and 'blink2.ch'
    in the directory /usr/local/ch/package/chwiringPi/demos:
------------------------------------------------------------------
(a) Run demo programs in a Ch command shell by the following commands.

      cd /usr/local/ch/package/chwiringPi/demos
      blink.c
      blink.ch
      blink2.ch

(b) Run demo programs using ChIDE 
      chide blink.c blink.ch blink2.ch
      Then click "Run"


------------------------------------------------------------------
CREATE THE CH PACKAGE FOR DISTRIBUTION
------------------------------------------------------------------

(1) Create the package chwiringPi-1.0.0.zip for distribution
------------------------------------------------------------------
Assume the directory /home/pi/Downloads/chwiringPi-1.0.0
Run commands

      cd /home/pi/Downloads/chwiringPi-1.0.0
      make createpkg
to create /home/pi/Downloads/chwiringPi-1.0.0.zip

(2) How to update Ch WiringPi package for newer versions of WiringPi:
------------------------------------------------------------------
(a) If Ch has not been installed in your computer,
    install Ch from http://www.softintegration.com.
(b) Update chwiringPi/include/WiringPi.h. This header file can be 
    designed to be readily used by both Ch and C/C++ compilers.
(c) Update  chwiringPi/src/header/WiringPi.h with new functions
    Update all other header files in chwiringPi/src/header/ with new functions
(e) In the directory  chwiringPi/src, type
        make chf
        make
(f) Change VERSION in file Makefile, For example, change 1.0.0 to 2.0.0 
    for version 2.0.0, and then type
        make createpkg
    to create the package ../chwiringPi-2.0.0.zip for distribution.
(g) Install the newly created Ch WiringPi package by command
        make
    or
        make install


Support for Ch WiringPi package
------------------------------------------------------------------
Questions specific to the Ch WiringPi Package can be posted in 
(1) C/C++ topics for WiringPi forum in Raspberry Pi http://www.raspberrypi.org
(2) Ch User Group at http://www.softintegration.com.
(3) C-STEM Forum  http://c-stem.ucdavis.edu
