#include <iostream>
using namespace std;

int main()
{

    int loop;
    cout << "Input Your Loop ?\n";
    cin >> loop;
    int i = 0;
    while (i < loop)
    {
        cout << "Looping " << i++ << "\n";
        /* code */
    }

    cout << "_____________________________________\n";
    i = 0;
    do
    {
        cout << "do Looping " << i++ << "\n";
    } while (i < loop);
    
}