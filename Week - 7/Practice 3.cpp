#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    arr[7] = 7;

    cout << arr[7];

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i];
    }
}