#ifndef _Series_H
#define _Series_H

#include "Resistor.h"
#include <vector>

using namespace std;

// Calculates the resistance of resistors in series
class Series {
public:
	unsigned long long getResistance(vector<Resistor *> &resistors);
private:
};

#endif 