DEPS = Parallel.cpp Resistor.cpp Series.cpp Source.cpp

resistor: $(DEPS)
	g++ -std=c++11 -o resistor $(DEPS) -I. -g
