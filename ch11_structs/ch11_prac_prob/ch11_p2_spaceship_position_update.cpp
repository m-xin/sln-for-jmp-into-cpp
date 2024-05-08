#include <cstdlib>
#include <ctime>
#include <iostream>

struct SpaceShip {
    // initial position is at the center.
    int x_coordinate = 1024 / 2;
    int y_coordinate = 768 / 2;
};

int Direction(int negative, int positive) {
    return rand() % (positive - negative + 1) + negative;
}

int main(int argc, char* argv[]) {
    int ship_number = 5;
    SpaceShip ship[5];

    srand(static_cast<unsigned int>(time(nullptr)));
    int dir = Direction(-1, 1);
    for (size_t i = 0; i < ship_number; i++) {
        ship[i].x_coordinate += 20 * dir;
        ship[i].y_coordinate += 10 * dir;
    }

    for (size_t n = 0; n < ship_number; n++) {
        std::cout << "Ship " << n + 1 << " initial position is: " << std::endl;
        std::cout << "x coordinate is: " << ship[n].x_coordinate << std::endl;
        std::cout << "y coordinate is: " << ship[n].y_coordinate << std::endl;
        std::cout << "\n";
    }

    srand(static_cast<unsigned int>(time(nullptr)));

    int movement = 3;

    for (size_t i = 0; i < movement; i++)  // movement
    {
        for (size_t j = 0; j < ship_number; j++) {
            int dir = Direction(-1, 1);  // randomly move on x, y direction
            ship[i].x_coordinate += 200 * dir;
            ship[i].y_coordinate += 100 * dir;

            for (size_t n = 0; n < ship_number; n++) {
                std::cout << "Ship " << n + 1 << " current position is: " << std::endl;
                std::cout << "x coordinate is: " << ship[n].x_coordinate << std::endl;
                std::cout << "y coordinate is: " << ship[n].y_coordinate << std::endl;
                std::cout << "\n";
            }

            if (ship[i].x_coordinate > 1024 || ship[i].x_coordinate < 0 || ship[i].y_coordinate > 768 || ship[i].y_coordinate < 0) {
                std::cout << "Ship " << i + 1 << " went off the screen." << std::endl;
                // remove the ship went off the screen
                for (int k = j; k < ship_number - j; j++) {
                    ship[k] = ship[k + 1];
                }
                ship_number--;
                if (ship_number == 0) {
                    std::cout << "All ships went off the screen." << std::endl;
                }
            }
        }
    }

    return 0;
}
