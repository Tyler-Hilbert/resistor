DEPS = Parallel.cpp Resistor.cpp Series.cpp Source.cpp
TEST = Parallel.cpp Resistor.cpp Series.cpp Test.cpp

all: resistor test

resistor: $(DEPS)
	g++ -std=c++11 -o resistor $(DEPS) -I. -g
test: $(TEST)
	g++ -std=c++11 -o test $(TEST) -I. -g
