#include "Multiplier.h"
#include "BigNum.h"


Multiplier::Multiplier(const char exp) {
	setExponent(exp);
}

//Multiplier::Multiplier(const BigNum &multiplier) {
	//assert(mulplier.mod(10) != 0); // TODO: Make this an overloaded operator
	//exponent = Math.log10(mulplier);
//}

BigNum Multiplier::getMultiplier() {
	// Todo: Implement this;
	BigNum bn("100");
}

void Multiplier::setExponent(const char exp) {
	exponent = exp;
}

char Multiplier::getExponent() {
	return exponent;
}