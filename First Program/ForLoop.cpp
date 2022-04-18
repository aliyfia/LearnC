#include <iostream>
using namespace std;

int main()
{
    int Number;
    int iteration;
    cout << "How many you wanna print Satru ?\n";
    cin >> iteration;

    for (int i = 0; i < iteration; i++)
    {
        cout << "Satru " << Number++ << "\n";
    }
}