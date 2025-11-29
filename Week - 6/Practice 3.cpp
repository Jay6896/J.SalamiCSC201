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
        for (int j = 2; j <= 3; j++)
        {
            for (int k = 1; k <= 2; k++)
            {
                sum += i + j + k;
                cout << "i Value is " << i;
            }
        }
    }

    cout << "\n\nFinal sum is " << sum;
}