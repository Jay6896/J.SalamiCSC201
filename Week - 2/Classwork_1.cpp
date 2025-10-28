#include <iostream>

using namespace std;

int main()
{
    // Second Part
    double val1;
    double val2;

    cout << "Input 2 numbers and I will give you the sum, difference and product of 2 numbers which you would input";

    cout << "\n\nPlease input your first number: ";
    cin >> val1;

    cout << "\nPlease input your second number: ";
    cin >> val2;

    double sum = val1 + val2;
    double diff = val1 - val2;
    double prod = val1 * val2;

    cout << "\nThe sum of your numbers " << val1 << " and " << val2 << " is: " << sum;
    cout << "\nThe difference of your numbers " << val1 << " and " << val2 << " is: " << diff;
    cout << "\nThe product of your numbers " << val1 << " and " << val2 << " is: " << prod;
    cout << "\n\n";
}