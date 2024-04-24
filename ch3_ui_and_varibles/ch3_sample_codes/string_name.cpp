#include <iostream>
#include <string>

int main() {
    std::string user_name;
    std::cout << "Please enter your user name: ";
    std::cin >> user_name;
    std::cout << "Hi " << user_name << "!" << '\n';
    return 0;
}