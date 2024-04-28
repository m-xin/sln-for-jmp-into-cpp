#include <iostream>
#include <string>

int main() {
    std::string food;

    do {
        std::cout << "Please select your food (hotdog, sandwich, deli): \n";
        std::cin >> food;
        if (food == "hotdog") {
            std::cout << "Hotdog is ordered, please wait for several minutes...\n";
            break;
        }
        if (food == "sandwich") {
            std::cout << "Sandwich is ordered, please wait for several minutes...\n";
            break;
        }
        if (food == "deli") {
            std::cout << "Deli is ordered, please wait for several minutes...\n";
            break;
        }

    } while (true);

    return 0;
}
