#include <iostream>
using namespace std;

// Function to print the calculator layout
void PrintCalculator() {
    std::cout << "---------------------------------" << std::endl;
    std::cout << "Welcome to a simple math calculator" << std::endl;
    std::cout << "---------------------------------" << std::endl;
    std::cout << "         |     |        " << std::endl;
    std::cout << "  -------+-----+------  " << std::endl;
    std::cout << "   clear |  /  |  *     " << std::endl;
    std::cout << "  -------+-----+------  " << std::endl;
    std::cout << "     7   |  8  |  9     " << std::endl;
    std::cout << "  -------+-----+------  " << std::endl;
    std::cout << "     4   |  5  |  6     " << std::endl;
    std::cout << "  -------+-----+------  " << std::endl;
    std::cout << "     1   |  2  |  3     " << std::endl;
    std::cout << "  -------+-----+------  " << std::endl;
    std::cout << "     0   |  +  |  -     " << std::endl;
    std::cout << "---------------------------------" << std::endl;
}

// Function to enter values
void EnterValues(int &number1, int &number2, char &userChoice) {
    std::cout << "Enter number1 for operation: ";
    std::cin >> number1;

    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> userChoice;

    std::cout << "Enter number2 for operation: ";
    std::cin >> number2;
}

// Function to calculate the result
int CalculateResult(char userChoice, int number1, int number2, int &result) {
    // Perform the appropriate calculation
    if (userChoice == '+') {
        result = number1 + number2;
    } else if (userChoice == '-') {
        result = number1 - number2;
    } else if (userChoice == '*') {
        result = number1 * number2;
    } else if (userChoice == '/') {
        if (number2 != 0) {
            result = number1 / number2;
        } else {
            std::cout << "Error: Division by zero is not allowed." << std::endl;
            return 1; // Exit with error code
        }
    } else {
        std::cout << "Invalid operation." << std::endl;
        return 1; // Exit with error code
    }

    return 0; // Successful execution
}

// Function to print the calculation result
void PrintResult(int number1, char userChoice, int number2, int result) {
    std::cout << "Result: " << number1 << " " << userChoice << " " << number2 << " = " << result << std::endl;
    std::cout << "---------------------------------" << std::endl;
}

void ContinueCalculation(char ContinueCalc) {
        std::cout << "Would you like to perform another calculation? (y/n): ";
        std::cin >> ContinueCalc;

}

// Main function
int main() {
    int number1;
    int number2;
    char userChoice;
    int result = 0;
    char ContinueCalc = 'y';

    // Display the calculator
    PrintCalculator();

    // Input values and operation
    EnterValues(number1, number2, userChoice);

    // Perform the appropriate calculation and check for errors
    if (CalculateResult(userChoice, number1, number2, result) != 0) {
        return 1; // Exit if an error occurred
    }

    // Display the result
    PrintResult(number1, userChoice, number2, result);

    // Ask if the user wants to continue
    ContinueCalculation(ContinueCalc);

    // inserting loop
    while (ContinueCalc == 'y' || ContinueCalc == 'Y') {
        // Input values and operation
        EnterValues(number1, number2, userChoice);
        CalculateResult(userChoice, number1, number2, result);
        PrintResult(number1, userChoice, number2, result);
        ContinueCalculation(ContinueCalc);
    break;
    }
    return 0;
}
