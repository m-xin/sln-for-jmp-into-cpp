#include <iostream>
#include <string>

int main()
{
    std::string my_name;
    std::cout << "Please enter your name: " << std::endl;
    std::cin >> my_name;
    std::cout << "Your name is: " << my_name << std::endl;
    return 0;
}