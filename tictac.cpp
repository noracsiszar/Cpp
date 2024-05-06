#include <iostream>
#include <cstdlib> // For rand() and srand() to generate random number
#include <ctime>   // For time() to generate random number
using namespace std; // for std::cout and std::cin

char board[3][3] =  {{' ', ' ', ' '},
                     {' ', ' ', ' '},
                     {' ', ' ', ' '}}; //defining 3x3 board to be updated

// Function to draw the game board
void drawBoard() {
    std::cout << "Updated board:   " << std::endl;
    std::cout << "                 " << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "                 " << std::endl;
    std::cout << "                 " << std::endl;
}

// Function to make the player's move
void playerMove(char symbol) {
    int position;
    std::cout << "Player " << symbol << "'s turn. Pick a number on the grid from 1 to 9 to place your symbol: " << std::endl;
    std::cin >> position;

    // Convert position to row and column indices
    int row = (position - 1) / 3;
    int col = (position - 1) % 3;

    // Check if the selected position is valid and empty
    if (position >= 1 && position <= 9 && board[row][col] == ' ') {
        std::cout << "Position " << position << " is empty." << std::endl;
        // Place the player's symbol at the selected position
        board[row][col] = symbol;
    } else {
        std::cout << "Invalid move! Please choose an empty position." << std::endl;
        // Retry the move
        playerMove(symbol);
    }
}

// Function to make the computer's move
void computerMove(char symbol) {
    srand(time(0)); // Seed for random number generator
    int position;
    do {
        position = rand() % 9 + 1; // Generate random position from 1 to 9
        // Convert position to row and column indices
        int row = (position - 1) / 3;
        int col = (position - 1) % 3;
        // Check if the selected position is empty
        if (board[row][col] == ' ') {
            // Place the computer's symbol at the empty position
            board[row][col] = symbol;
            break; // Exit the loop after placing the symbol
        }
    } while (true); // Keep generating random positions until an empty one is found
}

// Check current game status
bool checkResult() {
    // Check for win in rows and columns
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') ||
            (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')) {
            std::cout << "Player " << board[i][i] << " wins!" << std::endl;
            return true; // Win detected
        }
    }

    // Check diagonals
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')) {
        std::cout << "Player " << board[1][1] << " wins!" << std::endl;
        return true; // Win detected
    }

    // Check for draw 
    bool isDraw = true;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == ' ') {
                isDraw = false; // Found an empty cell, game is not a draw
                break;
            }
        }
    }
    if (isDraw) {
        cout << "It's a draw!" << endl;
        return true; // Draw detected
    }

    return false; // Neither win nor draw detected
}

int main() {
    int userChoice;

    std::cout << "Welcome to a game of TIC TAC TOE!" << std::endl;
    std::cout << "---------------------------------" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  ---+-----+---" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  ---+-----+---" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "---------------------------------" << std::endl;
    
    std::cout << "Please see the board layout below" << std::endl;
    std::cout << "---------------------------------" << std::endl;
    std::cout << "   1 |  2  | 3   " << std::endl;
    std::cout << "  ---+-----+---" << std::endl;
    std::cout << "   4 |  5  | 6   " << std::endl;
    std::cout << "  ---+-----+---" << std::endl;
    std::cout << "   7 |  8  | 9   " << std::endl;
    std::cout << "---------------------------------" << std::endl;

    std::cout << "You are playing against the computer." << std::endl;
    std::cout << "If you would like to start, press 1." << std::endl;
    std::cout << "Otherwise, press 2." << std::endl;
    std::cin >> userChoice;

    char playerSymbol, computerSymbol;
    if (userChoice == 1) {
        std::cout << "You chose 1. You start with symbol 'X'." << std::endl;
        playerSymbol = 'X';
        computerSymbol = 'O';
    } else {
        std::cout << "You chose 2. The computer starts with symbol 'X'." << std::endl;
        playerSymbol = 'O';
        computerSymbol = 'X';
    }

    // Main game loop
    while (!checkResult()) {
        if (userChoice == 1) {
            // Player's turn
            playerMove(playerSymbol);
        } else {
            // Computer's turn
            computerMove(computerSymbol);
        }
        // Update and display the board after each move
        drawBoard();
        // Check for a win or draw condition
        if (checkResult()) {
            // Display win/draw message and end the game
            break;
        }
        // Switch turns between players
        if (userChoice == 1) {
            userChoice = 2;
        } else {
            userChoice = 1;
        }
    }

    return 0;
}
