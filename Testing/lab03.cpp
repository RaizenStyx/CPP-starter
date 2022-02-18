// Lab03 from Java in C++ 
#include <iostream>

int main () {
	int Cel;

	std::cout << "Enter Degrees in Celsius: \n";
	std::cin >> Cel;

	int Fahren = (Cel*9/5) + 32;
	std::cout << Cel << " degrees Celsius is " << Fahren << " degrees Fahrenheit";
	
	return 0;
}