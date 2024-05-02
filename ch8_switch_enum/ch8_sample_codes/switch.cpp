#include <iostream>

void playGame() {
    // code;
}

void loadGame() {
    // code;
}

void playMultiplayer() {
    // code;
}

int main(int argc, char* argv[]) {
    int input;
    std::cout << "1. Play Game \n";
    std::cout << "2. Load Game \n";
    std::cout << "3. Play Multiplayer \n";
    std::cout << "4. Exit \n";
    std::cout << "Selection: ";

    std::cin >> input;

    switch (input) {
        case 1:
            playGame();
            break;
        case 2:
            loadGame();
            break;
        case 3:
            playMultiplayer();
            break;
        case 4:
            std::cout << "Thank you for playing!" << std::endl;
            break;
        default:
            std::cout << "Error, bad input, quitting..." << std::endl;
            break;
    }

    return 0;
}
