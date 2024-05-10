#include <iostream>

int* multiply_add(const int& num1, const int& num2) {
    int* array = new int[2];
    array[0] = num1 + num2;
    array[1] = num1 * num2;
    return array;
}

int main() {
    std::cout << "Please enter the first number: " << std::endl;
    int num1;
    std::cin >> num1;

    std::cout << "Please enter the first number: " << std::endl;
    int num2;
    std::cin >> num2;

    int* array = multiply_add(num1, num2);

    std::cout << "The sum of num1 and num2 is: " << array[0] << ", The product of num1 and num2 is: " << array[1] << std::endl;

    delete[] array;

    return 0;
}