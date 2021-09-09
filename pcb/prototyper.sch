EESchema Schematic File Version 4
LIBS:suzuri-cache
EELAYER 26 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "Suzuri Keypad"
Date ""
Rev "1"
Comp "@e3w2q"
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L power:GND #PWR02
U 1 1 5CE3BEE4
P 1050 950
F 0 "#PWR02" H 1050 700 50  0001 C CNN
F 1 "GND" H 1050 800 50  0000 C CNN
F 2 "" H 1050 950 50  0001 C CNN
F 3 "" H 1050 950 50  0001 C CNN
	1    1050 950 
	1    0    0    -1  
$EndComp
$Comp
L power:PWR_FLAG #FLG01
U 1 1 5CE3BEEA
P 1050 800
F 0 "#FLG01" H 1050 875 50  0001 C CNN
F 1 "PWR_FLAG" H 1050 950 50  0000 C CNN
F 2 "" H 1050 800 50  0001 C CNN
F 3 "" H 1050 800 50  0001 C CNN
	1    1050 800 
	1    0    0    -1  
$EndComp
$Comp
L power:PWR_FLAG #FLG02
U 1 1 5CE3BEF0
P 700 950
F 0 "#FLG02" H 700 1025 50  0001 C CNN
F 1 "PWR_FLAG" H 700 1100 50  0000 C CNN
F 2 "" H 700 950 50  0001 C CNN
F 3 "" H 700 950 50  0001 C CNN
	1    700  950 
	-1   0    0    1   
$EndComp
Wire Wire Line
	1050 800  1050 950 
Wire Wire Line
	700  800  700  950 
$Comp
L power:VCC #PWR01
U 1 1 5CE3E880
P 700 800
F 0 "#PWR01" H 700 650 50  0001 C CNN
F 1 "VCC" H 717 973 50  0000 C CNN
F 2 "" H 700 800 50  0001 C CNN
F 3 "" H 700 800 50  0001 C CNN
	1    700  800 
	1    0    0    -1  
$EndComp
$Comp
L power:VCC #PWR03
U 1 1 5CE3F20D
P 3950 850
F 0 "#PWR03" H 3950 700 50  0001 C CNN
F 1 "VCC" H 3967 1023 50  0000 C CNN
F 2 "" H 3950 850 50  0001 C CNN
F 3 "" H 3950 850 50  0001 C CNN
	1    3950 850 
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR05
U 1 1 5CE4B3AC
P 1600 1650
F 0 "#PWR05" H 1600 1400 50  0001 C CNN
F 1 "GND" H 1600 1500 50  0000 C CNN
F 2 "" H 1600 1650 50  0001 C CNN
F 3 "" H 1600 1650 50  0001 C CNN
	1    1600 1650
	1    0    0    -1  
$EndComp
Wire Wire Line
	1600 1550 1600 1650
Text GLabel 1600 1550 0    50   Input ~ 0
GND
Text GLabel 3600 1200 2    50   Input ~ 0
GND
NoConn ~ 3600 1000
Wire Wire Line
	3950 850  3950 1400
Wire Wire Line
	3600 1400 3950 1400
$Comp
L power:GND #PWR08
U 1 1 5EB6B80F
P 8350 2900
F 0 "#PWR08" H 8350 2650 50  0001 C CNN
F 1 "GND" H 8350 2750 50  0000 C CNN
F 2 "" H 8350 2900 50  0001 C CNN
F 3 "" H 8350 2900 50  0001 C CNN
	1    8350 2900
	-1   0    0    -1  
$EndComp
$Comp
L #library:BLEMicroPro U1
U 1 1 5CE18F26
P 2900 1850
F 0 "U1" H 2900 3000 60  0000 C CNN
F 1 "ProMicro/BLEMicroPro" H 2900 2850 60  0000 C CNN
F 2 "#footprint:ArduinoProMicro_ConThrough" H 3000 800 60  0001 C CNN
F 3 "" H 3000 800 60  0000 C CNN
	1    2900 1850
	1    0    0    -1  
$EndComp
NoConn ~ 3600 1100
NoConn ~ 2200 1000
Text GLabel 3600 1500 2    50   Input ~ 0
9
Text GLabel 3600 1700 2    50   Input ~ 0
11
Text GLabel 3600 1800 2    50   Input ~ 0
12
Text GLabel 3600 1900 2    50   Input ~ 0
13
Text GLabel 3600 2000 2    50   Input ~ 0
14
Text GLabel 3600 2200 2    50   Input ~ 0
16
Text GLabel 3600 2100 2    50   Input ~ 0
15
Text GLabel 3600 1600 2    50   Input ~ 0
10
Text GLabel 2200 1300 0    50   Input ~ 0
GND
Text GLabel 2200 1400 0    50   Input ~ 0
GND
Text GLabel 2200 1500 0    50   Input ~ 0
1
Text GLabel 2200 1800 0    50   Input ~ 0
4
Text GLabel 2200 1900 0    50   Input ~ 0
5
Text GLabel 2200 2100 0    50   Input ~ 0
7
Text GLabel 2200 2200 0    50   Input ~ 0
8
Text GLabel 2200 1600 0    50   Input ~ 0
2
Text GLabel 2200 1700 0    50   Input ~ 0
3
Text GLabel 2200 2000 0    50   Input ~ 0
6
$Comp
L #library:SW_Push SW1
U 1 1 6014AB1A
P 8150 1300
F 0 "SW1" H 8150 1585 50  0000 C CNN
F 1 "SW_Push" H 8150 1494 50  0000 C CNN
F 2 "#footprint:CherryMX" H 8150 1500 50  0001 C CNN
F 3 "" H 8150 1500 50  0001 C CNN
	1    8150 1300
	1    0    0    -1  
$EndComp
Text GLabel 7950 1300 0    50   Input ~ 0
1
Text GLabel 7950 1600 0    50   Input ~ 0
4
Text GLabel 7950 1700 0    50   Input ~ 0
5
Text GLabel 7950 1900 0    50   Input ~ 0
7
Text GLabel 7950 2000 0    50   Input ~ 0
8
Text GLabel 7950 1400 0    50   Input ~ 0
2
Text GLabel 7950 1500 0    50   Input ~ 0
3
Text GLabel 7950 1800 0    50   Input ~ 0
6
Text GLabel 7950 2100 0    50   Input ~ 0
9
Text GLabel 7950 2300 0    50   Input ~ 0
11
Text GLabel 7950 2400 0    50   Input ~ 0
12
Text GLabel 7950 2500 0    50   Input ~ 0
13
Text GLabel 7950 2600 0    50   Input ~ 0
14
Text GLabel 7950 2800 0    50   Input ~ 0
16
Text GLabel 7950 2700 0    50   Input ~ 0
15
Text GLabel 7950 2200 0    50   Input ~ 0
10
$Comp
L #library:SW_Push SW2
U 1 1 6014CC08
P 8150 1400
F 0 "SW2" H 8150 1685 50  0000 C CNN
F 1 "SW_Push" H 8150 1594 50  0000 C CNN
F 2 "#footprint:CherryMX" H 8150 1600 50  0001 C CNN
F 3 "" H 8150 1600 50  0001 C CNN
	1    8150 1400
	1    0    0    -1  
$EndComp
$Comp
L #library:SW_Push SW3
U 1 1 6014CC60
P 8150 1500
F 0 "SW3" H 8150 1785 50  0000 C CNN
F 1 "SW_Push" H 8150 1694 50  0000 C CNN
F 2 "#footprint:CherryMX" H 8150 1700 50  0001 C CNN
F 3 "" H 8150 1700 50  0001 C CNN
	1    8150 1500
	1    0    0    -1  
$EndComp
$Comp
L #library:SW_Push SW4
U 1 1 6014CCBA
P 8150 1600
F 0 "SW4" H 8150 1885 50  0000 C CNN
F 1 "SW_Push" H 8150 1794 50  0000 C CNN
F 2 "#footprint:CherryMX" H 8150 1800 50  0001 C CNN
F 3 "" H 8150 1800 50  0001 C CNN
	1    8150 1600
	1    0    0    -1  
$EndComp
$Comp
L #library:SW_Push SW5
U 1 1 6014CD16
P 8150 1700
F 0 "SW5" H 8150 1985 50  0000 C CNN
F 1 "SW_Push" H 8150 1894 50  0000 C CNN
F 2 "#footprint:CherryMX" H 8150 1900 50  0001 C CNN
F 3 "" H 8150 1900 50  0001 C CNN
	1    8150 1700
	1    0    0    -1  
$EndComp
$Comp
L #library:SW_Push SW6
U 1 1 6014CD78
P 8150 1800
F 0 "SW6" H 8150 2085 50  0000 C CNN
F 1 "SW_Push" H 8150 1994 50  0000 C CNN
F 2 "#footprint:CherryMX" H 8150 2000 50  0001 C CNN
F 3 "" H 8150 2000 50  0001 C CNN
	1    8150 1800
	1    0    0    -1  
$EndComp
$Comp
L #library:SW_Push SW7
U 1 1 6014CE5E
P 8150 1900
F 0 "SW7" H 8150 2185 50  0000 C CNN
F 1 "SW_Push" H 8150 2094 50  0000 C CNN
F 2 "#footprint:CherryMX" H 8150 2100 50  0001 C CNN
F 3 "" H 8150 2100 50  0001 C CNN
	1    8150 1900
	1    0    0    -1  
$EndComp
$Comp
L #library:SW_Push SW8
U 1 1 6014CEC0
P 8150 2000
F 0 "SW8" H 8150 2285 50  0000 C CNN
F 1 "SW_Push" H 8150 2194 50  0000 C CNN
F 2 "#footprint:CherryMX" H 8150 2200 50  0001 C CNN
F 3 "" H 8150 2200 50  0001 C CNN
	1    8150 2000
	1    0    0    -1  
$EndComp
$Comp
L #library:SW_Push SW9
U 1 1 6014CF24
P 8150 2100
F 0 "SW9" H 8150 2385 50  0000 C CNN
F 1 "SW_Push" H 8150 2294 50  0000 C CNN
F 2 "#footprint:CherryMX" H 8150 2300 50  0001 C CNN
F 3 "" H 8150 2300 50  0001 C CNN
	1    8150 2100
	1    0    0    -1  
$EndComp
$Comp
L #library:SW_Push SW10
U 1 1 6014CF8A
P 8150 2200
F 0 "SW10" H 8150 2485 50  0000 C CNN
F 1 "SW_Push" H 8150 2394 50  0000 C CNN
F 2 "#footprint:CherryMX" H 8150 2400 50  0001 C CNN
F 3 "" H 8150 2400 50  0001 C CNN
	1    8150 2200
	1    0    0    -1  
$EndComp
$Comp
L #library:SW_Push SW11
U 1 1 6014CFFA
P 8150 2300
F 0 "SW11" H 8150 2585 50  0000 C CNN
F 1 "SW_Push" H 8150 2494 50  0000 C CNN
F 2 "#footprint:CherryMX" H 8150 2500 50  0001 C CNN
F 3 "" H 8150 2500 50  0001 C CNN
	1    8150 2300
	1    0    0    -1  
$EndComp
$Comp
L #library:SW_Push SW12
U 1 1 6014D064
P 8150 2400
F 0 "SW12" H 8150 2685 50  0000 C CNN
F 1 "SW_Push" H 8150 2594 50  0000 C CNN
F 2 "#footprint:CherryMX" H 8150 2600 50  0001 C CNN
F 3 "" H 8150 2600 50  0001 C CNN
	1    8150 2400
	1    0    0    -1  
$EndComp
$Comp
L #library:SW_Push SW13
U 1 1 6014D0D0
P 8150 2500
F 0 "SW13" H 8150 2785 50  0000 C CNN
F 1 "SW_Push" H 8150 2694 50  0000 C CNN
F 2 "#footprint:CherryMX" H 8150 2700 50  0001 C CNN
F 3 "" H 8150 2700 50  0001 C CNN
	1    8150 2500
	1    0    0    -1  
$EndComp
$Comp
L #library:SW_Push SW14
U 1 1 6014D142
P 8150 2600
F 0 "SW14" H 8150 2885 50  0000 C CNN
F 1 "SW_Push" H 8150 2794 50  0000 C CNN
F 2 "#footprint:CherryMX" H 8150 2800 50  0001 C CNN
F 3 "" H 8150 2800 50  0001 C CNN
	1    8150 2600
	1    0    0    -1  
$EndComp
$Comp
L #library:SW_Push SW15
U 1 1 6014D1B2
P 8150 2700
F 0 "SW15" H 8150 2985 50  0000 C CNN
F 1 "SW_Push" H 8150 2894 50  0000 C CNN
F 2 "#footprint:CherryMX" H 8150 2900 50  0001 C CNN
F 3 "" H 8150 2900 50  0001 C CNN
	1    8150 2700
	1    0    0    -1  
$EndComp
$Comp
L #library:SW_Push SW16
U 1 1 6014D224
P 8150 2800
F 0 "SW16" H 8150 3085 50  0000 C CNN
F 1 "SW_Push" H 8150 2994 50  0000 C CNN
F 2 "#footprint:CherryMX" H 8150 3000 50  0001 C CNN
F 3 "" H 8150 3000 50  0001 C CNN
	1    8150 2800
	1    0    0    -1  
$EndComp
Wire Wire Line
	8350 1300 8350 1400
Connection ~ 8350 1400
Wire Wire Line
	8350 1400 8350 1500
Connection ~ 8350 1500
Wire Wire Line
	8350 1500 8350 1600
Connection ~ 8350 1600
Wire Wire Line
	8350 1600 8350 1700
Connection ~ 8350 1700
Wire Wire Line
	8350 1700 8350 1800
Connection ~ 8350 1800
Wire Wire Line
	8350 1800 8350 1900
Connection ~ 8350 1900
Wire Wire Line
	8350 1900 8350 2000
Connection ~ 8350 2000
Wire Wire Line
	8350 2000 8350 2100
Connection ~ 8350 2100
Wire Wire Line
	8350 2100 8350 2200
Connection ~ 8350 2200
Wire Wire Line
	8350 2200 8350 2300
Connection ~ 8350 2300
Wire Wire Line
	8350 2300 8350 2400
Connection ~ 8350 2400
Wire Wire Line
	8350 2400 8350 2500
Connection ~ 8350 2500
Wire Wire Line
	8350 2500 8350 2600
Connection ~ 8350 2600
Wire Wire Line
	8350 2600 8350 2700
Connection ~ 8350 2700
Wire Wire Line
	8350 2700 8350 2800
Wire Wire Line
	8350 2800 8350 2900
Connection ~ 8350 2800
Text GLabel 8600 1600 0    50   Input ~ 0
4
Text GLabel 8600 2400 0    50   Input ~ 0
12
Text GLabel 8600 2500 0    50   Input ~ 0
13
$Comp
L #library:SW_Push SW17
U 1 1 6014F2BC
P 8800 1600
F 0 "SW17" H 8800 1885 50  0000 C CNN
F 1 "SW_Push" H 8800 1794 50  0000 C CNN
F 2 "#footprint:CherryMX" H 8800 1800 50  0001 C CNN
F 3 "" H 8800 1800 50  0001 C CNN
	1    8800 1600
	1    0    0    -1  
$EndComp
$Comp
L #library:SW_Push SW18
U 1 1 6014F35E
P 8800 2400
F 0 "SW18" H 8800 2685 50  0000 C CNN
F 1 "SW_Push" H 8800 2594 50  0000 C CNN
F 2 "#footprint:CherryMX" H 8800 2600 50  0001 C CNN
F 3 "" H 8800 2600 50  0001 C CNN
	1    8800 2400
	1    0    0    -1  
$EndComp
$Comp
L #library:SW_Push SW19
U 1 1 6014F3EE
P 8800 2500
F 0 "SW19" H 8800 2785 50  0000 C CNN
F 1 "SW_Push" H 8800 2694 50  0000 C CNN
F 2 "#footprint:CherryMX" H 8800 2700 50  0001 C CNN
F 3 "" H 8800 2700 50  0001 C CNN
	1    8800 2500
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR07
U 1 1 6014F468
P 9000 2900
F 0 "#PWR07" H 9000 2650 50  0001 C CNN
F 1 "GND" H 9000 2750 50  0000 C CNN
F 2 "" H 9000 2900 50  0001 C CNN
F 3 "" H 9000 2900 50  0001 C CNN
	1    9000 2900
	-1   0    0    -1  
$EndComp
Wire Wire Line
	9000 1600 9000 2400
Connection ~ 9000 2400
Wire Wire Line
	9000 2400 9000 2500
Connection ~ 9000 2500
Wire Wire Line
	9000 2500 9000 2700
$Comp
L #library:Rotary_Encoder_Switch SW21
U 1 1 6057597A
P 9850 2150
F 0 "SW21" H 9850 2517 50  0000 C CNN
F 1 "Rotary_Encoder_Switch" H 9850 2426 50  0000 C CNN
F 2 "#footprint:RotaryEncoder_Alps_EC11E-Switch_Vertical_H20mm_rev2" H 9700 2310 50  0001 C CNN
F 3 "" H 9850 2410 50  0001 C CNN
	1    9850 2150
	1    0    0    -1  
$EndComp
Text GLabel 10150 2250 2    50   Input ~ 0
1
$Comp
L power:GND #PWR06
U 1 1 605767B6
P 10300 2900
F 0 "#PWR06" H 10300 2650 50  0001 C CNN
F 1 "GND" H 10300 2750 50  0000 C CNN
F 2 "" H 10300 2900 50  0001 C CNN
F 3 "" H 10300 2900 50  0001 C CNN
	1    10300 2900
	-1   0    0    -1  
$EndComp
Text GLabel 2200 1100 0    50   Input ~ 0
A
Text GLabel 2200 1200 0    50   Input ~ 0
B
Text GLabel 9550 2050 0    50   Input ~ 0
A
Text GLabel 9550 2250 0    50   Input ~ 0
B
Wire Wire Line
	9550 2150 9400 2150
Wire Wire Line
	9400 2150 9400 2900
$Comp
L power:GND #PWR04
U 1 1 6057751F
P 9400 2900
F 0 "#PWR04" H 9400 2650 50  0001 C CNN
F 1 "GND" H 9400 2750 50  0000 C CNN
F 2 "" H 9400 2900 50  0001 C CNN
F 3 "" H 9400 2900 50  0001 C CNN
	1    9400 2900
	-1   0    0    -1  
$EndComp
Wire Wire Line
	10300 2900 10300 2050
Wire Wire Line
	10300 2050 10150 2050
Text GLabel 3600 1300 2    50   Input ~ 0
RST
Text GLabel 3750 2600 0    50   Input ~ 0
RST
Text GLabel 4150 2600 2    50   Input ~ 0
GND
$Comp
L #library:SW_Push SW22
U 1 1 6071C4AA
P 3950 2600
F 0 "SW22" H 3950 2885 50  0000 C CNN
F 1 "SW_Push" H 3950 2794 50  0000 C CNN
F 2 "#footprint:ResetSW" H 3950 2800 50  0001 C CNN
F 3 "" H 3950 2800 50  0001 C CNN
	1    3950 2600
	1    0    0    -1  
$EndComp
Text GLabel 8600 2700 0    50   Input ~ 0
15
$Comp
L #library:SW_Push SW20
U 1 1 6076D8BC
P 8800 2700
F 0 "SW20" H 8800 2985 50  0000 C CNN
F 1 "SW_Push" H 8800 2894 50  0000 C CNN
F 2 "#footprint:CherryMX" H 8800 2900 50  0001 C CNN
F 3 "" H 8800 2900 50  0001 C CNN
	1    8800 2700
	1    0    0    -1  
$EndComp
Connection ~ 9000 2700
Wire Wire Line
	9000 2700 9000 2900
$EndSCHEMATC
