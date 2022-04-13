#include <iostream>

int main(){
    auto result = (10 <=> 20) > 1;
    std::cout << result << std::endl;
}