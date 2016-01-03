EESchema Schematic File Version 2
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:minim4-d40
LIBS:IO-cache
EELAYER 25 0
EELAYER END
$Descr USLetter 11000 8500
encoding utf-8
Sheet 1 1
Title "Alice 3 IO Board"
Date "2016-01-03"
Rev "1"
Comp "Earwing, Inc."
Comment1 "Brad Grantham, grantham@plunk.org"
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L MiniM4-D40 U1
U 1 1 568996B3
P 5750 2700
F 0 "U1" H 5400 4150 60  0000 C CNN
F 1 "MiniM4-D40" H 5750 1250 60  0000 C CNN
F 2 "" H 5600 1200 60  0000 C CNN
F 3 "" H 5600 1200 60  0000 C CNN
	1    5750 2700
	1    0    0    -1  
$EndComp
$Comp
L +3.3V #PWR01
U 1 1 5689970E
P 4800 1300
F 0 "#PWR01" H 4800 1150 50  0001 C CNN
F 1 "+3.3V" H 4800 1440 50  0000 C CNN
F 2 "" H 4800 1300 60  0000 C CNN
F 3 "" H 4800 1300 60  0000 C CNN
	1    4800 1300
	1    0    0    -1  
$EndComp
Wire Wire Line
	5100 1500 4800 1500
Wire Wire Line
	4800 1300 4800 1600
Wire Wire Line
	4800 1600 5100 1600
Connection ~ 4800 1500
$Comp
L GND #PWR02
U 1 1 5689975D
P 4800 4200
F 0 "#PWR02" H 4800 3950 50  0001 C CNN
F 1 "GND" H 4800 4050 50  0000 C CNN
F 2 "" H 4800 4200 60  0000 C CNN
F 3 "" H 4800 4200 60  0000 C CNN
	1    4800 4200
	1    0    0    -1  
$EndComp
Wire Wire Line
	5100 3800 4800 3800
Wire Wire Line
	4800 3800 4800 4200
Wire Wire Line
	5100 3900 4800 3900
Connection ~ 4800 3900
$EndSCHEMATC
