#ifndef _Series_H
#define _Series_H

#include "Resistor.h"

using namespace std;

// Calculates the resistance of resistors in series
class Series {
public:
	unsigned long long getResistance(Resistor &r1, Resistor &r2);
private:
};

#endif 