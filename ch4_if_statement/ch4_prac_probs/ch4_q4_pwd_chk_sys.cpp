#include <iostream>
#include <string>

int main() {
    std::string user1_stored, user2_stored, user3_stored, user4_stored;
    std::string pwd1_stored, pwd2_stored, pwd3_stored, pwd4_stored;
    // hard coded the stored user and password information
    user1_stored = "Kevin123";
    user2_stored = "Nicole456";
    user3_stored = "William789";
    user4_stored = "Ethan1011";

    pwd1_stored = "AbCdeF";
    pwd2_stored = "gHiJ123";
    pwd3_stored = "456kLmN";
    pwd4_stored = "oPqR789";

    std::string user_name;
    std::cout << "Please enter your user name: " << std::endl;
    std::cin >> user_name;
    std::string password;
    std::cout << "Please enter your password: " << std::endl;
    std::cin >> password;

    if (user_name == user1_stored && password == pwd1_stored)
    {
        std::cout << "Your access is granded, welcome back, Kevin! \n";
    }
    else if (user_name == user2_stored && password == pwd2_stored)
    {
        std::cout << "Your access is granded, welcome back, Nicole! \n";
    }
    else if (user_name == user3_stored && password == pwd3_stored)
    {
        std::cout << "Your access is granded, welcome back, William! \n";
    }
    else if (user_name == user4_stored && password == pwd4_stored)
    {
        std::cout << "Your access is granded, welcome back, Ethan! \n";
    }
    else{
        std::cout << "Wrong User name of Password, Access Denied! \n";
    }
    
    return 0;
}