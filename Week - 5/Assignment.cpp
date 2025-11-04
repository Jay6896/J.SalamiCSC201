#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int userval;
    cout << "Welcome! Please input your birth month and i'll tell you your Zodiac Sign Animal! ";
    cin >> userval;

    switch (userval)
    {
    case 0:
        cout << "Monkey";
        break;

    case 1:
        cout << "Rooster";
        break;

    case 2:
        cout << "Dog";
        break;
    case 3:
        cout << "Pig";
        break;

    case 4:
        cout << "Rat";
        break;

    case 5:
        cout << "Ox";
        break;
    case 6:
        cout << "Tiger";
        break;

    case 7:
        cout << "Rabbit";
        break;

    case 8:
        cout << "Dragon";
        break;
    case 9:
        cout << "Snake";
        break;

    case 10:
        cout << "Horse";
        break;

    case 11:
        cout << "Sheep";
        break;
    default:
        cout << "Number out of range!";
        break;
    }
}