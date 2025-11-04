#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int r = 1;
    int sum = 0;

    // while (sum < 10)
    // {
    //     cout << r << " + " << sum << " = ";
    //     sum = r + sum;
    //     cout << sum << "\n";
    // }

    while (r < 10)
    {
        cout << r << " + " << sum << " = ";
        sum = r + sum;
        cout << sum << "\n";
        r++;
    }
}