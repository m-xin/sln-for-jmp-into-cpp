#include <iostream>
#include <string>

int main() {
    std::string password;
    std::string password_stored;
    password_stored = "12345";
    std::cout << "Please enter your password: " << std::endl;
    std::cin >> password;
    if (password == password_stored)
    {
        std::cout << "Password Granted, you are logging in now, please stand by ... \n";
    }
    else{
        std::cout << "Password Denied, wrong input is detected. \n";
    }

    return 0;
}