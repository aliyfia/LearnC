#include <iostream>

using namespace std;

int main()
{

    for (size_t i = 0; i < 10000; i++) // be carfull your program goonna not respond , but u can restart it and doing fine
    {
        try
        {
            int* data = new int [10000];
        }
        catch (const std::exception &ex)
        {
            cout << "There is somthing worng" << ex.what() << endl;
        }
    }
    cout << "Program Going Well \n";
}