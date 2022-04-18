#include <iostream>

int main() {
    int Var1 {20};
    int Var2 {5};

    int Result1 = Var1 + Var2;
    int Result2 = Var1 - Var2;
    int Result3 = Var1 * Var2;
    int Result4 = Var1 / Var2;
    int Result5 = Var1 % Var2;

    std::cout<< "Result 1 = " << Result1 <<std::endl;
    std::cout<< "Result 2 = " << Result2 <<std::endl;
    std::cout<< "Result 3 = " << Result3 <<std::endl;
    std::cout<< "Result 4 = " << Result4 <<std::endl;
    std::cout<< "Result 5 = " << Result5 <<std::endl;
    
}