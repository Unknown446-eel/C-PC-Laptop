#ifndef	EXTRA_H
#define	EXTRA_H

#define G 9.80665

//functions that returns users input, if 1 it asks for height else it ask for the number of height valeus to calculate
double userinput(int x);

//functions that takes in times and returns how long it takes to hit the ground
double freefalltime(double height);

// functions that takes in the intial height, time, datapoints and prints out all of the requested height values
void printfallheights(double height, double time, double datapoints);

#endif
