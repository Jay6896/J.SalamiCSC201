#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    /*
    // LocPart

    // Version one
    //  Input Layer
    double pi = 3.142;
    double r = 20;

    // Process Layer
    double area = pi * r * r;

    // Output Layer
    cout << "The Area of radius " << r << " is = " << area;
    */

    // Version two
    double pi = 3.142;
    double r;

    cout << "Hello, Please input a radius value to find the area: ";
    cin >> r;
    double area = pi * r * r;

    cout << "\n\nThe area of " << r << " is = " << area << "\n";
}