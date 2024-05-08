#include <iostream>
#include <string>

struct AddressBook {
    std::string name;
    int phone_number;
    std::string address;
};

int main(int argc, char* argv[]) {
    int book_size = 5;
    AddressBook address_book[book_size];
    std::string flag;
    int i = 0;
    while (true) {
        std::cout << "If you want to record your contact info, please enter 1 or enter 0 to exit..." << std::endl;
        std::cin >> flag;
        if (flag == "0") {
            std::cout << "exit from address book..." << std::endl;
            break;
        } else if (flag == "1") {
            std::cout << "Adding the No. " << i + 1 << " contact info: " << std::endl;
            std::cout << "Please input the name of contact: " << std::endl;
            std::cin >> address_book[i].name;
            std::cout << "Please input the phone number of contact: " << std::endl;
            std::cin >> address_book[i].phone_number;
            std::cout << "Please input the address of contact: " << std::endl;
            std::cin >> address_book[i].address;
            std::cout << "The No." << ++i << " contact is added." << std::endl;
            std::cout << '\n';
        } else {
            std::cout << "Illegal symbol, only 0 and 1 is allowed." << std::endl;
            std::cout << '\n';
            continue;
        }
    }

    // print the address book.
    for (size_t j = 0; j < i; j++) {
        std::cout << "The No." << j + 1 << " contact info are as follows: " << std::endl;
        std::cout << "The name of the contact is: " << address_book[j].name << std::endl;
        std::cout << "The phone # of the contact is: " << address_book[j].phone_number << std::endl;
        std::cout << "The address of the contact is: " << address_book[j].address << std::endl;
        std::cout << '\n';
    }

    return 0;
}

/*
Answer to the question:
1. Let the user add as many entries as he or she wants, is this easy to
do?
Yes, it is. But not for the current scope. If someone has already know SIL, and can apply std::vector<AddressBook>address_book. He/she can add as many as he/she wants. Or maybe use pointer, heap, and dynamic memory allocation, they achieve similar work as std::vector<AddressBook>address_book but more complex. If not, it would be hard just based on the basic knowledge of array[].
