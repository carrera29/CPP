CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -Werror

all: programa

programa: main.o ClapTrap.o
	$(CXX) $(CXXFLAGS) main.o ClapTrap.o -o programa

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

ClapTrap.o: ClapTrap.cpp
	$(CXX) $(CXXFLAGS) -c ClapTrap.cpp

clean:
	rm -rf *.o programa
