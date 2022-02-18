// Lab04 from Java in C++  (Lab05 had user input for all varablies)
#include <iostream>

int main () {
	double v0 = 5.6;
    double v1 = 10.5;
    double time;

	std::cout << "Enter amount of time:";
	std::cin >> time;

	double result = (v1 - v0) / time;

	std::cout << "The accleration is " << result << " for a time of " << time;
	
	return 0;
}