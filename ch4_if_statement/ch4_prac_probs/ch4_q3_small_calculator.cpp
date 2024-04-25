#include <iostream>

int main(){

    float num1;
    std::cout << "Please enter the first number: \n";
    std::cin >> num1;
    float num2;
    std::cout << "Please enter the second number: \n";
    std::cin >> num2;
    char sign;
    std::cout << "Please select the type of arithmetic operations: \n";
    std::cin >> sign;

    if (sign == '+')
    {
        std::cout << "The sum of these two numbers is: " << num1+num2 << std::endl;
    }
    else if (sign == '-')
    {
        std::cout << "The difference of these two numbers is: " << num1 - num2 << std::endl;
    }
    else if (sign == '*')
    {
        std::cout << "The product of these two numbers is: " << num1 * num2 << std::endl;
    }
    else if (sign == '/')
    {
        std::cout << "The division of these two numbers is: " << num1 / num2 << std::endl;
    }
    else
    {
        std::cout << "Unsuppored arithmetic operations, please select one type of operations from '+', '-', '*' and '/', only! \n";
    }

    return 0;
}
