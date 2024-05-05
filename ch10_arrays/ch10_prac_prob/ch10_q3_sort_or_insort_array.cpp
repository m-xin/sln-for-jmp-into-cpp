// the algorithm to justify whether the array is unsorted can direcyly traverse the all

#include <cstdlib>
#include <ctime>
#include <iostream>

bool isArrayUnsorted(int array[], int size) {
    for (size_t i = 0; i < size - 1; i++) {
        if (array[i] > array[i + 1]) {
            std::cout << "The array is unsorted, we need to sort it now! \n";
            return true;
        }
    }
    std::cout << "The array has been sorted, just let it go. \n";
    return false;
}

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int* bubbleSort(int array[], int size) {
    for (size_t i = 0; i < size; i++) {
        for (size_t j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }
    return array;
}

int randRange(int low, int high) {
    return rand() % (high - low + 1) + low;
}

int* buildArray(int size, int low) {
    int* array = new int[size];
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

int main(int argc, char* argv[]) {
    std::cout << "Please input the size of the array: " << std::endl;
    int size = 0;
    std::cin >> size;

    srand(static_cast<unsigned int>(time(nullptr)));

    int low_bound = 0;
    std::cout << "Please input the lowest value of the array: " << std::endl;
    std::cin >> low_bound;
    int* array = buildArray(size, low_bound);

    // int array[] = {5, 6, 7, 9, 9, 9, 12, 13, 15, 15};

    std::cout << "The original array is: ";
    displayArray(array, size);
    std::cout << '\n';

    if (isArrayUnsorted(array, size)) {
        bubbleSort(array, size);
        std::cout << "Sorted array is: " << std::endl;
        displayArray(array, size);
        std::cout << "\n";
    }

    delete[] array;

    return 0;
}
