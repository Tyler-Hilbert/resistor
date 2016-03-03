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
	string bn = "1";
	for (int i = 0; i < exponent; i++) {
		bn.append("0");
	}
	
	if (exponent < 0) {
		string prefix = ".";
		for (int i = 1; i < abs(exponent); i++) {
			prefix.append("0");
		}
		bn = prefix + bn;
	}
	return BigNum(bn);
}

void Multiplier::setExponent(const char exp) {
	exponent = exp;
}

char Multiplier::getExponent() {
	return exponent;
}