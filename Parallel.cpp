#include "Parallel.h"

unsigned long long Parallel::getResistance(Resistor &r1, Resistor &r2) {
	return 1.0 / (1.0 / r1.getResistance() + 1.0 / r2.getResistance());
}