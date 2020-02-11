CXX = g++
CXXFLAGS = -std=c++17 -Wall

all: main

clean: 
rm functions_to_implement.o main


main: functions_to_implement.o main.cpp 
  $(CXX) $(CXXFLAGS) functions_to_implement.o main.cpp -o test 


functions_to_implement.o: functions_to_implement.cpp
  $(CXX) $(CXXFLAGS) -c functions_to_implement.cpp
