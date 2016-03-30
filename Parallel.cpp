#include "Parallel.h"

// Solves equation r = 1/(1/r1 + 1/r2)
unsigned long long Parallel::getResistance(Resistor &r1, Resistor &r2) {
	return 1.0 / (1.0 / r1.getResistance() + 1.0 / r2.getResistance()) + .5; // Add .5 to fix rounding on truncate.
}