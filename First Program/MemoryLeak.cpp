#include <iostream>

using namespace std;

int main()
{
    int *P_Number{new int{56}};
    int Number = {123};
    P_Number = &Number; // stacked with first addras so gonna crash

    cout << "Program ending well \n";

    /// another example
    int *P_Number2{new int{56}}; // use the pointer
    P_Number2 = new int{12};
    delete P_Number2;
    P_Number2 = nullptr;

    cout << "Program ending well \n";
    return 0;

    // Another Example Nexted Memory

    {
        int *P_Number2{new int{56}}; // use the pointer
    }
}