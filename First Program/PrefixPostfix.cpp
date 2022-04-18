#include <iostream>

int main()
{
    int Value{5};
    Value = Value + 1;
    std::cout << "Result 1 is = " << Value << std::endl;

    Value =5;
    Value = Value - 1;
    std::cout << "Result 2 is = " << Value << std::endl;

    Value =5;
    Value++;
    std::cout << "Result 3 is = " << Value << std::endl;


    Value =5;
    Value--;
    std::cout << "Result 4 is = " << Value << std::endl;

    Value =5;
    ++Value;
    std::cout << "Result 4 is = " << Value << std::endl;

    Value =5;
    --Value;
    std::cout << "Result 4 is = " << Value << std::endl;

}