#include <iostream>
#include <string>

using namespace std;

int age, number_game, number_stage1_0, number_stage1_1;
string Answer_Stage1;
void Age_Passthrough(int age)
{
    if (age < 20)
    {
        cout << "Youre too young to enter this stage\n";
    }
    else
    {
        cout << "Lets enter the stage.\n";
    }
}
void Stage1(int number_stage1_0, int number_stage1_1)
{
    cout << "which the bigest number of your input ?\n";
    cout << "A Number = " << number_stage1_0 << endl;
    cout << "B Number = " << number_stage1_1 << endl;
    cout << "Enter your answer ? A or B or Equal ";
    cin >> Answer_Stage1;
    if (number_stage1_0 > number_stage1_1)
    {
        if (Answer_Stage1 == "A")
        {
            cout << "Congratulations you win \n";
        }
        else
        {
            cout << "You lose \n";
        }
    }
    else if (number_stage1_0 == number_stage1_1)
    {
        if (Answer_Stage1 == "Equal" || Answer_Stage1 == "equal" || Answer_Stage1 == "EQUAL")
        {
            cout << "Congratulations you win \n";
        }
        else
        {
            cout << "You lose \n";
        }
    }else {
        if (Answer_Stage1 == "B")
        {
            cout << "Congratulations you win \n";
        }
        else
        {
            cout << "You lose \n";
        }
    }
}

int main()
{

    cout << "Enter your age: " << endl;
    cin >> age;
    Age_Passthrough(age);

    cout << endl;
    cout << "______________________________________________________" << endl;
    cout << "Stage Number 1" << endl;
    cout << "______________________________________________________" << endl;
    cout << "Please enter your number here = " << endl;
    cin >> number_stage1_0;
    cout << "Please enter your second number here = " << endl;
    cin >> number_stage1_1;
    Stage1(number_stage1_0, number_stage1_1);
    
    
    return 0;
}