#include <iostream>

int main() {
    int n = 99;

    while (n > 0) {
        std::cout << n << " bottles of beer on the wall." << std::endl;
        std::cout << n << " bottles of beer." << std::endl;
        std::cout << "Take one down, pass it around." << std::endl;

        // be careful of the difference of "--n" and "n--", the results are quite different here.
        std::cout << --n << " bottles of beer on the wall." << std::endl;

        std::cout << '\n';
    }

    std::cout << "No more bottles of beer on the wall, " << std::endl;
    std::cout << "no more bottles of beer." << std::endl;
    std::cout << "Go to store and buy some more, " << std::endl;
    std::cout << "99 bottles of beer on the wall." << std::endl;

    std::cout << '\n';

    return 0;
}