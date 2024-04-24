#include <iostream>
#include <string>

int main()
{
    int num1, num2;
    std::cout << "Please enter the first number: " << std::endl;
    std::cin >> num1;
    std::cout << "Please enter the second number: " << std::endl;
    std::cin >> num2;
    std::cout << "The sum of these two numbers is: " << num1 + num2 << std::endl;
    return 0;
}