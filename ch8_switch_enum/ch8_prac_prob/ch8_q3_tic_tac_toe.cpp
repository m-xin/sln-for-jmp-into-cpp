#include "ch8_q3_tic_tac_toe.h"

#include <iostream>
#include <string>

int main() {
    square_state square[9] = {
        square_state::TTT_BLANK,
        square_state::TTT_BLANK,
        square_state::TTT_BLANK,
        square_state::TTT_BLANK,
        square_state::TTT_BLANK,
        square_state::TTT_BLANK,
        square_state::TTT_BLANK,
        square_state::TTT_BLANK,
        square_state::TTT_BLANK};
    int player = 1;
    square_state mark = square_state::TTT_X;
    square_board choice;
    int i;

    do {
        play_board(square);

        std::cout << "Player " << player << " (" << (mark == square_state::TTT_X ? 'X' : 'O') << "), enter a number: ";
        std::cin >> i;

        if (square[i] == square_state::TTT_BLANK) {
            play(static_cast<square_board>(i), i, square, mark);
            if (check_win(square) == static_cast<int>(mark)) {
                play_board(square);
                std::cout << "Player " << player << " (" << (mark == square_state::TTT_X ? 'X' : 'O') << ") wins!" << std::endl;
                break;
            } else if (check_win(square) == 3) {
                play_board(square);
                std::cout << "It's a tie!" << std::endl;
                break;
            }
            player = (player % 2) ? 2 : 1;
            mark = (mark == square_state::TTT_X) ? square_state::TTT_O : square_state::TTT_X;
        } else {
            std::cout << "That square is already taken. Try again." << std::endl;
        }
    } while (1);

    return 0;
}
