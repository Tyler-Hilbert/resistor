#include "Resistor.h"

Resistor::Resistor(vector<COLOR> &b) {
	if (b.size() == 4) {
		baseValue = b.at(0) * 10 + b.at(1);
		// This needs to be switched to a constructor
		multiplier.setExponent(b.at(2)); // TODO: Adjust and test for for -1,-2
		parseTolerence(b.at(3));
	} else if (b.size() == 5) {
		baseValue = b.at(0) * 100 + b.at(1) * 10 + b.at(2);
		multiplier.setExponent(b.at(3));
		parseTolerence(b.at(4));
	}
}

// Sets the tolerence
void Resistor::parseTolerence(Resistor::COLOR c) {
	switch (c) {
	case Brown:
		tolerence = "+-1%";
		break;
	case Red:
		tolerence = "+-2%;";
		break;
	case Green:
		tolerence = "+-.5%";
		break;
	case Blue:
		tolerence = "+-.25%";
		break;
	case Violet:
		tolerence = "+-.1%";
		break;
	case Grey:
		tolerence = "+-.05%";
		break;
	case Gold:
		tolerence = "+-5%";
		break;
	case Silver:
		tolerence = "+-10%";
		break;
	default:
		tolerence = "+-%";
		break;
	}
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

string Resistor::toString() {
	return getResistance().toString() + "ohms" + tolerence;
}