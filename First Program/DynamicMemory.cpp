#include <iostream>
using namespace std;

int main()
{
    int Number{10};
    int *P_Number = &Number;

    cout << endl;

    cout << " Pointer and Address : \n";
    cout << " Number    = " << Number << endl;
    cout << " P_Number  = " << P_Number << endl;
    cout << " &Number   = " << &Number << endl;
    cout << " *P_Number = " << *P_Number << endl;

    // dynamic allocate memory

    int *P_Number2{nullptr};
    P_Number2 = new int; // store in dynamic memory in heap
    *P_Number2 = 90;     // writting in dynamic memory
    cout << endl;
    cout << "Dynamic allocate memory = " << endl;
    cout << "P_Number = " << P_Number2 << endl;
    cout << "P_Number = " << *P_Number2 << endl;
    // reseting memory

    delete P_Number2;
    P_Number2 = nullptr;
    P_Number2 = new int(123); //new allocate
    *P_Number2 = 123;
    cout << endl;
    cout << "Dynamic allocate memory = " << endl;
    cout << "P_Number = " << P_Number2 << endl;
    cout << "P_Number = " << *P_Number2 << endl;

    return 0;
}