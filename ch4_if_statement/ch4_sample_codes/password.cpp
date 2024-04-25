#include <iostream>
#include <string>

int main() {
    std::string password;
    std::cout << "Enter your password: " << "\n";
    std::getline(std::cin, password, '\n');
    if (password == "xyzzy") {
        std::cout << "Access Allowed." << "\n";
    } else {
        std::cout << "Bad password. Denied access!" << "\n";
        // returning is a convenient way to stop the program
        return 0;
    }
    // continue onward!
}
