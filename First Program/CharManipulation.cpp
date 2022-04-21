#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const char Message[]{"Lets say there is character here."};
    const char *Message2{"Lets say there is character here."};

    cout << Message << endl;

    cout << " strlen of the message         = " << strlen(Message) << endl;
    cout << " Size of the message           = " << sizeof(Message) << endl; // include space

    cout << " strlen of the Message 2       = " << strlen(Message2) << endl;
    cout << "size of the Message 2          = " << sizeof(Message2) << endl;

    cout << "______________________________________________________\n";
    cout << "\n";
    const char *Message3{"Jawa"};
    const char *Message4{"Jiwa"};

    const char Message5[]{"Jiwa"};
    const char Message6[]{"Jawa"};

    cout << "strcmp (" << Message3 << " , " << Message4 << ") = " << strcmp(Message3, Message4) << endl;
    cout << "strcmp (" << Message5 << " , " << Message5 << ") = " << strcmp(Message5, Message6) << endl;

    cout << "______________________________________________________\n";
    cout << "\n";
    const char *Message7{"Jawa"};
    const char *Message8{"Jiwa"};

    const char Message9[]{"Jiwa"};
    const char Message10[]{"Jawa"};
    size_t n {3};

    cout << "strncmp (" << Message7 << " , " << Message8 << ") = " << strncmp(Message7, Message8,n) << endl;
    cout << "strncmp (" << Message9 << " , " << Message10 << ") = " << strncmp(Message9, Message10,n) << endl;

    Message7 = "Aww123";
    Message8 = "Aww321";
    cout << "strncmp (" << Message7 << " , " << Message8 << ") = " << strncmp(Message7, Message8,n) << endl;

    cout << "______________________________________________________\n";
    cout << "\n";




    
    return 0;
}