#include "Parallel.h"

unsigned long long Parallel::getResistance(Resistor &r1, Resistor &r2) {
	return 1 / (1 / r1.getResistance() + 1 / r2.getResistance());
}