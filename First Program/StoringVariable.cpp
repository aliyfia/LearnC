#include <iostream>



int main() {
    int A=2;
    int B=3;
    int C;   //random number
    int D {2};
    int E {4};
    int F {};
    int G{D+B};

    std::cout<< "A = "<< A << std::endl;
    std::cout<< "B = "<< B << std::endl;
    std::cout<< "C = "<< C << std::endl;
    std::cout<< "D = "<< D << std::endl;
    std::cout<< "E = "<< E << std::endl;
    std::cout<< "F = "<< F << std::endl;
    std::cout<< "G = "<< G << std::endl;
}