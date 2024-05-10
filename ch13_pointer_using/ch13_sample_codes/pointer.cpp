#include <iostream>

int main() {
    int x;  // a normal integer
    std::cout << &x << std::endl;
    int *p_int = nullptr;  // a pointer to an integer
    std::cout << p_int << std::endl;

    p_int = &x;  // Read it, "assign the address of x to p_int"

    std::cout << "Please enter a number: ";
    std::cin >> x;  // put a value in x, we could also use *p_int here
    std::cout << p_int << std::endl;
    std::cout << *p_int << '\n';  // not the use of the * to get the value
    *p_int = 10;
    std::cout << x << '\n';  // outputs 10 again.
    std::cout << p_int << std::endl;

    return 0;
}