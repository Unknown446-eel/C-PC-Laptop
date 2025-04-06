#include <iostream>
#include <math.h>
#include<iomanip>
#include "extra.h"

// functions that returns users input, if 1 it asks for height else it ask for the number of height valeus to calculate
double userinput(int x)
{
	if (x == 1)
	{
		std::cout << "Enter the height of the tower in meters: ";
		double input{0};
		std::cin >> input;
		while(input <= 0 ){
			std::cout << "Invalid input try again \n";
			std::cin >> input;
		}
		return input;
	}
	else
	{
		std::cout << "Enter the number of height calculations: ";
		double input{0};
		std::cin >> input;
		while(input <= 0 ){
			std::cout << "Invalid input try again \n";
			std::cin >> input;
		}
		return input;
	}
}

// functions that takes in times and returns how long it takes to hit the ground
double freefalltime(double height)
{
	return sqrt(2*height/G);
}


// functions that takes in the intial height, time, datapoints and prints out all of the requested height values
void printfallheights(double height, double time, double datapoints){
	double ftime{0},timestep{0}, fheight{height};

	//calculating the time interval betweens prints outs
	timestep = time/floor(datapoints);

	std::cout << std::setprecision(5);
	for(int i =0;i < floor(datapoints) ;i++){
		fheight = height - G*ftime*ftime/2; // calculating the new height

		std::cout << "At " << ftime << " seconds, the ball is at height: " << fheight <<" meters \n";  // printing out time and height of ball

		ftime = ftime + timestep; //increasing time bases on the timestep
	}
	std::cout << "At " << ftime << " seconds, the ball is on the ground \n";
}
