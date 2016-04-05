#ifndef _Multiplier_H
#define _Multiplier_H

// TODO: consider removing this class due to unnecessary complexity compared to small memory benifit.
class Multiplier {
public:
	Multiplier(const char exp = 0);
	unsigned long long getMultiplier();
	void setExponent(const char exp);
private:
	char exponent; // Save the exponent as a char instead of saving the entire mutiplier val to save memory space
};

#endif 