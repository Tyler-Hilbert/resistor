#ifndef _PARALLEL_H
#define _PARALLEL_H

#include "Resistor.h"
#include <vector>

// Calculates the resistance of resistors in parallel
class Parallel {
public:
	unsigned long long getResistance(vector<Resistor *> &resistors);
private:
};
#endif