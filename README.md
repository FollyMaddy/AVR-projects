# AVR-projects

For now, only Funcard experiments.

# Projects for old Funcard 
# (smartcard with atmel at90s8515)

These programs are distributed in the hope that it will be useful,

but WITHOUT ANY WARRANTY. Use it on your own risk.

(Done on raspberry pi 3 with raspbian stretch)

See for more info on :

http://www.tldp.org/HOWTO/Avr-Microcontrollers-in-Linux-Howto/x207.html

https://blog.podkalicki.com/how-to-compile-and-burn-the-code-to-avr-chip-on-linuxmacosxwindows/

http://www.avr-tutorials.com/digital/digital-input-output-c-programming-atmel-avr-8-bits-microcontrollers

Install to built the programs :

sudo apt-get install binutils gcc-avr avr-libc

Made a c textfile in /home/pi/Documents/gcc-avr-projects/ledblink_funcard_pb6.c

Then compiled it with (Don't know what all the options meat, yet. But it works) :

(c->bin->hex)

pi@raspberrypi:~ $ avr-gcc -Wall -Os -mmcu=at90s8515 -DF_CPU=8000000 -o /home/pi/Documents/gcc-avr-projects/ledblink_funcard_pb6.bin /home/pi/Documents/gcc-avr-projects/ledblink_funcard_pb6.c

pi@raspberrypi:~ $ avr-objcopy -j .text -j .data -O ihex /home/pi/Documents/gcc-avr-projects/ledblink_funcard_pb6.bin /home/pi/Documents/gcc-avr-projects/ledblink_funcard_pb6.hex

Led's or Buzzers can be commected directly to the smartcard if around 3.3 - 4 Volt is applied.

If you wat to do it safe then use a pull-up or a pull-down resistor !!!

Led's or Buzzers can be connected active-high or active-low.

If led's are connected low the burn brighter.

You can also put 2 led's on 1 port. (one led active high and  one led active low)

scematic connecting the led :

(pb6) --|>|-- (+) vcc (led active high)

(pb6) --|>|-- (-) gnd (led active low)

Clock schematic : 

see "phoenix interface" schematics and use 8 mhz crystal


