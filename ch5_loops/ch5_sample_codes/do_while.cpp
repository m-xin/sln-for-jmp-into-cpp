#include <iostream>
#include <string>

int main() {
    std::string password;

    do {
        std::cout << "Please enter your password: " << std::endl;
        std::cin >> password;
    } while (password != "foobar");
    std::cout << "Welcome, you got the password right." << std::endl;
}