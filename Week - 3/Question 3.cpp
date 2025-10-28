#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double opposite, adjacent, sum, hypotenuse;
    cout << "Hypotenuse Calculator\n_____________________\n\nPlease input the value of the length of the opposite side of a triangle: ";
    cin >> opposite;
    cout << "\nPlease input the value of the length of the adjacent side of a triangle: ";
    cin >> adjacent;
    sum = (opposite * opposite) + (adjacent * adjacent);
    hypotenuse = sqrt(sum);
    cout << "\nThe Hypotenuse of the triangle with your values is: " << hypotenuse;
}