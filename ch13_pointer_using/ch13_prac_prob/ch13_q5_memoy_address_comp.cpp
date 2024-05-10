#include <iostream>
#include <string>

int main() {
    int a = 5;
    int b = 10;

    int *a_address = &a;
    int *b_address = &b;

    std::cout << "a = 5 address is: " << a_address << std::endl;
    std::cout << "b = 10 address is: " << b_address << std::endl;

    if (a_address >= b_address) {
        std::cout << *b_address << " " << *a_address << std::endl;
    } else {
        std::cout << *a_address << " " << *b_address << std::endl;
    }

    return 0;
}