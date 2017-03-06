## BCD Switch Reader - ATmega328-based

Using most of the ports on an ATmega328, this reader reads 5 binary coded digital thumbwheel switches without multiplexing. The common terminal is tied to ground and the 0, 2, 4, and 8 pins of the BCD switch are tied to corresponding ports on the ATmega. Not sure this will work on an Arduino board because some of the pins are being used for the board itself (not accessible as far as I know).

