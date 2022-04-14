#include <iostream>
#include <string>

int Age, Age2;
std::string Name, Name2;
std::string FullName, FullName2;
int main()
{
    std::cout << "Please input your name call : " << std::endl; 
    std::cin >> Name;       //Input W/O space
    std::cout << "Please input your full name : " << std::endl; 
    std::getline(std::cin, FullName);       //Input with space
    std::cout << "Please input your age : " << std::endl; 
    std::cin >> Age;
//    std::cout<< "Your call name is " << Name << " and your age is " << Age << "years old" << std::endl;
    std::cout<< "Name Call is : " << Name << std::endl;
    std::cout<< "Full Name is : " << FullName << std::endl;
    std::cout<< "Your Age is : " << Age << " years old" << std::endl; 


    std::cout << "Please input your full name : " << std::endl; 
    std::getline(std::cin, FullName2);       //Input with space
    std::cout << "Please input your age : " << std::endl; 

    std::cout<< "Full Name is : " << FullName2 << std::endl;
    std::cout<< "Your Age is : " << Age2 << " years old" << std::endl; 

    std::cerr<< "There is somthing wrong" <<std ::endl;
    std::clog<< "This is just log, i don't know what happend" << std::endl;

    return 0;

}
