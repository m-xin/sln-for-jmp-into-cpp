#include <iostream>
#include <string>

void ch5_q1_for() {
    int n = 99;
    for (size_t i = n; i > 0; --i)
    {
        std::cout << i << " bottles of beer on the wall." << std::endl;
        std::cout << i << " bottles of beer." << std::endl;
        std::cout << "Take one down, pass it around." << std::endl;

        std::cout << --n << " bottles of beer on the wall." << std::endl;
        std::cout << '\n';
    }
    std::cout << "No more bottles of beer on the wall, " << std::endl;
    std::cout << "no more bottles of beer." << std::endl;
    std::cout << "Go to store and buy some more, " << std::endl;
    std::cout << "99 bottles of beer on the wall." << std::endl;

    std::cout << '\n';
}

void ch5_q1_do_while() {
    int n = 99;
    do
    {
        std::cout << n << " bottles of beer on the wall." << std::endl;
        std::cout << n << " bottles of beer." << std::endl;
        std::cout << "Take one down, pass it around." << std::endl;

        std::cout << --n << " bottles of beer on the wall." << std::endl;
        std::cout << '\n';

    } while (n > 0);

    std::cout << "No more bottles of beer on the wall, " << std::endl;
    std::cout << "no more bottles of beer." << std::endl;
    std::cout << "Go to store and buy some more, " << std::endl;
    std::cout << "99 bottles of beer on the wall." << std::endl;

    std::cout << '\n';
}

void ch5_q2_for() {
    std::string food;
    for (;;)
    {
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
    }
}

void ch5_q2_while() {
    std::string food;
    while (true)
    {
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
    }
}

void ch5_q3_for() {
    int num = 0;
    int sum = 0;
    for (;;)
    {
        std::cout << "Please enter a number (if you want to terminate, enter 0): ";
        std::cin >> num;
        if (num == 0)
        {
            std::cout << "Terminating running sum of inputs." << std::endl;
            return;
        }
        else {
            sum += num;
            std::cout << "The current sum is: " << sum << std::endl;
        }
    }
}
    
void ch5_q3_while() {
    int num;
    int sum = 0;
    std::cout << "Please enter a number (if you want to terminate, enter 0): ";
    std::cin >> num;
    while (num != 0)
    {
        sum += num;
        std::cout << "The current sum is: " << sum << std::endl;
        // new inputs.
        std::cout << "Please enter a number (if you want to terminate, enter 0): ";
        std::cin >> num;
    }
    std::cout << "Terminating running sum of inputs." << std::endl;
}

void ch5_q4_while() {
    std::string stored_pwd = "foobar";
    std::string pwd;
    int max_tryouts = 3;
    while (max_tryouts > 0)
    {
        std::cout << "Please enter your password: " << std::endl;
        std::cin >> pwd;
        if (pwd == stored_pwd) {
            std::cout << "Password Granted!" << std::endl;
            return;
        }
        std::cout << "Wrong password, you have " << --max_tryouts << " chance to try. \n";
        std::cout << "\n";
    }
    std::cout << "Too many times to try, system would be locked for 10 mins.\n";
}

void ch5_q4_do_while() {
    std::string stored_pwd = "foobar";
    std::string pwd;
    int max_tryouts = 3;
    do
    {
        std::cout << "Please enter your password: " << std::endl;
        std::cin >> pwd;
        if (pwd == stored_pwd) {
            std::cout << "Password Granted!" << std::endl;
            return;
        }
        std::cout << "Wrong password, you have " << --max_tryouts << " chance to try. \n";
        std::cout << "\n";
    } while (max_tryouts > 0);
    std::cout << "Too many times to try, system would be locked for 10 mins.\n";
}

int main() {

    ch5_q4_do_while();

    return 0;
}