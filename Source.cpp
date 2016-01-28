/*
TODO: update tthis
Solves Ohm's law
I=V/R or current = voltage / resistance
*/

/**
Need to add unit test to resistor
*/


#include <iostream>
#include <string>
#include "Resistor.h"

using namespace std;

int main() {
	string numBands, multiplier, tolerance, bandNum0, bandNum1; // Input strings of variable;

	// Get input
	// Todo: add cout
	/**
	enter numBands

			enter multiplier
			enter tolerance,
			enter band num - x
			..
			your amps is:
			**/
	cin >> numBands;
	cin >> multiplier;
	cin >> tolerance;
	cin >> bandNum0;
	cin >> bandNum1;

	// Create resistor object
	Resistor r; //Resistor r = new Resistor(); // TODO: C++ heaap vs stack
	r.setNumBands(numBands);
	r.setMultiplier(multiplier);
	r.setTolerence(tolerance);
	r.setBandNum0(bandNum0);
	r.setBandNum1(bandNum1);

	cout << r.toString();



	system("pause");
	return 1;
}