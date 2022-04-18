#include <iostream>

int main()
{
    int A{2};
    int B{3};

    if (A < B)
    {
        std::cout << "A less than B" << std::endl;
    }
    else
    {
        std::cout << "A not less than B" << std::endl;
    }

    std::string Status, Lamp, Police;
    std::cout << "Please Lamp Condition : " << std::endl;
    std::cin >> Lamp; // Input W/O space

    if ((Lamp == "Red") || (Lamp == "red"))
    {
        std::cout << "Are you gonna go ? : " << std::endl;
        std::cin >> Status; // Input W/O space
        if ((Status == "Go") || (Status == "go") || (Status == "GO"))
        {
            std::cout << "Is There Is any police around ? : " << std::endl;
            std::cin >> Police; // Input W/O space
            if ((Police == "Yes") || (Police == "yes") || (Police == "YES"))
            {
                std::cout << "You fuck up a lot" << std::endl;
            }
        }
        else if ((Status == "Stop") || (Status == "stop") || (Status == "STOP"))
        {
            std::cout << "You're right go stright" << std::endl;
        }
    }
    else if ((Lamp == "Green") || (Lamp == "green"))
    {
        std::cout << "Are you gonna go ? : " << std::endl;
        std::cin >> Status; // Input W/O space
        if ((Status == "Go") || (Status == "go") || (Status == "GO"))
        {
            std::cout << "You're right go stright" << std::endl;
        }
        else if ((Status == "Stop") || (Status == "stop") || (Status == "STOP"))
        {
            std::cout << "Is There Is any police around ? : " << std::endl;
            std::cin >> Police; // Input W/O space
            if ((Police == "Yes") || (Police == "yes") || (Police == "YES"))
            {
                std::cout << "You fuck up a lot" << std::endl;
            }
        }
    }
}