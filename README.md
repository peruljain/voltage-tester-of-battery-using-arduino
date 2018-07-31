# voltage-tester-of-battery-using-arduino
Application - A device able to determine voltage of battery/cell, this will help to get info about battery life and it's usability.

Component required – Arduino UNO, Jumper wires, some high resistors,16*2 LCD Module.

image of lcd module 16*2

![alt text](https://github.com/nikarora1111/voltage-tester-of-battery-using-arduino/blob/master/lcd%20module.JPG)

LCD Module - a LCD module consist of 16 pins every pin is used for specific purpose.

| pin number | Pin Name | Description |
|------------|----------|-------------|
|1|Vss|ground pin of LCD|
|2|Vdd|supply voltage pi of LCD|
|3|VE|decide to conntrast lcd|
|4|RS|Register select pin|
|5|R/w| tells about reading or writing data|
|6|Enable|used for data acknowledgement|
|7-14|data pin|pins used for send data to LCD|
|15|led positive|backlight lcd positive terminal|
|16|led negative|backlight lcd negative terminal|

## R/w pin - grounded for writing data and +5 voltage for writing data
## Data pins 0 to 7 forms a 8-bit data line.
## for sending 4 bit data pins 4,5,6,7 will be used.

Arduino can be used to make a device capable of measuring the voltage of a given battery. Arduino Uno measures voltage difference, so two of the Analog input pins are  to be used. It can measure a maximum of 5 volt and since one unit of measurement is equivalent to 5/1024 so voltage difference will be reading*5/1024. So we can know the voltage  of the battery if the voltage is less than 5 volts. For measuring voltages of batteries above 5 volts, resistors may be used.     Increasing the range of voltage tester:  For this purpose, resistors of high resistance(each of same resistance) may be used.  Resistances should be high enough to ensure that current through the circuits is in mill amperes.  Resistances should be equal so as to increase the accuracy of the result.

circuit diagram
![alt text](https://github.com/nikarora1111/voltage-tester-of-battery-using-arduino/blob/master/circuit%20diagram.JPG)

### using 4 resistor increase it's range 20  v from 5v because voltage drop became E/4 on each resistor (all resistance are nearly equal).

#### contributors
[Nikhil arora](https://github.com/nikarora1111)

[Perul Jain](https://github.com/peruljain)
