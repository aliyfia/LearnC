#include <iostream>

using namespace std;

int main()
{
    string Alpahabet[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}};
    cout << Alpahabet[0][2] << endl;
    cout << "____________________________________________"<< endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << Alpahabet[i][j] << "\n";
        }
    }
}
