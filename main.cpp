#include <iostream>
#include "extra.h"
//g++ -std=c++14 -o main main.cpp extra.h extra.cpp
// ./main

int main()
{
	int num1{readNumber()}, num2{readNumber()};
	
	writeAnswer(num1 + num2);

	return 0;
}
