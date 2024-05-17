/* /*Do not use STL, such as vector, and iterator, it is cheating, hahaha...*/

#include <iostream>

int ***ProductTableOf3DArray(const int length, const int width, const int height) {
    // Dynamically allocate the 3-dimentional array, new length
    // like a russian doll, in length, new width; then in width, new height
    int ***arr = new int **[length];
    for (size_t i = 0; i < length; i++) {
        arr[i] = new int *[width];
        for (size_t j = 0; j < width; j++) {
            arr[i][j] = new int[height];
        }
    }

    // multiplication table, similar to 2-D multiplication table
    for (size_t i = 0; i < length; i++) {
        for (size_t j = 0; j < width; j++) {
            for (size_t k = 0; k < height; k++) {
                arr[i][j][k] = (i + 1) * (j + 1) * (k + 1);
            }
        }
    }
    return arr;
}

void PrintTable(int ***arr,
                const int length,
                const int width,
                const int height) {
    for (size_t i = 0; i < length; i++) {
        for (size_t j = 0; j < width; j++) {
            for (size_t k = 0; k < height; k++) {
                std::cout << arr[i][j][k] << '\t';
            }
            std::cout << '\n';
        }
        std::cout << '\n';
    }
}

void Free3DArray(int ***arr,
                 const int length,
                 const int width) {
    // free memory
    for (size_t i = 0; i < length; i++) {
        for (size_t j = 0; j < width; j++) {
            delete[] arr[i][j];
        }
        delete[] arr[i];
    }
    delete[] arr;
}

int main(int argc, char *argv[]) {
    int length, width, height;
    std::cout << "Input the length of the 3-D array: ";
    std::cin >> length;
    std::cout << "Input the width of the 3-D array: ";
    std::cin >> width;
    std::cout << "Input the height of the 3-D array: ";
    std::cin >> height;

    int ***array3D = ProductTableOf3DArray(length, width, height);
    PrintTable(array3D, length, width, height);
    Free3DArray(array3D, length, width);

    return 0;
}