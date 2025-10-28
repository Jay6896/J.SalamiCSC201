#include <iostream>

using namespace std;

int main()
{
    double val1;
    double rate;
    double total;
    cout << "Please input the money amount you would like to spend here and I will tell you the tax you would be paying \nIt is at a 6% rate";
    cout << "\n\nYour money amount is: ";
    cin >> val1;

    rate = val1 * 0.06;
    total = val1 + rate;

    cout << "\nYour total purchase rate at a 6% rate is: N" << total;
    cout << "\n\n";
}