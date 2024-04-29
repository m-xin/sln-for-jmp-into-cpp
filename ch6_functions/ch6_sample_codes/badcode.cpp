#include <iostream>

int main() {
    int result = add(1, 2);  // call add and assign the result to a variable
    std::cout << "The result is: " << result << '\n';
    std::cout << "Adding 3 and 4 gives us: " << add(3, 4);

    return 0;
}

int add(int x, int y) {
    return x + y;
}
