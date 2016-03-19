#ifndef _Series_H
#define _Series_H

#include <vector>
#include <string>
#include "BigNum.h"
#include "Resistor.h"

using namespace std;

class Series {
public:
	string toString();
	BigNum getResistance(Resistor &r1, Resistor &r2);
private:
};

#endif 