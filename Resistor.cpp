#include "Resistor.h"

string Resistor::getResistance() {
	string equation = "(" + getBandNum0() + getBandNum1() + ")*" + getMultiplier();
	return equation;
}
string Resistor::getNumBands() {
	return numBands;
}
string Resistor::getMultiplier() {
	return multiplier;
}
string Resistor::getTolerence() {
	return tolerence;
}
string Resistor::getBandNum0() {
	return bandNum0;
}
string Resistor::getBandNum1() {
	return bandNum1;
}
void Resistor::setNumBands(const string &n) {
	numBands = n;
}
void Resistor::setMultiplier(const string &m) {
	multiplier = m;
}
void Resistor::setTolerence(const string &t) {
	tolerence = t;
}
void Resistor::setBandNum0(const string &b) {
	bandNum0 = b;
}
void Resistor::setBandNum1(const string &b) {
	bandNum1 = b;
}