#include <iostream>

int sumArray(int values[], int size) {
    int sum = 0;
    // Iterate through the array elements
    for (size_t i = 0; i < size; i++) {
        sum += values[i];
    }
    return sum;
}

int main() {
    int values[10];
    for (size_t i = 0; i < 10; i++) {
        std::cout << "Enter value " << i << ": ";
        std::cin >> values[i];
    }
    std::cout << "Sum of array elements: " << sumArray(values, 10) << std::endl;

    return 0;
}
