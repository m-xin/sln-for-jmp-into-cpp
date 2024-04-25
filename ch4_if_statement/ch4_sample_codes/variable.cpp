#include <iostream>

int main() {
    int x;
    std::cout << "Enter a number: ";
    std::cin >> x;
    if (x < 10) {
        std::cout << "Your entered a value less than 10." << '\n';
    }
}