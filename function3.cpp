#include <iostream>
using namespace std;
int A;
int B;

void getUserInput()
{
std::cout << "Give me one integer for A:"<< std::endl;
std::cin >> A;
std::cout << "Give me one integer for B:"<< std::endl;
std::cin >> B;
}

void printSum()
{
std::cout << "A + B is " << A+B << std::endl;
}

void printProduct()
{
std::cout << "A^2 + 2*A*B + B^2 is " << A*A+2*A*B+B*B << std::endl;
}

void executeFunctions()
{
getUserInput();
printSum();
printProduct();
}

int main ()
{
// Repeat the set of functions three times
    for (int i = 0; i < 3; ++i) {
        executeFunctions();
        std::cout << "-------" << std::endl;  
    }
    return 0;
}