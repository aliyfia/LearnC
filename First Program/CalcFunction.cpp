#include <iostream>

int SumNumber (int Number1, int Number2) {
    int resultSum = Number1 + Number2;
    return resultSum;
}

int main(){
    int A = {5}; //statement
    int B = {2};

    std::cout << "A = " << A <<std::endl;
    std::cout << "B = " << B <<std::endl;

    int calc = A + B;
    std::cout << "Calculation is " << calc <<std::endl;
    
    int calc2 = SumNumber(30,3);
    std::cout << "SumNumber = " << calc2 << std::endl;

    std::cout << "Other Sum Number = " << SumNumber(39,213) << std::endl;

    return 0;

}