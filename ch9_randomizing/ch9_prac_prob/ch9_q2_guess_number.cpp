#include <cstdlib>
#include <ctime>
#include <iostream>
#include <cmath>

int randRange(int low, int high) {
    // we get a random number, get it to be between 0 and the number of values in our range, then add the lowest possible value.
    return rand() % (high - low + 1) + low;
    // need to add 1 to "high - low", to maintain the total count of values in our range. need to add low to raise the desired range from 0 - range to desired low to desired high.
}

int main() {
    srand(time(nullptr));
    // pick a random number between 1 and 100
    int pick_number = randRange(1, 100);
    std::cout << "The pick random number is: (Assuming the player cannot see): " << pick_number << std::endl;
    // Player guessing turn
    int guess_number = 1;
    while (guess_number > 0)
    {
        std::cout << "Please input your guessed number: \n";
        std::cin >> guess_number;
        if (guess_number == pick_number)
        {
            std::cout << "Congrtulations! You hit the spot! \n";
            break;
        }
        else if (guess_number >= 10*pick_number)
        {
            std::cout << "You guess is too high. \n";
            continue;
        }
        else if (guess_number <= round(pick_number/10))
        {
            
            std::cout << "You guess is too low. \n";
            continue;
        }
        else {
            if (guess_number > pick_number)
            {
                std::cout << "Still High, keep going, or press 0 to exit.! \n";
            }
            else{
                std::cout << "Still low, keep going, or press 0 to exit.. \n";
            }
            continue;
        } 
    }
    return 0;
}