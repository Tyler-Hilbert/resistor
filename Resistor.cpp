#include "Resistor.h"

#include <math.h>

Resistor::Resistor(vector<COLOR> &b) {
	setResistorValues(b);
}

// Sets the tolerence
void Resistor::parseTolerence(Resistor::COLOR c) {
	switch (c) {
	case Brown:
		tolerence = "+-1%";
		break;
	case Red:
		tolerence = "+-2%";
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

// Sets the values for the resistor via band colors
void Resistor::setResistorValues(vector<COLOR> &b) {
	if (b.size() == 4) {
		unsigned int baseValue = b.at(0) * 10 + b.at(1);
		// TODO: Add testing for invalid multiplier here
		unsigned long long multiplier = pow(10, b.at(2)) + .5;
		resistance = baseValue * multiplier;
		parseTolerence(b.at(3));
	} else if (b.size() == 5) {
		unsigned int baseValue = b.at(0) * 100 + b.at(1) * 10 + b.at(2);
		// TODO: Add testing for invalid multiplier here
		unsigned long long multiplier = pow(10, b.at(3)) + .5;
		resistance = baseValue * multiplier;
		parseTolerence(b.at(4));
	}
}

unsigned long long Resistor::getResistance(){
	return resistance;
}

string Resistor::toString() {
	return to_string(resistance) + "ohms" + tolerence;
}