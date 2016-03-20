#ifndef _PARALLEL_H
#define _PARALLEL_H

#include <string>
#include "Resistor.h"
#include "BigNum.h"

class Parallel {
public:
	string toString();
	BigNum getResistance(Resistor &r1, Resistor &r2);
private:
};
#endif