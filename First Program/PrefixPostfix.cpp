#include <iostream>

int main()
{
    int Value{5};
    Value = Value + 1;
    std::cout << "Result 1 is = " << Value << std::endl;

    Value = 5;
    Value = Value - 1;
    std::cout << "Result 2 is = " << Value << std::endl;

    Value = 5;
    Value++;
    std::cout << "Result 3 is = " << Value << std::endl;

    Value = 5;
    Value--;
    std::cout << "Result 4 is = " << Value << std::endl;

    Value = 5;
    ++Value;
    std::cout << "Result 4 is = " << Value << std::endl;

    Value = 5;
    --Value;
    std::cout << "Result 4 is = " << Value << std::endl;

    std::cout << "__________________________________________________________" << Value << std::endl;

    int a = 5;
    std::cout << "Post Increment" << std::endl;
    std::cout << "Isi variabel a: " << a << std::endl;
    std::cout << "Isi variabel a: " << a++ << std::endl;
    std::cout << "Isi variabel a: " << a << std::endl;

    std::cout << std::endl;

    int b = 5;
    std::cout << "Pre Increment" << std::endl;
    std::cout << "Isi variabel b: " << b << std::endl;
    std::cout << "Isi variabel b: " << ++b << std::endl;
    std::cout << "Isi variabel b: " << b << std::endl;

    a = 5;
    std::cout << "Post Decrement" << std::endl;
    std::cout << "Isi variabel a: " << a << std::endl;
    std::cout << "Isi variabel a: " << a-- << std::endl;
    std::cout << "Isi variabel a: " << a << std::endl;

    std::cout << std::endl;

    b = 5;
    std::cout << "Pre Decrement" << std::endl;
    std::cout << "Isi variabel b: " << b << std::endl;
    std::cout << "Isi variabel b: " << --b << std::endl;
    std::cout << "Isi variabel b: " << b << std::endl;

    return 0;
}