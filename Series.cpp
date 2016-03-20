#include "Series.h"

BigNum Series::getResistance(Resistor &r1, Resistor &r2) {
	BigNum num(r1.getResistance().add(r2.getResistance()).toString());
	return num;
}