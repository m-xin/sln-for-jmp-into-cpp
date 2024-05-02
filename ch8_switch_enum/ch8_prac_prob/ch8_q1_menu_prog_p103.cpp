/*
    Since modern C++ (after C++ 11) does not recommend to use enum but enum class, thus we would use enum class to replace enum for all practical problems. The details about the difference between enum class and enum can refer to stackflow.com or other tech website.
*/

#include <iostream>

enum class FoodItem {
    HOTDOG = 0,
    SANDWICH = 1,
    DELI = 2,
};

void Menu() {
    FoodItem selectedFood;
    do {
        std::cout << "Please select your food: (0 for hotdog, 1 for sandwich, 2 for deli): \n";
        int choice;
        std::cin >> choice;

        /*
            Note that, although using "static_cast" is not required and directly use number is allowed, it still recommends to apply static_cast to strictly bridge the enum class items with their correlated numbers, in case any comprimising to the variable and data.
        */
        switch (static_cast<FoodItem>(choice)) {
            case FoodItem::HOTDOG:
                std::cout << "Hotdog is ordered, please wait for several minutes. \n";
                break;

            case FoodItem::SANDWICH:
                std::cout << "SANDWICH is ordered, please wait for several minutes. \n";
                break;

            case FoodItem::DELI:
                std::cout << "DELI is ordered, please wait for several minutes.\n";
                break;

            default:
                std::cout << "Invaild input, Please try again. \n"
                          << std::endl;
                continue;
        }
        break;

    } while (true);
}

int main() {
    Menu();
    return 0;
}