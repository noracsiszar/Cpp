//This is a program where the user enters a string 
//The string gets turned around by the program

#include <iostream>
#include <string> //std reverse only works on string not on char
#include <algorithm> // for std::reverse
int main () {

std::string text;
std::cout << "Welcome to the string reverse program!" << std::endl;
std::cout << "Enter a string you would like to see reversed." << std::endl;
std::cin >> text; 

std::string reversedText = text;
std::reverse(reversedText.begin(), reversedText.end());
std::cout << "The text you entered is " << text << ".  Reversed this is: " << reversedText << "." << std::endl;

return 0;
}
