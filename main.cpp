#include <iostream>
#include "extra.h"
//g++ -std=c++14 -o main main.cpp extra.cpp
// ./main


int main()
{
	int x{ getInteger() };
	int y{ getInteger() };

	std::cout << x << " + " << y << " is " << x + y << '\n';
	return 0;
}