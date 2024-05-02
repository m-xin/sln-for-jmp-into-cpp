#ifndef CH8_Q3_TIC_TAC_TOE_H
#define CH8_Q3_TIC_TAC_TOE_H

#include <iostream>

enum class square_board {
    TL = 1,
    TC = 2,
    TR = 3,
    ML = 4,
    MC = 5,
    MR = 6,
    BL = 7,
    BC = 8,
    BR = 9
};

enum class square_state { TTT_BLANK = 0,
                          TTT_X = 1,
                          TTT_O = 2 };

void play(square_board choice, int i, square_state* square, square_state marker) {
    switch (choice) {
        case square_board::TL:
            square[1] = marker;
            break;
        case square_board::TC:
            square[2] = marker;
            break;
        case square_board::TR:
            square[3] = marker;
            break;
        case square_board::ML:
            square[4] = marker;
            break;
        case square_board::MC:
            square[5] = marker;
            break;
        case square_board::MR:
            square[6] = marker;
            break;
        case square_board::BL:
            square[7] = marker;
            break;
        case square_board::BC:
            square[8] = marker;
            break;
        case square_board::BR:
            square[9] = marker;
            break;
        default:
            std::cout << "Invalid Move" << std::endl;
            break;
    }
}

void play_board(square_state* square) {
    system("cls");
    std::cout << "\n\n\tTic Tac Toe\n\n";
    std::cout << "Player 1 (X)  -  Player 2 (O)" << std::endl
              << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << (square[1] == square_state::TTT_X ? 'X' : (square[1] == square_state::TTT_O ? 'O' : ' '))
              << "  |  " << (square[2] == square_state::TTT_X ? 'X' : (square[2] == square_state::TTT_O ? 'O' : ' '))
              << "  |  " << (square[3] == square_state::TTT_X ? 'X' : (square[3] == square_state::TTT_O ? 'O' : ' '))
              << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << (square[4] == square_state::TTT_X ? 'X' : (square[4] == square_state::TTT_O ? 'O' : ' '))
              << "  |  " << (square[5] == square_state::TTT_X ? 'X' : (square[5] == square_state::TTT_O ? 'O' : ' '))
              << "  |  " << (square[6] == square_state::TTT_X ? 'X' : (square[6] == square_state::TTT_O ? 'O' : ' '))
              << std::endl;
    std::cout << "_____|_____|____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << (square[7] == square_state::TTT_X ? 'X' : (square[7] == square_state::TTT_O ? 'O' : ' '))
              << "  |  " << (square[8] == square_state::TTT_X ? 'X' : (square[8] == square_state::TTT_O ? 'O' : ' '))
              << "  |  " << (square[9] == square_state::TTT_X ? 'X' : (square[9] == square_state::TTT_O ? 'O' : ' '))
              << std::endl;
    std::cout << "     |     |     " << std::endl
              << std::endl;
}

int check_win(square_state* square) {
    // Check rows
    for (int i = 1; i <= 7; i += 3) {
        if (square[i] != square_state::TTT_BLANK && square[i] == square[i + 1] && square[i] == square[i + 2]) {
            return static_cast<int>(square[i]);
        }
    }

    // Check columns
    for (int i = 1; i <= 3; i++) {
        if (square[i] != square_state::TTT_BLANK && square[i] == square[i + 3] && square[i] == square[i + 6]) {
            return static_cast<int>(square[i]);
        }
    }

    // Check diagonals
    if (square[1] != square_state::TTT_BLANK && square[1] == square[5] && square[1] == square[9]) {
        return static_cast<int>(square[1]);
    }
    if (square[3] != square_state::TTT_BLANK && square[3] == square[5] && square[3] == square[7]) {
        return static_cast<int>(square[3]);
    }

    // Check for a tie
    for (int i = 1; i <= 9; i++) {
        if (square[i] == square_state::TTT_BLANK) {
            return 0;
        }
    }

    return 3;
}

#endif /* CH8_Q3_TIC_TAC_TOE_H */