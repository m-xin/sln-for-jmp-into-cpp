#include <iostream>

int main(){

    int people_age1;
    int people_age2;
    
    std::cout << "Please input the first man's age: \n";
    std::cin >> people_age1;
    std::cout << "Please input the second man's age: \n";
    std::cin >> people_age2;

    if (people_age1 > people_age2)
    {
        std::cout << "The first man is elder." << std::endl;
    }
    else if (people_age1 == people_age2)
    {
        std::cout << "Both people have the same age." << std::endl;
    }
    else{
        std::cout << "The second man is elder." << std::endl;
    }
    return 0;
}
