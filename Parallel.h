#ifndef _PARALLEL_H
#define _PARALLEL_H

#include "Resistor.h"

// Calculates the resistance of resistors in parallel
class Parallel {
public:
	unsigned long long getResistance(Resistor &r1, Resistor &r2);
private:
};
#endif