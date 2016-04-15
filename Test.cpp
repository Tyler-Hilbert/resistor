#include <iostream>
#include <string>
#include <vector>
#include <cassert>
#include "Resistor.h"
#include "Series.h"
#include "Parallel.h"


using namespace std;

int main() {
	cout << "Running test\n";
    
    vector<Resistor::COLOR> bands0 = { Resistor::Red, Resistor::Red, Resistor::Brown, Resistor::Brown };
    Resistor r0(bands0);
    assert (r0.toString().compare("220ohms+-1%") == 0);

    vector<Resistor::COLOR> bands1 = { Resistor::Yellow, Resistor::Black, Resistor::Black, Resistor::Black, Resistor::Red };
    Resistor r1(bands1);
    assert (r1.toString().compare("400ohms+-2%") == 0);

    // TODO: Add parallel and series unit test here........

	cout << "Pass\n";
    return 1;
}



