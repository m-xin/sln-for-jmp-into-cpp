#include <cstdlib>
#include <ctime>
#include <iostream>

// still use the classic helper function provided in "modulus.cpp"
int randRange(int low, int high) {
    return rand() % (high - low + 1) + low;
}

// here, I used binary search to rapidly solve this questions, which is much better than user manually input guessing.
void binarySearch(
    int left,
    int right,
    int guess,
    int guessCount,
    int secret_number) {
    while (left <= right) {
        guess = left + (right - left) / 2;
        guessCount++;

        if (guess == secret_number) {
            std::cout << "the guess is: " << guess << std::endl;
            break;
        } else if (guess < secret_number) {
            left = guess + 1;
        } else {
            right = guess - 1;
        }
    }

    // Output the result
    std::cout << "The secret number was " << secret_number << "." << std::endl;
    std::cout << "The program guessed the number in " << guessCount << " tries." << std::endl;
}

int main() {
    // Seed the random number generator
    // "static_cast" is not necessary but it is strongly suggested in compilation feedback message in terminal, so just added for good. The book just used the old-school way.

    srand(static_cast<unsigned int>(time(NULL)));

    // Generate a random number between 1 and 100
    int secret_number = randRange(1, 100);

    // Initialize the guess count
    int guess_count = 0;

    // Guess the number using binary search
    int left = 1, right = 100;
    int guess = 0;

    binarySearch(left, right, guess, guess_count, secret_number);

    return 0;
}

// after a couple of times playing, generally, it would take 7 times to guess the secrete number.