#include <iostream>
#include <iomanip>

int main(){

    float number1 {1.12345678901234567890f};
    double number2 {1.12345678901234567890};
    long double number3 {1.12345678901234567890L};

    std::cout << "size of number 1 (Float)          = " << sizeof(number1)  << "    // "<< number1 << std::endl;
    std::cout << "size of number 2 (double)         = " << sizeof(number2) << "     // " << number2 << std::endl;
    std::cout << "size of number 3 (long double)    = "<< sizeof(number3) << "      // "<< number3 << std::endl;
    std::cout << "______________________________________"<<std::endl;
    
    
    long double number4 {1.23323e2};
    std::cout <<"Number 4 is = " << number4 <<std::endl; 

    std::cout <<  std::setprecision(20);
    std::cout << "size of number 1 (Float)          = " << sizeof(number1)  << "    // "<< number1 << std::endl; // only reach 7 digit 
    std::cout << "size of number 2 (double)         = " << sizeof(number2) << "     // " << number2 << std::endl; // only reach 15 digit
    std::cout << "size of number 3 (long double)    = "<< sizeof(number3) << "      // "<< number3 << std::endl; // can be more than 15+++





}