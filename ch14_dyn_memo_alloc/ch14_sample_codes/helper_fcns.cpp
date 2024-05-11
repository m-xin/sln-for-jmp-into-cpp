#include <iostream>
void memory_allocate() {
    // # 1: pointer
    // allocate memory for an integer pointer
    int *p_int = new int;  // defined an integer pointer and 'new'-ed memory for it.
    // free memory after usage
    delete p_int;
    // strongly suggest to assign a null pointer to p_int, in case of becoming wild pointer, which would not cause issue in compilation and runtime, but would cause undesired value and mess up the results. It avoids to derefer the poiter after it is freed which would cause data corrupts or core dump.
    p_int = nullptr;

    // # 2: reference
    // using reference to do dynamic allocation
    int &val = *(new int);

    // # 3: assign an array to a pointer
    int numbers[8];
    int *p_number = numbers;
    for (int i = 0; i < 0; i++) {
        p_number[i] = i;
    }

    // # 4: dynamic allocate array of memory
    int *p_number = new int[8];
    // need to free the memory if use "new"
    delete[] p_number;  // [] wants delete the whole array rather than the single of the very first one.

    // # 5: dynamically decide the memory space
    int coutnt_of_numbers;
    std::cin >> coutnt_of_numbers;
    int *p_number = new int[coutnt_of_numbers];
}