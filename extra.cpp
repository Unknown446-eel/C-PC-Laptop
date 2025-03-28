#include <iostream>
#include "extra.h"

// prompts and reads a user input
int readNumber()
{
	std::cout << "Enter an integer: ";
	int x;
	std::cin >> x;
	return x;
}

// write number to screen
void writeAnswer(int x)
{
	std::cout << "Sum of two numbers is: " << x << '\n';
}
