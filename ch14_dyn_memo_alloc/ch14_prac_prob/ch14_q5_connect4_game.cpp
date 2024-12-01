#include <iostream>
#include <vector>

using namespace std;

// Function to display the game board
void displayBoard(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to check if the game is won
bool checkWin(const vector<vector<char>>& board, char player) {
    // Check rows
    for (const auto& row : board) {
        int count = 0;
        for (char cell : row) {
            if (cell == player) {
                count++;
                if (count >= 4) {
                    return true;
                }
            } else {
                count = 0;
            }
        }
    }

    // Check columns
    for (int j = 0; j < board[0].size(); j++) {
        int count = 0;
        for (int i = 0; i < board.size(); i++) {
            if (board[i][j] == player) {
                count++;
                if (count >= 4) {
                    return true;
                }
            } else {
                count = 0;
            }
        }
    }

    // Check diagonals
    for (int i = 0; i < board.size() - 3; i++) {
        for (int j = 0; j < board[0].size() - 3; j++) {
            // Check top-left to bottom-right diagonal
            if (board[i][j] == player && board[i + 1][j + 1] == player && board[i + 2][j + 2] == player && board[i + 3][j + 3] == player) {
                return true;
            }
            // Check top-right to bottom-left diagonal
            if (board[i][j + 3] == player && board[i + 1][j + 2] == player && board[i + 2][j + 1] == player && board[i + 3][j] == player) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    int width, height;
    cout << "Enter the width and height of the board: ";
    cin >> width >> height;

    // Initialize the game board
    vector<vector<char>> board(height, vector<char>(width, '_'));

    char currentPlayer = '+';
    bool gameOver = false;

    while (!gameOver) {
        // Display the current board
        displayBoard(board);

        // Get the move from the current player
        cout << "Player " << currentPlayer << ", enter the column to drop your token: ";
        int column;
        cin >> column;

        // Find the first available row in the column
        for (int row = height - 1; row >= 0; row--) {
            if (board[row][column - 1] == '_') {
                board[row][column - 1] = currentPlayer;
                break;
            }
        }

        // Check if the current player has won
        if (checkWin(board, currentPlayer)) {
            displayBoard(board);
            cout << "Player " << currentPlayer << " wins!" << endl;
            gameOver = true;
        } else {
            // Switch to the other player
            if (currentPlayer == '+') {
                currentPlayer = 'x';
            } else {
                currentPlayer = '+';
            }
        }
    }

    return 0;
}
