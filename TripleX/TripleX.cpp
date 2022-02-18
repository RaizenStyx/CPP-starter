#include <iostream>
#include <ctime>

// Basic c++ game file thing. Can come back and modify later or reveiw. 

void Introduction(int Diff)
{ // starting writing like this for UnReal
    // Print Welcome Messages
    std::cout << "\n\nYou are a secret agent that isnt very sneaky getting into a level " << Diff; // intro into game. EDIT LATER
    std::cout << " safe!!!\nEnter the correct the code on your belt to break into the safe without breaking a sweat. Lets get that money!!!\n"; // EDIT AGAIN

}

bool PlayGame(int Diff2) 
{
    Introduction(Diff2);

    int Code1 = rand() % Diff2 + Diff2;
    int Code2 = rand() % Diff2 + Diff2;
    int Code3 = rand() % Diff2 + Diff2;
    int Guess1, Guess2, Guess3;
    
    int CodeSum = Code1+Code2+Code3;
    int CodeProduct = Code1*Code2*Code3;

    // Print CodeSum and CodeProduct
    std::cout << std::endl; // the endl function works like \n 
    std::cout << "+ There are 3 numbers in the code\n";
    std::cout << "+ There code adds up to: "<< CodeSum << std::endl;
    std::cout << "+ The codes multipy to give: " << CodeProduct << std::endl;// the endl function works like this too

    // Store Player Guess and gets GuessSum and GuessProduct
    std::cin >> Guess1 >> Guess2 >> Guess3;
    int GuessSum = Guess1+Guess2+Guess3;
    int GuessProduct = Guess1+Guess2+Guess3;

    // Logic check to see if guess is answer 
    if (GuessSum == CodeSum)
    {
        std::cout << "\nGet that money and run to the next safe!!!\n";
        return true;
    } else {
        std::cout << "\nI suggest you try again before the cops get here!!!\n";
        return false;
    }

}

int main() 
{
    srand(time(NULL));
    int LevelDiff = 1;
    int const MaxLevel = 10;
   
    while(LevelDiff <= MaxLevel)  // Loop game until all the levels are complete
    {

        bool bLevelComplete = PlayGame(LevelDiff);
        std::cin.clear();
        std::cin.ignore();
        
        if (bLevelComplete)
        {
            ++LevelDiff;
        }
    }
    std::cout << "Awesome thats all the money!!! Now get in the get away car and bring me my money!!!";
    return 0;
}