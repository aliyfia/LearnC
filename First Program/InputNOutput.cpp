#include <iostream>

int Age;
std::string Name;
std::string Full_Name;
int main()
{
    std::cout << "Please input your name call : " << std::endl; 
    std::cin >> Name;       //Input W/O space
    std::cout << "Please input your full name : " << std::endl; 
    std::getline(std::cin, Full_Name);       //Input with space
    std::cout << "Please input your age : " << std::endl; 
    std::cin >> Age;
//    std::cout<< "Your call name is " << Name << " and your age is " << Age << "years old" << std::endl;
    std::cout<< "Name Call is : " << Name << std::endl;
    std::cout<< "Full Name is : " << Full_Name << std::endl;
    std::cout<< "Your Age is : " << Age << " years old" << std::endl; 


}
