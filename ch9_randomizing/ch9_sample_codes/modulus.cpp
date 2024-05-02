#include <cstdlib>
#include <ctime>
#include <iostream>

int randRange(int low, int high) {
    // we get a random number, get it to be between 0 and the number of values in our range, then add the lowest possible value.
    return rand() % (high - low + 1) + low;
    // need to add 1 to "high - low", to maintain the total count of values in our range. need to add low to raise the desired range from 0 - range to desired low to desired high.
}
// pick up 1000 random number between 4 ~ 10
int main() {
    srand(time(nullptr));
    for (size_t i = 0; i < 1000; i++) {
        std::cout << randRange(4, 10) << '\n';
    }
}