#include <iostream>

int main() {
    int array[10][10];
    for (size_t i = 1; i < 10; i++) {
        for (size_t j = 1; j < 10; j++) {
            array[i][j] = i * j;
        }
    }
    std::cout << "Multiplication Table: \n";
    for (size_t i = 1; i < 10; i++) {
        for (size_t j = 1; j < 10; j++) {
            std::cout << "[" << i << "]" << "[" << j << "] = ";
            std::cout << array[i][j] << " ";
            std::cout << "\n";
        }
    }
}