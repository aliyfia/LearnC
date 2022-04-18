#include <iostream>

int main()
{

    bool A{true};
    bool B{false};
    bool C{true};

    std::cout << std::boolalpha;
    std::cout << "Logic A = " << A << std::endl;
    std::cout << "Logic B = " << B << std::endl;
    std::cout << "Logic C = " << C << std::endl;

    std::cout << "A && B = " << (A && B) << std::endl;
    std::cout << "A && C = " << (A && C) << std::endl;
    std::cout << "A && B && C = " << (A && B && C) << std::endl;

    std::cout << "A || B = " << (A || B) << std::endl;
    std::cout << "A || C = " << (A || C) << std::endl;
    std::cout << "A || B || C = " << (A || B || C) << std::endl;

    std::cout << "!A = " << (!A) << std::endl;
    std::cout << "!B = " << (!B) << std::endl;
    std::cout << "!C = " << (!C) << std::endl;
}