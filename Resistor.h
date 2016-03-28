#ifndef _RESISTOR_H
#define _RESISTOR_H

#include <string>
#include <vector>
#include "Multiplier.h"

using namespace std;


class Resistor {
public:
	static const enum COLOR { Black, Brown, Red, Orange, Yellow, Green, Blue, Violet, Grey, White, Gold, Silver };

	Resistor(vector<COLOR> &b);

	unsigned long long getResistance();
	Multiplier getMultiplier();
	string getTolerence();
	void setMultiplier(const Multiplier &m);
	void setTolerence(const string &t);
	void setResistance(vector<COLOR> bands);
	void setResistance(const unsigned long long &r);
	void setBaseValue(const unsigned short int &v);

	string toString();
private:
	Multiplier multiplier;
	string tolerence;
	unsigned int baseValue;

	void parseTolerence(Resistor::COLOR c);
};

#endif