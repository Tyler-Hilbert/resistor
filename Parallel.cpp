#include "Parallel.h"


BigNum Parallel::getResistance(Resistor &r1, Resistor &r2) {
	// TODO: Improve formatting of this
	BigNum one("1");
	BigNum bottom(
		one.divide(r1.getResistance())
		.add(
		one.divide(r2.getResistance()))
		.toString());
	BigNum resistance (one.divide(bottom).toString());
	return resistance;
}