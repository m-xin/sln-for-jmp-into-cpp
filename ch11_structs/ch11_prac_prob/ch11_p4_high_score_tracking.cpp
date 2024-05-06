#include <iostream>

struct EnemySpaceShip {
    int x_coordinate;
    int y_coordinate;
    int weapon_power;
};

EnemySpaceShip getNewEnemy() {
    EnemySpaceShip ship;
    ship.x_coordinate = 0;
    ship.y_coordinate = 0;
    ship.weapon_power = 20;
    return ship;
};

EnemySpaceShip upgradeWeapons(EnemySpaceShip ship) {
    ship.weapon_power += 10;
    return ship;
}

int main() {
    EnemySpaceShip enemy = getNewEnemy();
    enemy = upgradeWeapons(enemy);
    std::cout << "the new enemy x position is: " << enemy.x_coordinate 
    << "its y position is:  " << enemy.y_coordinate 
    << "its weapon power is: " << enemy.weapon_power << std::endl;
}