#include <iostream>

int main()
{
    auto var1{12};
    auto var2{122.3};
    auto var3{14.0f};
    auto var4{12.1l};
    auto var5{'e'};
    auto var6{122u}; //unsigned
    auto var7{12ul}; // unsigned long
    auto var8{133ll}; //longlong

    std::cout << var1 << " size of = "<<sizeof(var1)<<std::endl;
    std::cout << var2 << " size of = "<<sizeof(var2)<<std::endl;
    std::cout << var3 << " size of = "<<sizeof(var3)<<std::endl;
    std::cout << var4 << " size of = "<<sizeof(var4)<<std::endl;
    std::cout << var5 << " size of = "<<sizeof(var5)<<std::endl;
    std::cout << var6 << " size of = "<<sizeof(var6)<<std::endl;
    std::cout << var7 << " size of = "<<sizeof(var7)<<std::endl;
    std::cout << var8 << " size of = "<<sizeof(var8)<<std::endl;


}