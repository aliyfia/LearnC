#include <iostream>
using namespace std;

int main() {
    int Number {10};

    int* P_Number = &Number;

    cout<<endl;

    cout << " Pointer and Address : \n";
    cout << " Number    = " << Number<< endl;
    cout << " P_Number  = " << P_Number<< endl;
    cout << " &Number   = " << &Number <<endl;
    cout << " *P_Number = " << *P_Number << endl;

    
}