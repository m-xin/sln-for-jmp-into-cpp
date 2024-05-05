// We just picked a very simple way to solve this problem, i.e. do not hard code the size of the array, and turn to the input from the console or the terminal.
// actually, if wanted to be a more general solution, we may consider to create a vector-like fucntion by using array datastructure, which related to the following chapter about the concept of "heap" and dynamic memory allocation.

#include <cstdlib>
#include <ctime>
#include <iostream>

int findMinimumValue(int array[], int size, int index) {
    int index_mini_value = index;
    for (size_t i = index + 1; i < size; i++) {
        if (array[i] < array[index_mini_value]) {
            index_mini_value = i;
        }
    }
    return index_mini_value;
}
void swapInArray(int array[], int first_index, int second_index) {
    int temp_ele = array[first_index];
    array[first_index] = array[second_index];
    array[second_index] = temp_ele;
}

void insertionSort(int array[], int size) {
    for (size_t i = 0; i < size; i++) {
        int index = findMinimumValue(array, size, i);
        swapInArray(array, i, index);
    }
}

void displayArray(int array[], int size) {
    std::cout << "{";
    for (size_t i = 0; i < size; i++) {
        if (i != 0) {
            std::cout << ", ";
        }
        std::cout << array[i];
    }
    std::cout << "}";
}

int main() {
    std::cout << "Please enter the size of the array to be sorted: " << std::endl;
    int size;
    std::cin >> size;

    int array[size];

    srand(static_cast<unsigned int>(time(nullptr)));

    for (size_t i = 0; i < size; i++) {
        array[i] = rand() % size;
    }

    std::cout << "Original Array: ";
    displayArray(array, size);
    std::cout << "\n";

    insertionSort(array, size);
    std::cout << "Sorted Array: ";
    displayArray(array, size);
    std::cout << "\n";

    return 0;
}