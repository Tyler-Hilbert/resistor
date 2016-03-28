#ifndef _PARALLEL_H
#define _PARALLEL_H

#include <string>
#include "Resistor.h"

class Parallel {
public:
	//string toString();
	unsigned long long getResistance(Resistor &r1, Resistor &r2);
private:
};
#endif