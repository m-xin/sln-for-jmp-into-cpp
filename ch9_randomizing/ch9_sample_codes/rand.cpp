#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
    // call just once, at the every start
    srand(time(nullptr));
    std::cout << rand() << '\n';
}

// it would output a big number, I run twice, which are 842849007, and 842983463
