#ifndef _Multiplier_H
#define _Multiplier_H

#include "BigNum.h"

using namespace std;

class Multiplier {
public:
	Multiplier(const char exponent);
	Multiplier(const BigNum &multiplier);
	BigNum getMultiplier();
	char getExponent();
	void setExponent();
private:
	char exponent;
};

#endif 