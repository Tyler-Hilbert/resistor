#include "Resistor.h"

#include <string>
#include <vector>
#include "BigNum.h"
#include "Multiplier.h"

BigNum Resistor::getResistance(){
	// TOdo: implement overloaded operator here
	//return multiplier * baseValue;
	return BigNum("100");
}

Multiplier Resistor::getMultiplier() {
	return multiplier;
}

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