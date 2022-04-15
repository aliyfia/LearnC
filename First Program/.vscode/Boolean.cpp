#include <iostream>

bool RedLight{true};
bool GreenLight{true};
bool YellowLight{true};

int main()
{
    if (RedLight == true)
    {
        std::cout << "Please Stop" << std::endl;
    }
    else
    {
        std::cout << "Go Stright" << std::endl;
    }

    std::cout << "___________________________________________" << std::endl;

    if (GreenLight == true)
    {
        std::cout << "Go stright" << std::endl;
    }
    else
    {
        std::cout << "Please Stop" << std::endl;
    }
}