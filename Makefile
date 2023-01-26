CXX=clang++
FLAGS = -std=c++20 -Wall -O3

.PHONY:main functions.o

all: main

main: functions.o main.cpp
	$(CXX) $(FLAGS) main.cpp functions.o -o main

test: functions.o test.cpp catch.hpp
	$(CXX) $(FLAGS) test.cpp functions.o -o test && ./test

functions.o:
	$(CXX) $(FLAGS) -c functions_to_implement.cpp -o functions.o

clean:
	rm functions.o main test