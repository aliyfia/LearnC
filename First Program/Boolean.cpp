#include <iostream>

bool RedLight{false};
bool GreenLight{true};
bool YellowLight{false};

int main()
{
    /*
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

    std::cout << "___________________________________________" << std::endl;

    if (YellowLight == true)
    {
        std::cout << "Get Ready" << std::endl;
    }
    else
    {
        std::cout << "Please Wait" << std::endl;
    }
    std::cout << "___________________________________________" << std::endl;
*/

    if (RedLight == true && YellowLight == false && GreenLight == false)
    {
        std::cout << "Stop" << std::endl;
    }
    else if (RedLight == false && YellowLight == true && GreenLight == false)
    {
        std::cout << "Get Ready" << std::endl;
    }
    else if (RedLight == false && YellowLight == false && GreenLight == true)
    {
        std::cout << "Go Stright" << std::endl;
    }
    else
    {
        std::cout << "There is somthing wrong with the lamp" << std::endl;
    }
}