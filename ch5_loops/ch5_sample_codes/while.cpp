#include <iostream>

int main() {

    int i = 0; // declare the variable

    while (i < 10) // while i is less than 10
    {
        std::cout << i << '\n';
        i++; // update i, the condition can be met eventually.
    }

    return 0;
}