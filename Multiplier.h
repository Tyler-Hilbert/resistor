#ifndef _Multiplier_H
#define _Multiplier_H

#include "BigNum.h"

using namespace std;

class Multiplier {
public:
	Multiplier(const char exp);
	//Multiplier(const BigNum &multiplier); todo: Implement this
	BigNum getMultiplier();
	char getExponent();
	void setExponent(const char exp);
private:
	char exponent;
};

#endif 