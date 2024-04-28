#include <iostream>

int main() {
    int count = 20;

    for (size_t i = 0; i < count; i++) {
        std::cout << i << "'s square is: " << i * i << "\n";
    }

    return 0;
}
