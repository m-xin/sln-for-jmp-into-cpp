#include <cstdlib>
#include <ctime>
#include <iostream>

int findSmallestRemainingElement(int array[], int size, int index) {
    int index_of_smallest_value = index;
    for (size_t i = index + 1; i < size; i++) {
        if (array[i] < array[index_of_smallest_value]) {
            index_of_smallest_value = i;
        }
    }
    return index_of_smallest_value;
}

void swap(int array[], int first_index, int second_index) {
    int temp = array[first_index];
    array[first_index] = array[second_index];
    array[second_index] = temp;
    // note that poiter is not indicated yet, so use array[] as alternative of pointer/reference.
}

void sort(int array[], int size) {
    for (size_t i = 0; i < size; i++) {
        int index = findSmallestRemainingElement(array, size, i);
        swap(array, i, index);
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
    int array[10];
    srand(static_cast<unsigned int>(time(nullptr)));
    for (size_t i = 0; i < 10; i++) {
        array[i] = rand() % 10;
    }
    std::cout << "Original Array: ";
    displayArray(array, 10);
    std::cout << '\n';

    sort(array, 10);

    std::cout << "Sorted Array: ";
    displayArray(array, 10);
    std::cout << '\n';

    return 0;
}