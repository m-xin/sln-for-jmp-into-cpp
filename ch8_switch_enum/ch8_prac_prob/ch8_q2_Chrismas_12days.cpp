// As the book suggested, using the fall-through style
#include <iostream>
#include <string>

void TwelveDaysOfChristmas() {
    enum class Days {
        FIRST = 1,
        SECOND = 2,
        THIRD = 3,
        FOURTH = 4,
        FIFTH = 5,
        SIXTH = 6,
        SEVENTH = 7,
        EIGHTH = 8,
        NINTH = 9,
        TENTH = 10,
        ELEVENTH = 11,
        TWELVTH = 12
    };

    std::string day_arr[] = {"First", "Second", "Third", "Fourth", "Fifth", "Sixth", "Seventh", "Eighth", "Ninth", "Tenth", "Eleventh", "Twelvth"};

    for (size_t chose_day = 1; chose_day < 13; chose_day++) {
        std::cout << "On the " << day_arr[chose_day - 1] << " day of Christmas, my true love gave to me: \n";

        switch (static_cast<Days>(chose_day)) {
            case Days::TWELVTH:
                std::cout << "Twelve Drummers Drumming, " << std::endl;

            case Days::ELEVENTH:
                std::cout << "Eleven Pipers Piping, " << std::endl;

            case Days::TENTH:
                std::cout << "Ten Lords a-Leaping, " << std::endl;

            case Days::NINTH:
                std::cout << "Nine Ladies Dancing, " << std::endl;

            case Days::EIGHTH:
                std::cout << "Eight Maids a-Milking, " << std::endl;

            case Days::SEVENTH:
                std::cout << "Seven Swans a-Swimming, " << std::endl;

            case Days::SIXTH:
                std::cout << "Six Geese a-Laying, " << std::endl;

            case Days::FIFTH:
                std::cout << "Five Gold Rings, " << std::endl;

            case Days::FOURTH:
                std::cout << "Four Calling Birds, " << std::endl;

            case Days::THIRD:
                std::cout << "Three French Hens, " << std::endl;

            case Days::SECOND:
                std::cout << "Two Turtle Doves, and " << std::endl;

            case Days::FIRST:
                std::cout << "A Partridge in a Pear Tree." << std::endl;
                std::cout << '\n';
        }
    }
}

int main() {
    TwelveDaysOfChristmas();
    return 0;
}
