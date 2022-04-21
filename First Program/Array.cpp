#include <iostream>

using namespace std;

int main()
{

    string Nama[3] = {"Afif", "Aliyfia", "Alfian"};

    cout << Nama[0] << endl;
    cout << Nama[1] << endl;
    cout << Nama[2] << endl;
    int LenghtOfArray = sizeof(Nama) / sizeof(string); //get size of array
    int LenghtOfArray2 = size(Nama);
    cout << LenghtOfArray2 << endl;
    cout << LenghtOfArray <<"\n";

    for (int i = 0; i < LenghtOfArray; i++)
    {
        cout<< "Array " << i << " " << Nama[i] << endl;

    }
    

    cout << "Input Array : \n"; 
    cin >> Nama[0];
    cout << "________________________________________________________\n";
    cout << Nama[0] << endl;
    cout << Nama[1] << endl;
    cout << Nama[2] << endl;


}