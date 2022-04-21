#include <iostream>
using namespace std; // for cout <<

int main()
{
    cout << "Testing blank Character " << endl;

    int BlankCharacter{};
    int UppercaseCharacter{};
    int LowercaseCharacter{};
    char Message[]{"Lets try count blank character. Guess how many character there is gonna count"};
    cout << Message << endl;
    for (size_t i = 0; i < size(Message); i++)
    {
        if (isblank(Message[i]))
        {
            cout << "Hi I found blank character = " << i << endl;
            ++BlankCharacter;
        }
        if ( isupper(Message[i])) {
            cout << "Hi i found Upper Case Character = " << i << endl;
            UppercaseCharacter++;
        }
        if ( islower(Message[i])) {
            cout << "Hi i found lower Case Character = "<< i << endl;
            LowercaseCharacter++;
        }
    }
    cout << "Total blank character = " << BlankCharacter << endl;
    cout << "Total Upper case character = " << UppercaseCharacter << endl;
    cout << "Total Lower case character = " << LowercaseCharacter << endl;
}