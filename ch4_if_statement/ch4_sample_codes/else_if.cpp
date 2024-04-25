#include <iostream>

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (num < 0) {
        std::cout << "You entered a negative number. \n";
    } else if (num == 0) {
        std::cout << "You entered zero. \n";
    } else {
        std::cout << "You entered a positive number.\n";
    }
}