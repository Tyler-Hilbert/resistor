#include <iostream>
#include <string>
#include <vector>
#include "Resistor.h"
#include "Multiplier.h"
#include "Series.h"
#include "Parallel.h"

using namespace std;

int main() {
	vector<Resistor::COLOR> bands0 = { Resistor::Red, Resistor::Red, Resistor::Brown, Resistor::Brown };
	Resistor r0(bands0);
	cout << "Resistor 0: " << r0.toString() << "\n";

	vector<Resistor::COLOR> bands1 = { Resistor::Orange, Resistor::Red, Resistor::Green, Resistor::Yellow, Resistor::Green };
	Resistor r1(bands1);
	cout << "Resistor 1: " << r1.toString() << "\n";

	Series s;
	cout << "Resistance in series: " << to_string(s.getResistance(r0, r1)) << "ohms\n";

	Parallel p;
	cout << "Resistance in parallel: " << to_string(p.getResistance(r0, r1)) << "ohms\n";

	// Todo: Get input from iostream
	
	
	//Todo: add this to unit test
	//Multiplier m0(0);
	//Multiplier m1(1);
	//Multiplier m2(-1);
	//Multiplier m3(3);
	//Multiplier m4(-2);
	//BigNum bn0 = m0.getMultiplier();
	//BigNum bn1 = m1.getMultiplier();
	//BigNum bn2 = m2.getMultiplier();
	//BigNum bn3 = m3.getMultiplier();
	//BigNum bn4 = m4.getMultiplier();

	//cout << "BN0 EXP0:" << bn0.toString() << "\nBN1 Exp1:" << bn1.toString() << "\nexp-1BN2:" << bn2.toString() << "\nBN3 exp3:" << bn3.toString();
	//cout << bn4.toString();
	
	
	system("pause");
	return 1;
}