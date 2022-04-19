#include <iostream>

using namespace std;

int main()
{

    string Nama[3] = {"Afif", "Aliyfia", "Alfian"};

    cout << Nama[0] << endl;
    cout << Nama[1] << endl;
    cout << Nama[2] << endl;
    int LenghtOfArray = sizeof(Nama) / sizeof(string);
    cout << LenghtOfArray <<"\n";

    cout << "Input Array  0 : \n";
    cin >> Nama[0];
    cout << Nama[0] << endl;
    cout << Nama[1] << endl;
    cout << Nama[2] << endl;
}