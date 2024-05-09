#include <iostream>

int main() {
 
 //declaring variables for the calculation
  int math_ects;
  int biology_ects;
  int physics_ects;
  std::string mathgrade;
  std::string biograde;
  std::string physicsgrade;
  double math_point;
  double bio_point;
  double physics_point;
  double gpa;


//asking the mathematic credits from the user and the mathematics grade
std::cout << "Enter the number of ECTS for mathematics: \n";
std::cin >> math_ects;
std::cout << "Enter the grade you received for mathematics, choose between A+, A, A-, B+, B, B-, C+, C, D and F: \n";
std::cin >> mathgrade;

if (mathgrade == "A+") {
    math_point = 4 ;
}

else if (mathgrade == "A") {
        math_point = 3.75;
}
            
else if (mathgrade == "A-") {
         math_point = 3.5;
}

else if (mathgrade == "B+") {
         math_point = 3.25;
}

else if (mathgrade == "B") {
         math_point = 3.0;
}

else if (mathgrade == "B-") {
         math_point = 2.75;
}

else if (mathgrade == "C+") {
         math_point = 2.5;
}

else if (mathgrade == "C") {
         math_point = 2.25;
        
}

else if (mathgrade == "D") {
         math_point = 2.00;
}

else
math_point = 0;

std::cout << "Enter the number of ECTS for biology: \n";
std::cin >> biology_ects;
std::cout << "Enter the grade you received for biology, choose between A+, A, A-, B+, B, B-, C+, C, D and F: \n";
std::cin >> biograde;

if (biograde == "A+") {
    bio_point = 4 ;
}

else if (biograde == "A") {
     bio_point = 3.75;
}
            
else if (biograde == "A-") {
     bio_point = 3.5;
}

else if (biograde == "B+") {
         bio_point = 3.25;
}

else if (biograde == "B") {
         bio_point = 3.0;
}

else if (biograde == "B-") {
         bio_point = 2.75;
}

else if (biograde == "C+") {
         bio_point = 2.5;
}

else if (biograde == "C") {
         bio_point = 2.25;
        
}

else if (biograde == "D") {
         bio_point = 2.00;
}
else
 bio_point = 0;
            
std::cout << "Enter the number of ECTS for physics: \n";
std::cin >> physics_ects;
std::cout << "Enter the grade you received for physics, choose between A+, A, A-, B+, B, B-, C+, C, D and F: \n";
std::cin >> physicsgrade;
     
if (physicsgrade == "A+") {
    physics_point = 4 ;
}

else if (physicsgrade == "A") {
         physics_point = 3.75;
}
            
else if (physicsgrade == "A-") {
    physics_point = 3.5;
}

else if (physicsgrade == "B+") {
         physics_point = 3.25;
}

else if (physicsgrade == "B") {
         physics_point = 3.0;
}

else if (physicsgrade == "B-") {
         physics_point = 2.75;
}

else if (physicsgrade == "C+") {
         physics_point = 2.5;
}

else if (physicsgrade == "C") {
         physics_point = 2.25;
        
}

else if (physicsgrade == "D") {
         physics_point = 2.00;
}


else
    physics_point = 0;

gpa = ((math_ects * math_point)
+ (biology_ects * bio_point)
+ (physics_ects * physics_point))/(math_ects+biology_ects+physics_ects);

std::cout <<"Your GPA credit is " << gpa << "\n";


 return 0;          
            
            }
