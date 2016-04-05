#include "Multiplier.h"

#include <math.h>

using namespace std;


Multiplier::Multiplier(const char exp) {
	exponent = exp;
}

unsigned long long Multiplier::getMultiplier() {
	return pow(10, exponent) + .5; // Add .5 to fix under by 1 truncate bug
}

void Multiplier::setExponent(const char exp) {
	exponent = exp;
}