#include <iostream>
#include <stdlib.h>
#include <ctime> // Include ctime header for time(NULL)

int main() {
    srand(time(NULL)); // Seed the random number generator
    
    int computer = rand() % 3 + 1; // Generate a random number between 1 and 3
    int user = 0;

    std::cout << "====================\n";
    std::cout << "Rock Paper Scissors!\n";
    std::cout << "====================\n";

    std::cout << "1) ✊\n";
    std::cout << "2) ✋\n";
    std::cout << "3) ✌️\n";

    std::cout << "Shoot! ";
    std::cin >> user;

    if (user == computer) {
        std::cout << "We chose the same!\n";
    } else if (user == 1 && computer == 2) {
        std::cout << "Paper covers rock. You lost!\n";
    } else if (user == 1 && computer == 3) {
        std::cout << "Rock crushes scissors. You won!\n";
    } else if (user == 2 && computer == 1) {
        std::cout << "Paper covers rock. You won!\n";
    } else if (user == 2 && computer == 3) {
        std::cout << "Scissors cut paper. You lost!\n";
    } else if (user == 3 && computer == 1) {
        std::cout << "Rock crushes scissors. You lost!\n";
    } else if (user == 3 && computer == 2) {
        std::cout << "Scissors cut paper. You won!\n";
    } else {
        std::cout << "Invalid input!\n";
    }
}
