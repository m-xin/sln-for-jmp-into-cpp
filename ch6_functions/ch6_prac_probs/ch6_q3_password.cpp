#include <iostream>
#include <string>

void PasswordSystem() {
    std::string stored_user = "kevin_123";
    std::string stored_pwd = "456qwe";
    int max_tryouts = 3;
    std::string user;
    std::string pwd;
    for (size_t i = 0; i < max_tryouts; i++) {
        std::cout << "Please input your user name: ";
        std::cin >> user;
        std::cout << "Please input your password: ";
        std::cin >> pwd;

        if (user == stored_user && pwd == stored_pwd) {
            std::cout << "Access Granted!" << std::endl;
            return;
        } else {
            std::cout << "Wrong User name or Password, you have " << max_tryouts - i - 1 << " chances to try." << std::endl;
        }
    }
    std::cout << "You have tried too many times, the system would lock for 10 min ..." << std::endl;
}

int main() {
    PasswordSystem();
}