#include <iostream>

using namespace std;

int main()
{
    int int_data{20};
    double double_data{30};

    // referance
    int &ref_int_data{int_data};
    double &ref_double_data{double_data};

    cout << "int data           = " << int_data << endl;
    cout << "&int data          = " << &int_data << endl;
    cout << "double data        = " << double_data << endl;
    cout << "&double data       = " << &double_data << endl;

    cout << "_________________________________\n";
    cout << "ref int data       = " << ref_int_data << endl;
    cout << "&Rref int data     = " << &ref_int_data << endl;
    cout << "ref double data    = " << ref_double_data << endl;
    cout << "&ref double data   = " << &ref_double_data << endl;

    cout << endl;

    int_data = 123;
    double_data = 123.123;

    cout << "int data           = " << int_data << endl;
    cout << "&int data          = " << &int_data << endl;
    cout << "double data        = " << double_data << endl;
    cout << "&double data       = " << &double_data << endl;

    cout << "_________________________________\n";
    cout << "ref int data       = " << ref_int_data << endl;
    cout << "&Rref int data     = " << &ref_int_data << endl;
    cout << "ref double data    = " << ref_double_data << endl;
    cout << "&ref double data   = " << &ref_double_data << endl;

    return 0;
}