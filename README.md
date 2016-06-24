# ternary-processor
A ternary accumulator machine, simulated in C.
Based on the paper by Satish Narkhede, Gajanan Kharate, and Bharat Chaudhari:
http://research.ijcaonline.org/volume83/number16/pxc3892980.pdf - the only proposed instruction set I could find for a ternary machine.

In most computers, the binary numeral system is used to represent information.
This means that all data is represented using strings of 0s and 1s.
On a circuit, a 0 would be a low voltage - perhaps 0 volts - while a 1 would be a high voltage - maybe 5 volts.

In a ternary computer (of which few exist), the basic unit of information is a trit.
This means that, instead of being represented as strings of 0s and 1s, data is represented using three different values.
In the standard ternary numeral system (see https://en.wikipedia.org/wiki/Ternary_numeral_system), information is stored as 0s, 1s, and 2s.
On a circuit, this might mean that 0 is a 0 volt signal, 1 is a 2.5 volt signal, and 2 is a 5 volt signal.

However, the processor implemented in this repository borrows from ternary logic.
While data is represented in the usual way, using 0s, 1s, and 2s, the processor treates the standalone trits as being from 0, Z, or 1.
The 0 and 1 can be thought of as false and true as in a binary machine. The Z can be thought of as unknown.
This is not without precedent - the SQL database language also uses the False, Unknown, True, where unknown may be used to handle missing data.
While the Z in the ternary processor can represent other things (no operation instead of a memory read/write), the fundamental idea is the same - instead of needing a binary decision, there is a third choice.
