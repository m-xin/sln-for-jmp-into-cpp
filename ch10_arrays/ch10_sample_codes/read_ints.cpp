#include <iostream>

int main() {
    int values[100];
    for (size_t i = 0; i < 100; i++) {
        std::cout << "Enter value: " << i << ": ";
        std::cin >> values[i];
    }
    return 0;
}
