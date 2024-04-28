#include <iostream>

int main() {
    int num = 0;
    int sum = 0;

    do {
        std::cout << "Please enter a number (if you want to terminate, enter 0): ";
        std::cin >> num;
        sum += num;
        std::cout << "The current sum is: " << sum << std::endl;

    } while (num != 0);

    std::cout << "Terminating running sum of inputs." << std::endl;

    return 0;
}
