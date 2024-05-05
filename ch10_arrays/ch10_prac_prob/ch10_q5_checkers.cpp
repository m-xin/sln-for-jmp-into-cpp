#include <iostream>
#include <vector>

class Checkers {
public:
    Checkers() {
        // Initialize the board
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if ((i + j) % 2 == 0) {
                    board[i][j] = 0;
                } else {
                    if (i < 3) {
                        board[i][j] = 1;
                    } else if (i > 4) {
                        board[i][j] = -1;
                    } else {
                        board[i][j] = 0;
                    }
                }
            }
        }
        currentPlayer = 1;
    }

    void printBoard() {
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                std::cout << board[i][j] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    std::vector<std::pair<int, int>> getValidMoves(int row, int col) {
        std::vector<std::pair<int, int>> validMoves;
        int piece = board[row][col];
        if (piece == 0) {
            return validMoves;
        }

        // Check normal moves
        if (piece * currentPlayer > 0) {
            for (int dr : {1, 1, -1, -1}) {
                for (int dc : {1, -1, 1, -1}) {
                    int newRow = row + dr, newCol = col + dc;
                    if (newRow >= 0 && newRow < 8 && newCol >= 0 && newCol < 8 && board[newRow][newCol] == 0) {
                        validMoves.push_back(std::make_pair(newRow, newCol));
                    }
                }
            }
        }

        // Check jump moves
        for (int dr : {1, 1, -1, -1}) {
            for (int dc : {1, -1, 1, -1}) {
                int newRow = row + dr, newCol = col + dc;
                if (newRow >= 0 && newRow < 8 && newCol >= 0 && newCol < 8 && board[newRow][newCol] == -currentPlayer) {
                    newRow += dr;
                    newCol += dc;
                    if (newRow >= 0 && newRow < 8 && newCol >= 0 && newCol < 8 && board[newRow][newCol] == 0) {
                        validMoves.push_back(std::make_pair(newRow, newCol));
                    }
                }
            }
        }

        return validMoves;
    }

    void makeMove(int startRow, int startCol, int endRow, int endCol) {
        int piece = board[startRow][startCol];
        board[startRow][startCol] = 0;
        board[endRow][endCol] = piece;

        // Check for kinging
        if (piece * currentPlayer > 0 && (endRow == 0 || endRow == 7)) {
            board[endRow][endCol] = piece * 2;
        }

        // Switch player
        currentPlayer *= -1;
    }

    bool checkGameOver() {
        // Check if either player has no pieces left
        int p1Pieces = 0, p2Pieces = 0;
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (board[i][j] == 1 || board[i][j] == 2) {
                    p1Pieces++;
                } else if (board[i][j] == -1 || board[i][j] == -2) {
                    p2Pieces++;
                }
            }
        }

        if (p1Pieces == 0 || p2Pieces == 0) {
            return true;
        }

        // Check if either player has no valid moves
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (board[i][j] * currentPlayer > 0 && !getValidMoves(i, j).empty()) {
                    return false;
                }
            }
        }

        return true;
    }

public:
    int board[8][8];
    int currentPlayer;
};

int main() {
    Checkers game;
    while (true) {
        game.printBoard();
        std::cout << "Player " << game.currentPlayer << " to move." << std::endl;

        // Get player move
        while (true) {
            int startRow, startCol, endRow, endCol;
            std::cout << "Enter start row: ";
            std::cin >> startRow;
            std::cout << "Enter start column: ";
            std::cin >> startCol;
            std::cout << "Enter end row: ";
            std::cin >> endRow;
            std::cout << "Enter end column: ";
            std::cin >> endCol;

            std::vector<std::pair<int, int>> validMoves = game.getValidMoves(startRow, startCol);
            bool foundValidMove = false;
            for (const auto& move : validMoves) {
                if (move.first == endRow && move.second == endCol) {
                    foundValidMove = true;
                    break;
                }
            }

            if (foundValidMove) {
                break;
            } else {
                std::cout << "Invalid move. Try again." << std::endl;
            }
        }

        int startRow, startCol, endRow, endCol;
        std::cout << "Enter start row: ";
        std::cin >> startRow;
        std::cout << "Enter start column: ";
        std::cin >> startCol;
        std::cout << "Enter end row: ";
        std::cin >> endRow;
        std::cout << "Enter end column: ";
        std::cin >> endCol;
        game.makeMove(startRow, startCol, endRow, endCol);

        // Check game over
        if (game.checkGameOver()) {
            game.printBoard();
            if (game.currentPlayer == 1) {
                std::cout << "Player 2 wins!" << std::endl;
            } else {
                std::cout << "Player 1 wins!" << std::endl;
            }
            break;
        }
    }

    return 0;
}

/*
The board is represented as a 2D array of integers, where 0 represents an empty square, 1 represents a player 1 piece, -1 represents a player 2 piece, and 2 and -2 represent kinged pieces.
The getValidMoves function returns a vector of std::pair<int, int> representing the valid moves for a given piece.
The makeMove function updates the board and checks for kinging.
The checkGameOver function checks if either player has no pieces left or if either player has no valid moves.
You can extend this implementation to support additional house rules or options that can be selected at program startup, similar to the previous Python version.
*/
