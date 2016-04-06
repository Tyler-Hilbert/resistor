#include "Series.h"
#include <iterator> 

unsigned long long Series::getResistance(vector<Resistor *> &resistors) {
	unsigned long long resistance = 0;
	vector<Resistor*>::iterator iter;
    for(iter = resistors.begin(); iter != resistors.end(); iter++) {
         resistance += (*iter)->getResistance();
    }
	return resistance;
}