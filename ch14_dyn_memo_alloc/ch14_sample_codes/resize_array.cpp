#include <iostream>

int* GrowArrary(int* p_values, int cur_size) {
    int* p_new_val = new int[cur_size * 2];
    // We have to request more memory and copy over the old values
    for (size_t i = 0; i < cur_size; i++) {
        p_new_val[i] = p_values[i];
    }
    // must delete the value in p_values after it finishes copying the data from that array—otherwise, we’d leak memory since we are overwriting the pointer that holds our array upon the return from growArray
    delete p_values;
    return p_new_val;
}

int main() {
    int next_ele = 0;
    int size = 10;
    int* p_value = new int[size];

    int val;
    std::cout << "Please enter a number: ";
    std::cin >> val;
    while (val > 0) {
        if (size == next_ele + 1) {
            // oversize element, need to expand the array size
            p_value = GrowArrary(p_value, size);
        }
        p_value[next_ele] = val;
        std::cout << "Please enter a number (or 0 to exit): ";
        std::cin >> val;
    }

    return 0;
}