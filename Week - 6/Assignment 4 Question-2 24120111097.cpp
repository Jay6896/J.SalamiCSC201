#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

bool verifyPin(int correctPin)
{
    bool checker = false;
    int attempts = 3;
    int attempts_left = 3;
    int user_pin;

    while (attempts > 0)
    {
        cin >> user_pin;
        if (user_pin == correctPin)
        {
            cout << "Successfully Logged In!";
            checker = true;
            break;
        }
        else
        {
            attempts = attempts - 1;
            if (attempts == 0)
            {
                break;
            }
            else
            {
                cout << "\nPlease try again, you have " << --attempts_left << " attempts left: ";
            }

            checker = false;
        }
    }

    return checker;
}

void displayMenu()
{
    cout << "\n\n======== ATM MENU ======== \n";
    cout << "1. View Balance \n";
    cout << "2. Deposit Cash \n";
    cout << "3. Withdraw Cash \n";
    cout << "4. Reset PIN \n";
    cout << "5. Exit \n";
    cout << "-------------------------- \n\n";
    cout << "Please enter your choice: ";
}

double viewBalance(double balance)
{
    cout << "View Balance Menu \n-----------------\n\n";
    cout << "Your Balance is N" << balance;

    int exit_choice;
    cout << "\n\nIf you want to exit this menu, enter 0: ";

    cin >> exit_choice;

    if (exit_choice != 0)
    {
        cout << "\n\n";
        viewBalance(balance);
    }

    return balance;
}

double depositMoney(double balance)
{
    double deposit_amount;
    bool checker = false;
    cout << "Deposit Cash Menu \n-----------------\n\n";

    while (checker == false)
    {
        cout << "How much money would you like to deposit: ";
        cin >> deposit_amount;

        if (deposit_amount > 0)
        {
            balance = balance + deposit_amount;
            cout << "\n\nYour total balance now is N" << balance;

            checker = true;
        }
        else
        {
            cout << "Invalid Input \n";
        }
    }

    int exit_choice;
    cout << "\n\nIf you want to exit this menu, enter 0: ";

    cin >> exit_choice;

    if (exit_choice != 0)
    {
        cout << "\n\n";
        depositMoney(balance);
    }

    return balance;
}

double withdrawMoney(double balance, double dailyLimit)
{
    double withdrawn_money;
    bool checker = false;
    cout << "Withdraw Cash Menu \n-----------------\n\n";

    while (checker == false)
    {
        cout << "How much money would you like to withdraw: ";
        cin >> withdrawn_money;
        if (withdrawn_money > balance)
        {
            cout << "\nAmount must not exceed the account balance \nPlease Try again";
        }
        else if (withdrawn_money > dailyLimit)
        {
            cout << "\nAmount must not exceed the daily withdrawal limit";
        }
        else if (withdrawn_money > 0)
        {
            balance = balance - withdrawn_money;
            cout << "\n\nYour total balance now is N" << balance;
            checker = true;
        }
        else
        {
            cout << "Invalid Input\n";
        }
    }

    int exit_choice;
    cout << "\n\nIf you want to exit this menu, enter 0: ";

    cin >> exit_choice;

    if (exit_choice != 0)
    {
        cout << "\n\n";
        withdrawMoney(balance, dailyLimit);
    }

    return balance;
}

int resetPin(int pin)
{
    int old_pin_input;
    int new_pin_input;
    bool checker = false;
    cout << "Reset Pin Menu \n--------------\n\n";

    while (checker == false)
    {
        cout << "Enter current pin to continue: ";

        cin >> old_pin_input;
        if (old_pin_input == pin)
        {
            cout << "Enter new pin: ";

            cin >> new_pin_input;
            if (new_pin_input < 0)
            {
                cout << "\nInvalid pin, try again";
            }
            else
            {
                checker = true;
                pin = new_pin_input;
                cout << "Pin has been reset successfully!";
            }
        }
        else
        {
            cout << "Incorrect pin, please try again\n\n";
        }
    }

    int exit_choice;
    cout << "\n\nIf you want to exit this menu, enter 0: ";

    cin >> exit_choice;

    if (exit_choice != 0)
    {
        cout << "\n\n";
        resetPin(pin);
    }

    return pin;
}

bool Exit(bool user_active)
{
    cout << "\nThank you for using our ATM!";
    user_active = false;

    return user_active;
}

int main()
{
    double acct_bal, withd_lim;
    int user_choice, current_pin;
    bool user_active = true;

    acct_bal = 50000;
    withd_lim = 20000;
    current_pin = 4321;

    cout << "Welcome to the PAU ATM! \nPlease input your pin to login \n\nEnter your pin here: ";

    if (verifyPin(current_pin))
    {
        do
        {
            displayMenu();

            cin >> user_choice;
            switch (user_choice)
            {
            case 1:
                acct_bal = viewBalance(acct_bal);
                break;
            case 2:
                acct_bal = depositMoney(acct_bal);
                break;
            case 3:
                acct_bal = withdrawMoney(acct_bal, withd_lim);
                break;
            case 4:
                current_pin = resetPin(current_pin);
                break;
            case 5:
                user_active = Exit(user_active);
                break;

            default:
                cout << "Invalid Input, please try again";
                break;
            }
        } while (user_active == true);
    }
    else
    {
        cout << "Account Locked. Please contact your bank";
    }
}