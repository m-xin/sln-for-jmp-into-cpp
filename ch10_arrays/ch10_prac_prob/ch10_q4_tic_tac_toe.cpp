#include <iostream>
#include <vector>

using namespace std;

int rows, cols;

// Function to check if a player has won
bool checkWin(vector<vector<char>>& board, char player) {
    // Check rows
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= cols - 4; j++) {
            if (board[i][j] == player && board[i][j + 1] == player && board[i][j + 2] == player && board[i][j + 3] == player) {
                return true;
            }
        }
    }

    // Check columns
    for (int i = 0; i <= rows - 4; i++) {
        for (int j = 0; j < cols; j++) {
            if (board[i][j] == player && board[i + 1][j] == player && board[i + 2][j] == player && board[i + 3][j] == player) {
                return true;
            }
        }
    }

    // Check diagonals (top-left to bottom-right)
    for (int i = 0; i <= rows - 4; i++) {
        for (int j = 0; j <= cols - 4; j++) {
            if (board[i][j] == player && board[i + 1][j + 1] == player && board[i + 2][j + 2] == player && board[i + 3][j + 3] == player) {
                return true;
            }
        }
    }

    // Check diagonals (bottom-left to top-right)
    for (int i = 3; i < rows; i++) {
        for (int j = 0; j <= cols - 4; j++) {
            if (board[i][j] == player && board[i - 1][j + 1] == player && board[i - 2][j + 2] == player && board[i - 3][j + 3] == player) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    cout << "Enter the number of rows and columns for the board (maximum 20x20): ";
    cin >> rows >> cols;

    // Limit the maximum board size
    if (rows > 20 || cols > 20) {
        cout << "Board size is too large. Maximum size is 20x20." << endl;
        return 1;
    }

    vector<vector<char>> board(rows, vector<char>(cols, ' '));

    int currentPlayer = 0;
    bool gameOver = false;

    while (!gameOver) {
        cout << "Player " << (currentPlayer % 2 == 0 ? 'X' : 'O') << "'s turn." << endl;

        int column;
        do {
            cout << "Enter the column (0-" << cols - 1 << "): ";
            cin >> column;
        } while (column < 0 || column >= cols || board[0][column] != ' ');

        // Find the first available row in the selected column
        for (int i = rows - 1; i >= 0; i--) {
            if (board[i][column] == ' ') {
                board[i][column] = currentPlayer % 2 == 0 ? 'X' : 'O';
                break;
            }
        }

        // Display the current board
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }

        // Check if a player has won
        if (checkWin(board, currentPlayer % 2 == 0 ? 'X' : 'O')) {
            cout << "Player " << (currentPlayer % 2 == 0 ? 'X' : 'O') << " wins!" << endl;
            gameOver = true;
        } else {
            // Check if the board is full (tie)
            bool isFull = true;
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    if (board[i][j] == ' ') {
                        isFull = false;
                        break;
                    }
                }
                if (!isFull) {
                    break;
                }
            }
            if (isFull) {
                cout << "It's a tie!" << endl;
                gameOver = true;
            } else {
                currentPlayer++;
            }
        }
    }

    return 0;
}

// Still have some problem in this code. both player can only do row by row, only when one row has been filled, can go upper row, for example, we input the column number 0-3, if one play wants to put 'x' or 'o' in grid (1,1), only when grid(0,1) is filled in advance. Maybe polish the code later. Just call good so far.