#include <iostream>

int main() {
    for (size_t i = 0; i < 10; i++) {
        // \t represents a tab character, which will format our output nicely
        std::cout << '\t' << i;
    }
    for (size_t i = 0; i < 10; ++i) {
        std::cout << i;
        for (size_t j = 0; j < 10; ++j) {
            std::cout << '\t' << i * j;
        }
        std::cout << '\n';
    }

    return 0;
}