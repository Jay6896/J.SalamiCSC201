#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double account_bal, annual_int, balance;
    cout << "Interest Calculation Program \n\nPlease input your starting balance: ";
    cin >> account_bal;

    cout << "\nPlease input your annual interest rate in percentage: ";
    cin >> annual_int;
    annual_int = annual_int / 100;

    balance = (account_bal * annual_int) + account_bal;
    cout << "\nYour balance after one year is: " << balance;

    account_bal = balance;

    balance = (account_bal * annual_int) + account_bal;
    cout << "\nYour balance after two year is: " << balance;
}