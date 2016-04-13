objects = Parallel.cpp Resistor.cpp Series.cpp Source.cpp
resistor: $(objects)
	g++ -std=c++11 -o resistor $(objects) -I. -g