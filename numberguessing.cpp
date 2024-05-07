#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Generate a random number between 0 and 9
void Generate(int &random) {
    random = std::rand() % 10;
}

// Ask the user to input their guess and store it in 'answer'
void startGuessing(int &answer) {
    std::cout << "Enter a number for your guess between 0 and 9: ";
    std::cin >> answer;
}

// Loop until the user's guess matches the generated number
void WinorLose(int random) {
    int answer;
    while (true) {
        startGuessing(answer);

        if (answer == random) {
            std::cout << "You guessed right!" << std::endl;
            std::cout << "The computer also thought of the number " << answer << "."<< std::endl;
            break;  // Exit the loop if the user guesses correctly
        } else {
            std::cout << "You guessed wrong. Try again!" << std::endl;
        }
    }
}

int main() {
    std::srand(std::time(nullptr));  // Seed for random number generation
    int random;

    Generate(random);
    WinorLose(random);

    return 0;
}
