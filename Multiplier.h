#ifndef _Multiplier_H
#define _Multiplier_H


// TODO: consider removing this class due to unnecessary complexity compared to small memory benifit.
class Multiplier {
public:
	Multiplier(const char exp = 0);
	//Multiplier(const BigNum &multiplier); todo: Implement this
	unsigned long long getMultiplier();
	char getExponent();
	void setExponent(const char exp);
private:
	char exponent;
};

#endif 