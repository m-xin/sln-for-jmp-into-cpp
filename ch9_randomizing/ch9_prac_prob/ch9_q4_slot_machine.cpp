#include <cstdlib>
#include <ctime>
#include <iostream>

/*
here is the way, we design the slot machine:

we use a char type vector or array to store the symbols appeared in slot machine, such as '7', '-', '3', 'A' (as apple), 'B' (as banana) ..., their indices will be used as the randomizing targets, run three times to have three random indices, and then search the corresponding element.

If all three elements are same, 7-7-7 is the top to gain 1,000,000, times of bounus, 3-3-3 is the second, with 100,000 times, A-A-A gains 10,000 times, B-B-B gains 1,000 times, ---, gains 100 times, and mixtured, none.
*/

int randRange(int low, int high) {
    return rand() % (high - low + 1) + low;
}

void slotMachine(float coins) {
    if (coins == 0.0) {
        std::cout << "Thank you for playing the game, see you next time!" << std::endl;
        return;
    } else {
        char symbol[] = {'7', '-', '3', 'A', 'B'};
        char slot_1, slot_2, slot_3;

        srand(static_cast<unsigned int>(time(nullptr)));
        slot_1 = symbol[randRange(0, 4)];
        slot_2 = symbol[randRange(0, 4)];
        slot_3 = symbol[randRange(0, 4)];

        std::cout << "slot 1: " << slot_1 << std::endl;
        std::cout << "slot 2: " << slot_2 << std::endl;
        std::cout << "slot 3: " << slot_3 << std::endl;

        if (slot_1 == '7' && slot_1 == slot_2 && slot_1 == slot_3) {
            std::cout << "You win the top reward, your prize is: " << "$" << coins * 1000000.0 << '\n'
                      << std::endl;
        } else if (slot_1 == '3' && slot_1 == slot_2 && slot_1 == slot_3) {
            std::cout << "You win the 2nd place reward, your prize is: " << "$" << coins * 100000.0 << '\n'
                      << std::endl;
        } else if (slot_1 == 'A' && slot_1 == slot_2 && slot_1 == slot_3) {
            std::cout << "You win the 3rd place reward, your prize is: " << "$" << coins * 10000.0 << '\n'
                      << std::endl;
        } else if (slot_1 == 'B' && slot_1 == slot_2 && slot_1 == slot_3) {
            std::cout << "You win the 4th place reward, your prize is: " << "$" << coins * 1000.0 << '\n'
                      << std::endl;
        } else if (slot_1 == '-' && slot_1 == slot_2 && slot_1 == slot_3) {
            std::cout << "You win the 5th place reward, your prize is: " << "$" << coins * 100.0 << '\n'
                      << std::endl;
        } else {
            std::cout << "Uh-uh, no bonus this time, do you want to try one more time? \n"
                      << std::endl;
        }
    }
}

int main() {
    float coins = 0.0;
    do {
        std::cout << "Please insert coins to the slot machine: " << std::endl;
        std::cin >> coins;

        slotMachine(coins);

    } while (coins != 0);

    return 0;
}