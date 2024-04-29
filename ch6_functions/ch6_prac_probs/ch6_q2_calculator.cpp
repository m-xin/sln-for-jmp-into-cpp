#include <iostream>

float Add(float x, float y) {
    return x + y;
}

float Substract(float x, float y) {
    return x - y;
}

float Multiply(float x, float y) {
    return x * y;
}

float Devision(float x, float y) {
    return x / y;
}

void Calculator(float x, float y, char sign) {
    if (sign == '+') {
        std::cout << x << " + " << y << " = " << Add(x, y) << std::endl;
    } else if (sign == '-') {
        std::cout << x << " - " << y << " = " << Substract(x, y) << std::endl;
    } else if (sign == '*') {
        std::cout << x << " * " << y << " = " << Multiply(x, y) << std::endl;
    } else if (sign == '/') {
        std::cout << x << " / " << y << " = " << Devision(x, y) << std::endl;
    }
}

int main() {
    int x, y;
    char sign;
    std::cout << "Input the first number: ";
    std::cin >> x;
    std::cout << "Input the second number: ";
    std::cin >> y;
    std::cout << "Input the operand sign (only '+', '-', '*', '/'): ";
    std::cin >> sign;

    Calculator(x, y, sign);
    return 0;
}