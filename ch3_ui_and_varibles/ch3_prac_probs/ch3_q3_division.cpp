#include <iostream>

int main() {
    float num1_decimal;
    std::cout << "Please enter the 1st number with decimal: " << std::endl;
    std::cin >> num1_decimal;
    
    float num2_decimal;
    std::cout << "Please enter the 2nd number with decimal: " << std::endl;
    std::cin >> num2_decimal;
    std::cout << "The devision of 1st/2nd (float type) is: " << num1_decimal/num2_decimal << std::endl; 

    int num1;
    std::cout << "Please enter the 1st number: " << std::endl;
    std::cin >> num1;

    int num2;
    std::cout << "Please enter the 2nd number: " << std::endl;
    std::cin >> num2;

    std::cout << "The devision of 1st/2nd (int type) is: " << num1/num2 << std::endl; 

    return 0;
}