#include <iostream>

using namespace std;

int main()
{
    int Status;

    cout << "Switch Case Section\n";
    cout << "Input Your Status ?\n";
    cin >> Status;

    if (Status <= 0 || Status >= 4)
    {
        cout << "Input Error\n";
    }

    switch (Status)
    {
    case 1:
        cout << "Print Status 1\n";
        break;
    case 2:
        cout << "Print Status 2\n";
        break;
    case 3:
        cout << "Print Status 3\n";
        break;
    default:
        break;
    }
}