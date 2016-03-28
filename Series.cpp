#include "Series.h"

unsigned long long Series::getResistance(Resistor &r1, Resistor &r2) {
	return r1.getResistance() + r2.getResistance();
}