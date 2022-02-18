// Lab08 from Java in C++
#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>
#include <cmath>

int main () {

    std::cout << "Area of polygon with user num of sides and user input of length :\n ";

	int sideNum;
    double length;

	std::cout << "Enter number of Sides: ";
	std::cin >> sideNum;

    std::cout << "Enter length of Side: ";
	std::cin >> length;

	double result = (double)(sideNum) * pow(length, 2) / (4 * tan(M_PI/(double)(sideNum))) ;

	std::cout << "The area of a Polygon with " << sideNum << " sides and the length of each side being " << length << " is " << (float)(result);
	
	return 0;
}