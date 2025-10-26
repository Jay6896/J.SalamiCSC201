#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int userinp;

    cout << "\n\nHello, Please input a number and i'll tell you if its a multiple of 5 or it is even \nPlease input your number: ";
    cin >> userinp;

    if (userinp % 5 == 0)
    {
        cout << "HiFive!\n\n";
    }

    if (userinp % 2 == 0)
    {
        cout << "HiEven!\n\\n";
    }
}