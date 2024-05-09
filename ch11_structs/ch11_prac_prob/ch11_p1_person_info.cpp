#include <iostream>
#include <string>

struct PersonalInfo {
    std::string name;
    std::string address;
    std::string phone_number;
};

int main() {
    PersonalInfo user;
    std::cout << "Please enter the user's name: " << std::endl;
    std::cin >> user.name;
    std::cout << "Please enter the user's address: " << std::endl;
    std::cin >> user.address;
    std::cout << "Please enter the user's phone number: " << std::endl;
    std::cin >> user.phone_number;

    return 0;
}