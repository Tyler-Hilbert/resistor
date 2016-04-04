#include "Multiplier.h"

#include <string>
#include <math.h>

using namespace std;


Multiplier::Multiplier(const char exp) {
	setExponent(exp);
}

//Multiplier::Multiplier(const BigNum &multiplier) {
	//assert(mulplier.mod(10) != 0); // TODO: Make this an overloaded operator
	//exponent = Math.log10(mulplier);
//}

unsigned long long Multiplier::getMultiplier() {
	return pow(10, exponent) + .5; // Add .5 to fix under by 1 truncate bug
}

void Multiplier::setExponent(const char exp) {
	exponent = exp;
}

char Multiplier::getExponent() {
	return exponent;
}