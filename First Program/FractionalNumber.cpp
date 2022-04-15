#include <iostream>
#include <iomanip>

int main(){

    float number1 {1.12345678901234567890f};
    double number2 {1.12345678901234567890};
    long double number3 {1.12345678901234567890L};

    std::cout << "size of number 1 (Float) = " << sizeof(number1) <<std::endl;
    std::cout << "size of number 2 (double) = " << sizeof(number2) <<std::endl;
    std::cout << "size of number 3 (long double) = "<< sizeof(number3) <<std::endl;

}