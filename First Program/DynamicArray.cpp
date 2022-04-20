#include <iostream>
using namespace std;

int main()
{
    size_t Size{10};

    double *P_Salary{new double[Size]};                         // contain JUNK number
    int *P_Student{new (nothrow) int[Size]{}};                  // contain zero 0 number
    double *P_Score{new (nothrow) double[Size]{1, 2, 3, 4, 5}}; // contain that number and the rest will be zero 0

    // chack array
    if (P_Score)
    {
        cout << "Size of the Score Array = " << sizeof(P_Score) << endl;
        cout << "Allocate memory succesfully \n";

        for (size_t i = 0; i < Size; i++)
        {
            cout << "Value Array = " << P_Score[i] << " __ " << *(P_Score + i) << endl;
        }

        /* code */
    }

    // static array vs dynamic array

    cout<< "__________________________________________________"<< endl;
    int StaticArray [10] { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // static array
    cout << "Score size " << size(StaticArray) << endl;
    for (auto s : StaticArray)
    {
        cout << "Value " << s << endl;
    }

    int* DynamicArray = new int[10]   { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; 
 //   cout << "Score size " << size(DynamicArray) << endl;  // this syntax cant be use in dynamic array
 /*   for (auto s : DynamicArray)
    {
        cout << "Value " << s << endl;
    }
*/
    // how to relese memory array

    delete[] P_Salary;
    P_Salary = nullptr;
    delete[] P_Score;
    P_Score = nullptr;
    delete[] P_Student;
    P_Student = nullptr;

    return 0;
}