#include <iostream>
#include <string>

int main() {
    std::string username;
    std::string password;
    std::cout << "Enter your username: " << "\n";
    std::getline(std::cin, username, '\n');

    std::cout << "Enter your password: " << "\n";
    std::getline(std::cin, password, '\n');

    if (username == "root" && password == "xyzzy") {
        std::cout << "Access Granted." << "\n";
    } else {
        std::cout << "Bad username or password. Denied Access!" << "\n";
        return 0;
    }
    // continue onward!
}
