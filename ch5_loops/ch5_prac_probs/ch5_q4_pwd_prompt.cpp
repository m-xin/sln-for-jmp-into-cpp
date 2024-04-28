#include <iostream>
#include <string>

int main() {
    std::string stored_pwd = "foobar";
    std::string pwd;
    int max_tryouts = 3;

    for (size_t i = 0; i < max_tryouts; ++i) {
        std::cout << "Please enter your password: " << std::endl;
        std::cin >> pwd;
        if (pwd == stored_pwd) {
            std::cout << "Password Granted!" << std::endl;
            return 0;
        }
        std::cout << "Wrong password, you have " << max_tryouts - i - 1 << " chance to try. \n";
        std::cout << "\n";
    }
    std::cout << "Too many times to try, system would be locked for 10 mins.\n";
}