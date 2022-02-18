// Lab06 from Java in C++ (Lab 7 was the switch statement)
#include <iostream>

int main () {

	double Score;

	std::cout << "Enter Score of Student: ";
	std::cin >> Score;

	if(Score > 100 || Score <0)
    {
        std::cout << "Invaild Input";
    } 
    else if (Score >= 90) 
    {
        std::cout <<  Score << " = A";
    } 
    else if (Score >=80)
    {
        std::cout << Score << " = B";
    } 
    else if (Score >= 70)
    {
         std::cout << Score << " = C";
    } 
    else if (Score >= 65)
    {
        std::cout << Score << " = D";
    } else 
    {
        std::cout << Score << " = F";
    }

	return 0;
}