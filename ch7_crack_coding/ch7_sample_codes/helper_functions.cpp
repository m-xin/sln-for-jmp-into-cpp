#include <iostream>
bool isDivisible(int number, int divisor) {
    return number % divisor == 0;
}

bool isPrime(int number) {
    for (size_t i = 2; i < number; i++) {
        if (isDivisible(number, i)) {
            return false;
        }
    }
    return true;
}

int main() {
    for (size_t i = 0; i < 100; i++) {
        if (i == 0 || i == 1) {
            continue;
        } else if (isPrime(i)) {
            std::cout << i << std::endl;
        }
    }
}