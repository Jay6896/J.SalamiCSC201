#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int number1, number2, temporary, userval, ans;

    // or seed = time(0)
    srand(time(0));
    number1 = rand() % 10;
    number2 = rand() % 10;

    if (number1 < number2)
    {
        temporary = number1;
        number1 = number2;
        number2 = temporary;
    }

    ans = number1 - number2;

    cout << "What is number1 - number2? \n";
    cin >> userval;

    if (userval == ans)
    {
        cout << "You are correct! \nThe answer is " << ans;
    }
    else
    {
        cout << "You are wrong! \nThe answer is " << ans;
    }
}