#include <iostream>

int main () {
    int a {5};
    int b {3};
    int c {2};
    int d {6};
    int e {8};
    int f {4};
    int g {9};


    int result = a + b * c - d / e -f + g;
    float result2 = a + (b * c) - (d / e) -f + g;
    float result3 = b * c - d / e + a  -f + g;

    std::cout <<"Result is = "<<result <<std::endl;
    std::cout <<"Result is = "<<result2 <<std::endl;
    std::cout <<"Result is = "<<result3 <<std::endl;
    return 0;

}