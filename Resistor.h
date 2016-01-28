#ifndef _RESISTOR_H
#define _RESISTOR_H

#include <string>

using namespace std;

class Resistor {
public:
	string toString();

	// Sets and Gets
	string getNumBands();
	string getMultiplier();
	string getTolerence();
	string getBandNum0();
	string getBandNum1();
	void setNumBands(const string &n);
	void setMultiplier(const string &m);
	void setTolerence(const string &t);
	void setBandNum0(const string &b);
	void setBandNum1(const string &b);

private:
	string numBands;
	string multiplier;
	string tolerence;
	string bandNum0;
	string bandNum1;
};

#endif