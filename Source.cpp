#include <iostream>
#include <string>
#include <vector>
#include "Resistor.h"
#include "Series.h"
#include "Parallel.h"

using namespace std;

int main() {
	vector<Resistor::COLOR> bands0 = { Resistor::Red, Resistor::Red, Resistor::Brown, Resistor::Brown };
	Resistor r0(bands0);
	cout << "Resistor 0: " << r0.toString() << "\n";

    vector<Resistor::COLOR> bands1 = { Resistor::Yellow, Resistor::Black, Resistor::Black, Resistor::Black, Resistor::Red };
	Resistor r1(bands1);
	cout << "Resistor 1: " << r1.toString() << "\n";

	Resistor r2(bands0);
	cout << "Resistor 2: " << r2.toString() << "\n";

	vector<Resistor *> resistors = {&r0, &r1, &r2};
	Series s;
	cout << "Resistance in series: " << to_string(s.getResistance(resistors)) << "ohms\n";

	Parallel p;
	cout << "Resistance in parallel: " << to_string(p.getResistance(resistors)) << "ohms\n";
	
	return 1;
}