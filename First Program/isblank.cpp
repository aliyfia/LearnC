#include <iostream>
using namespace std; // for cout <<

int main()
{
    cout << "Testing blank Character " << endl;

    int BlankCharacter{};
    char Message[]{"Lets try count blank character. Guess how many character there is gonna count"};
    cout << Message << endl;
    for (size_t i = 0; i < size(Message); i++)
    {
        if (isblank(Message[i]))
        {
            cout << "Hi I found blank character = " << i << endl;
            BlankCharacter++;
        }
    }
    cout << "Total blank character = " << BlankCharacter << endl;
}