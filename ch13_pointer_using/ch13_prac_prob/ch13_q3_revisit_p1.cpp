#include <cstring>
#include <iostream>

char* GetFullName(char* last_name = nullptr) {
    char first_name[50];
    std::cout << "Please enter your first name:" << std::endl;
    std::cin.getline(first_name, 50);

    char* full_name = new char[101];  // Allocate memory for full name (first name + last name + space)

    if (last_name == nullptr) {
        std::cout << "Enter your last name: ";
        std::cin.getline(full_name + 50, 50);
    } else {
        strcpy(full_name + 50, last_name);
    }

    strcpy(full_name, first_name);
    full_name[strlen(first_name)] = ' ';  // Add the space between first and last name
    strcat(full_name, full_name + 50);    // Concatenate first and last name

    return full_name;
}

int main() {
    char* name1 = GetFullName();
    std::cout << "Full name 1: " << name1 << std::endl;
    delete[] name1;

    char last_name2[] = "Kate";
    char* name2 = GetFullName(last_name2);
    std::cout << "Full name 2: " << name2 << std::endl;
    delete[] name2;

    return 0;
}
