#include "Resistor.h"

#include <string>
#include <vector>
#include "BigNum.h"
#include "Multiplier.h"


Resistor::Resistor(vector<COLOR> &b) {
	if (b.size() == 4) {
		tolerence = "+/-x%";
		baseValue = b.at(0) * 10 + b.at(1);
		// This needs to be switched to a constructor
		multiplier.setExponent(b.at(2)); // Adjust and test for for -1,-2
	}
	// TODO: convert band color to correct resistor values
}

BigNum Resistor::getResistance(){
	// TOdo: implement overloaded operator here
	return multiplier.getMultiplier().mult(baseValue);
}

//Multiplier Resistor::getMultiplier() {
	//return multiplier;
//}

string Resistor::getTolerence() {
	return tolerence;
}

void Resistor::setMultiplier(const Multiplier &m) {
	// TODO: implement copy construcotr for multiplier
	//multiplier(m);
}

void Resistor::setTolerence(const string &t) {
	tolerence.assign(t);
}

void Resistor::setResistance(vector<COLOR> bands) {
	// TODO: implement this
}

void Resistor::setResistance(const BigNum &r) {
	// Todo: implement this
}

void Resistor::setBaseValue(const unsigned short int &v) {
	baseValue = v;
}