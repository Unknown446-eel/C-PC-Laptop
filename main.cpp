#include <iostream>
#include "extra.h"
//g++ -std=c++14 -o main main.cpp extra.h extra.cpp
// ./main

int main()
{
	//getting height and datapoints from user
	double height{userinput(1)}; 
	double datapoints{userinput(0)};

	//calculating the time it takes ball to height the ground
	double time{};
	time = freefalltime(height);
	printfallheights(height= height, time = time, datapoints = datapoints );

	return 0;
}
