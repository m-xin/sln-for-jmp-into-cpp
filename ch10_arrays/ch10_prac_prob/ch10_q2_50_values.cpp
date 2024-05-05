#include <cstdlib>
#include <ctime>
#include <iostream>

int randRange(int low, int high) {
    return rand() % (high - low + 1) + low;
}

int *buildArray(int size, int low) {
    int *array = new int[size];
    int high = low + size;
    for (size_t i = 0; i < size; i++) {
        array[i] = randRange(low, high);
    }
    return array;
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

// sorting: bubble sort
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void bubbleSort(int array[], int size) {
    for (size_t i = 0; i < size; i++) {
        for (size_t j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

// sorting: insertion sort
int findMinimumValueIndex(int array[], int size, int index) {
    int minimum_value_index = index;
    for (size_t i = index + 1; i < size; i++) {
        if (array[i] < array[minimum_value_index]) {
            minimum_value_index = i;
        }
    }
    return minimum_value_index;
}

void swapInArray(int array[], int first_index, int second_index) {
    int temp = array[first_index];
    array[first_index] = array[second_index];
    array[second_index] = temp;
}

void insertionSort(int arrary[], int size) {
    for (size_t i = 0; i < size; i++) {
        int mini_value_index = findMinimumValueIndex(arrary, size, i);
        swapInArray(arrary, i, mini_value_index);
    }
}

int main(int argc, char *argv[]) {
    std::cout << "Please enter the size of the array to be sorted: " << std::endl;
    int size;
    std::cin >> size;

    srand(static_cast<unsigned int>(time(nullptr)));

    int low_bound = 0;
    int *array = buildArray(size, low_bound);

    std::cout << "Original Array: ";
    displayArray(array, size);
    std::cout << '\n';

    // insertionSort(array, size);
    bubbleSort(array, size);
    std::cout << "Sorted Array: ";
    displayArray(array, size);
    std::cout << "\n";

    delete[] array;

    return 0;
}
