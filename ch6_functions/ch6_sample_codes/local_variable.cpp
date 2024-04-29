#include <iostream>

void changeArgument(int x) {
    x += 5;
}

int main() {
    int y = 4;
    changeArgument(y);  // y will be unharmed by the function call
    std::cout << y;     // still prints 4

    return 0;
}
