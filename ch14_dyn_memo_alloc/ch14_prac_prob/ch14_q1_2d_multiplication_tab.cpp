#include <iostream>

void MultiplicationTable(int rows, int cols) {
    // this is the standard way to initialize 2-D array
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    // fill all products to the given matrix
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            matrix[i][j] = (i + 1) * (j + 1);
        }
    }

    // print the table as table
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << '\t';
        }
        std::cout << '\n';
    }

    // free memory, must be done here, otherwise it would cause segment fault.
    for (size_t i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int main() {
    int rows, cols;
    std::cout << "Please enter the row number: " << std::endl;
    std::cin >> rows;
    std::cout << "Please enter the col number: " << std::endl;
    std::cin >> cols;

    MultiplicationTable(rows, cols);

    return 0;
}