#ifndef _Series_H
#define _Series_H

#include <vector>
#include <string>
#include "Resistor.h"

using namespace std;

class Series {
public:
	//string toString();
	unsigned long long getResistance(Resistor &r1, Resistor &r2);
private:
};

#endif 