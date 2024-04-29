#include <iostream>
#include <string>

// function: "menu program"
void Menu() {
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
}

// function: calculator
void Calculator() {
    int sum = 0;
    int num = 0;
    do {
        std::cout << "Please enter a number (if you want to terminate, enter 0): ";
        std::cin >> num;
        sum += num;
        std::cout << "The current sum is: " << sum << std::endl;
    } while (num != 0);
    std::cout << "Terminating running sum of inputs." << std::endl;
}

// function: 100 bottle of beers
void OneHundredBottlesBeer(int bottle_number) {
    int n = bottle_number;
    while (n > 0) {
        std::cout << n << " bottles of beer on the wall." << std::endl;
        std::cout << n << " bottles of beer." << std::endl;
        std::cout << "Take one down, pass it around." << std::endl;
        std::cout << --n << " bottles of beer on the wall." << std::endl;
        std::cout << '\n';
    }
    std::cout << "No more bottles of beer on the wall, " << std::endl;
    std::cout << "no more bottles of beer." << std::endl;
    std::cout << "Go to store and buy some more, " << std::endl;
    std::cout << bottle_number << " bottles of beer on the wall." << std::endl;

    std::cout << '\n';
}

int main() {
    /* 100 bottles of beer. */
    /*     int bottle_number = 100;
        OneHundredBottlesBeer(bottle_number); */
    /* 100 bottles of beer. */
    // Calculator();

    /* Menu Program */
    Menu();
}