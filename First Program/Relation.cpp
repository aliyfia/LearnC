#include <iostream>


int main() {
    int A {5};
    int B {10};

    std::cout<<"Number A = "<< A <<std::endl;
    std::cout<<"Number B = "<< B <<std::endl;

    std::cout<<std::boolalpha; // to show false or true

    std::cout<< "Number A < Number B = "<< (A < B) << std::endl; // less than
    std::cout<< "Number A > Number B = "<< (A > B) << std::endl; // more than
    std::cout<< "Number A <= Number B = "<< (A <= B) << std::endl; // equal less then
    std::cout<< "Number A >= Number B = "<< (A >= B) << std::endl; // equal more than 
    std::cout<< "Number A == Number B = "<< (A == B) << std::endl; // equal to
    std::cout<< "Number A != Number B = "<< (A != B) << std::endl; // not equal


}