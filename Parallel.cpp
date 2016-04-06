#include "Parallel.h"

#include <iterator>

// Solves equation r = 1/(1/r1 + 1/r2 + ...)
unsigned long long Parallel::getResistance(vector<Resistor *> &resistors) {
	double sum = 0.0; // (1/r1 + 1/r2 + ..);
	vector<Resistor*>::iterator iter;
    for(iter = resistors.begin(); iter != resistors.end(); iter++) {
         sum += 1.0 / (*iter)->getResistance();
    }
	return 1.0 / sum + .5;
}