#include <iostream>

void PrintMenu() {
    std::cout << "The Celsius-Fahrenheit converter" << std::endl;
    std::cout << "--------------------------------" << std::endl;
    std::cout << "Choose 1 or 2 for the following:" << std::endl;
    std::cout << "1: Celsius into Fahrenheit" << std::endl;
    std::cout << "2: Fahrenheit into Celsius" << std::endl;
    std::cout << "--------------------------------" << std::endl;
}

int GetUserChoice() {
    int userChoice;
    std::cin >> userChoice;
    return userChoice;
}

void ProcessUserOption(int userChoice) {
    if (userChoice == 1) {
        std::cout << "You chose the Celsius into Fahrenheit converter" << std::endl;
    } else if (userChoice == 2) {
        std::cout << "You chose the Fahrenheit into Celsius converter" << std::endl;
    }
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "Enter the temperature to convert:" << std::endl;
}

void Converter(int userChoice, float userInput) {
    float result;

    if (userChoice == 1) {
        result = (userInput * 9) / 5 + 32;
        std::cout << userInput << " Celsius is " << result << " Fahrenheit" << std::endl;
    } else if (userChoice == 2) {
        result = ((userInput - 32) * 5) / 9;
        std::cout << userInput << " Fahrenheit is " << result << " Celsius" << std::endl;
    }
    std::cout << "-----------------------------------------------" << std::endl;
}

int main() {
    PrintMenu();
    int userChoice = GetUserChoice();
    ProcessUserOption(userChoice);
    float userInput;
    std::cin >> userInput;
    Converter(userChoice, userInput);

    return 0;
}
