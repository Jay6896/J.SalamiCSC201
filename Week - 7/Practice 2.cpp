#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int arr[5] = {12, 10, 13, 14, 9};

    int size = sizeof(arr) / sizeof(arr[0]);
    cout << size;
}