#include <iostream>

int main() {
    int first_arg, second_arg;

    std::cout << "Enter the first argument: ";
    std::cin >> first_arg;
    std::cout << "Enter the second argument: ";
    std::cin >> second_arg;

    std::cout << first_arg << " + " << second_arg << " = " << first_arg + second_arg << std::endl;

    std::cout << first_arg << " - " << second_arg << " = " << first_arg - second_arg << std::endl;

    std::cout << first_arg << " * " << second_arg << " = " << first_arg * second_arg << std::endl;

    std::cout << first_arg << " / " << second_arg << " = " << first_arg / second_arg << std::endl;

    return 0;
}