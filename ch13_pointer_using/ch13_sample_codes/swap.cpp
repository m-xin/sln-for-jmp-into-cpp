#include <iostream>

void Swap1(int left, int right) {
    int temp = left;
    left = right;
    right = temp;
}

void Swap2(int* left, int* right) {
    int temp = *left;
    *left = *right;
    *right = temp;
}

void Swap3(int& left, int& right) {
    int temp = left;
    left = right;
    right = temp;
}

int main() {
    int num1;
    std::cout << "Input the first number: " << std::endl;
    std::cin >> num1;

    int num2;
    std::cout << "Input the second number: " << std::endl;
    std::cin >> num2;

    Swap1(num1, num2);
    std::cout << "Now, the num1 should be num2, num1 = " << num1 << std::endl;
    std::cout << "the num2 should be num1, num2 = " << num2 << std::endl;
    std::cout << '\n';

    Swap2(&num1, &num2);
    std::cout << "Now, the num1 should be num2, num1 = " << num1 << std::endl;
    std::cout << "the num2 should be num1, num2 = " << num2 << std::endl;
    std::cout << '\n';

    Swap3(num1, num2);
    std::cout << "Now, the num1 should be num2, num1 = " << num1 << std::endl;
    std::cout << "the num2 should be num1, num2 = " << num2 << std::endl;
    std::cout << '\n';

    return 0;
}