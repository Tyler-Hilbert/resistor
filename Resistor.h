#ifndef _RESISTOR_H
#define _RESISTOR_H

#include <string>
#include <vector>

using namespace std;


class Resistor {
public:
	enum COLOR { Black, Brown, Red, Orange, Yellow, Green, Blue, Violet, Grey, White, Gold, Silver };

	Resistor(vector<COLOR> &b);

	unsigned long long getResistance();
	void setResistorValues(vector<COLOR> &b);

	string toString();
private:
	string tolerence;
	unsigned long long resistance;

	void parseTolerence(Resistor::COLOR c);
};

#endif