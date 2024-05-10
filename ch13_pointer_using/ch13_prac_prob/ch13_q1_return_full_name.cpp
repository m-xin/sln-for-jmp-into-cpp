#include <iostream>
#include <string>

std::string* NameReturn(std::string last_name, std::string first_name) {
    static std::string name[] = {first_name, last_name};
    return name;
}

int main() {
    while (true) {
        std::cout << "Please enter your last name: " << std::endl;
        std::string first_name;
        std::cin >> first_name;

        std::cout << "Please enter your first name: " << std::endl;
        std::string last_name;
        std::cin >> last_name;

        std::string* name = NameReturn(last_name, first_name);
        std::cout << "The user's name is: " << last_name << ", " << first_name << std::endl;
    }
    return 0;
}
