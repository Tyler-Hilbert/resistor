#include "Resistor.h"

#include <string>
#include <vector>
#include "BigNum.h"
#include "Multiplier.h"


Resistor::Resistor(vector<COLOR> &b) {
	if (b.size() == 4) {
		tolerence = "+/-x%"; // TODO: Set tolerence parsing
		baseValue = b.at(0) * 10 + b.at(1);
		// This needs to be switched to a constructor
		multiplier.setExponent(b.at(2)); // TODO: Adjust and test for for -1,-2
	} else if (b.size() == 5) {
		tolerence = "+/-x%"; // ToDO: Set tolerance parsing
		baseValue = b.at(0) * 100 + b.at(1) * 10 + b.at(2);
		multiplier.setExponent(b.at(3));
	}
	// TODO: convert band color to correct resistor values
}

BigNum Resistor::getResistance(){
	// TOdo: implement overloaded operator here
	BigNum bnBV(to_string(baseValue)); // Big Number base value
	return multiplier.getMultiplier().mult(bnBV);
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