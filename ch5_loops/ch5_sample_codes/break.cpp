#include <iostream>
#include <string>

int main() {
    std::string password;
    while (1) {
        std::cout << "Please enter your password: " << std::endl;
        std::cin >> password;
        if (password == "foobar") {
            break;
        }
    }
    std::cout << "Welcome, you got the password right.";
    return 0;
}