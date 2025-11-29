#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int i = 0;
    int sum = 0;

    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            sum += i + j;
            cout << sum << "\n";
        }
    }
}