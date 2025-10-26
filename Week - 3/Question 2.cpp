#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int userinp;

    cout << "\n\nHello, Please input your age and i'll tell you if you're eligible or not for this program \nPlease input your age: ";
    cin >> userinp;

    if (userinp >= 18)
    {
        cout << "You are an adult, you are eligible\n\n";
    }

    if (userinp < 18)
    {
        cout << "You are not an adult, you are not eligible\n\\n";
    }
}