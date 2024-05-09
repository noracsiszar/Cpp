// The factorial calculator
#include <iostream>
char ContinueCalculation() {
        char ContinueFlag;
        std::cout << "Would you like to perform another calculation? (y/n): ";
        std::cin >> ContinueFlag;
        return ContinueFlag;
}


int main () {
char ContinueFlag = 'y';
int number;   
int factorial;

do {
        std::cout << "This is the factorial calculator." << std::endl;
        std::cout << "Enter a number you wish to use for factorial calculation: ";
        std::cin >> number;

        if (number < 0) {
            std::cout << "Factorials are not defined for negative numbers." << std::endl;
        } else {
            factorial = 1;  // Initialize factorial to 1
            for (int i = 1; i <= number; ++i) {
                factorial *= i;
            }
            std::cout << "The factorial of " << number << " is " << factorial << std::endl;
        }

        ContinueFlag = ContinueCalculation();
    } while (ContinueFlag == 'y' || ContinueFlag == 'Y');

    std::cout << "You exited the program." << std::endl;

    return 0;
}