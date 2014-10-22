// A simple program that computes the square root of a number
#include <iostream>
#include <stdlib.h>
#include <math.h>

#include "mathLibs/SimpleFunctions.h"
#include "mathLibs/AdvancedFunctions.h"

int main()
{
	double inputValue = 2;

	double sumValue = mysum(inputValue, inputValue);
	double sqrtValue = mysqrt(inputValue);

	std::cout << "The sum of " << inputValue << " and " << inputValue << " is " << sumValue << std::endl;
	std::cout << "The square root of " << inputValue << " is " << sqrtValue << std::endl;

	getchar();
	return 0;
}
