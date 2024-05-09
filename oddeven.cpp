//implementing an odd/event checker
//asking the user for a number and determining if it is odd or even
#include <iostream>


bool IsOdd (int number) {

    return (number % 2!= 0) ; //boolean is true if the number entered is odd
}

char ContinueAnalysis() {
        char ContinueFlag;
        std::cout << "Would you like to perform another analysis? (y/n): ";
        std::cin >> ContinueFlag;
        return ContinueFlag;
}

void AnalyseNumber (int number) {
std::cout << "This is an odd/event number checker." << std::endl;
std::cout << "Enter a number you wish to check." << std::endl;
std::cin >> number;
if (IsOdd(number)) {
std::cout << "The number you entered is:  " << number << ". This number is odd." << std::endl;
}
else
{std::cout << "The number you entered is:  " << number << ". This number is even." << std::endl;

}



}

int main() {
    char ContinueFlag = 'y';
    int number;
    do {
        number = 0;
        AnalyseNumber(number);
        ContinueFlag = ContinueAnalysis();
    } while (ContinueFlag == 'y' || ContinueFlag == 'Y');

std::cout << "You exited the program." << std::endl;

return 0;
}

