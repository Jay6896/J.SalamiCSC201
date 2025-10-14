#include <iostream>

using namespace std;

int main()
{
    int val1;
    int val2;
    int temp;

    cout << "Please input 2 numbers and I will swap them for you";
    cout << "\n\nYour first number is: ";
    cin >> val1;

    cout << "\nYour second number is: ";
    cin >> val2;

    temp = val1;
    val1 = val2;
    val2 = temp;

    cout << "\n\nYour numbers have been swapped successfully! \nYour first number is now " << val1 << " and your second value is now " << val2;
    cout << "\n\n";
}