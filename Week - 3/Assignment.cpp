#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    string student_name;
    int student_school;
    bool pau_student;
    int course_choice;
    string student_course;
    int student_location;
    double lodging_cost;
    double lodging_discount;
    double registration_discount;
    double registration_cost;
    double total;
    int r;

    cout << "Welcome User! \n\nPlease enter your name to continue: ";
    cin >> student_name;

    cout << "\nAre you a PAU Student? \n(Please enter 1 for true and 0 for false): ";
    cin >> student_school;

    if (student_school == 1)
    {
        pau_student = true;
    }
    else if (student_school == 0)
    {
        pau_student = false;
    }

    else
    {
        cout << "Invalid input, please restart this application and try again!";
    }

    cout << "\nWhat is your desired Course of Study from the following: \n1 - Photography \n2 - Painting \n3 - Fish Farming \n4 - Baking \n5 - Public Speaking \n\nPlease enter the number corresponding to your desired Course: ";
    cin >> course_choice;

    // lodgingCost = lodgingPerDay * days
    // total = regFee + lodgingCost

    if (course_choice == 1)
    {
        student_course = "Photography";
        registration_cost = 10000;

        cout << "\nWhich of the following Camp Locations would you like? \n1  - Camp House A \n2  - Camp House B \n3  - Camp House C \n4  - Camp House D \n5  - Camp House E \n\nPlease enter the number corresponding to your desired Camp: ";
        cin >> student_location;

        if (student_location == 1)
        {
            lodging_cost = 10000 * 3;
        }

        else if (student_location == 2)
        {
            lodging_cost = 2500 * 3;
        }

        else if (student_location == 3)
        {
            lodging_cost = 5000 * 3;
        }

        else if (student_location == 4)
        {
            lodging_cost = 13000 * 3;
        }

        else if (student_location == 5)
        {
            lodging_cost = 5000 * 3;
        }

        else
        {
            cout << "Invalid input, please try again!";
        }
    }

    else if (course_choice == 2)
    {
        student_course = "Painting";
        registration_cost = 8000;

        cout << "\nWhich of the following Camp Locations would you like? \n1  - Camp House A \n2  - Camp House B \n3  - Camp House C \n4  - Camp House D \n5  - Camp House E \n\nPlease enter the number corresponding to your desired Camp: ";
        cin >> student_location;

        if (student_location == 1)
        {
            lodging_cost = 10000 * 5;
        }

        else if (student_location == 2)
        {
            lodging_cost = 2500 * 5;
        }

        else if (student_location == 3)
        {
            lodging_cost = 5000 * 5;
        }

        else if (student_location == 4)
        {
            lodging_cost = 13000 * 5;
        }

        else if (student_location == 5)
        {
            lodging_cost = 5000 * 5;
        }

        else
        {
            cout << "Invalid input, please try again!";
        }
    }

    else if (course_choice == 3)
    {
        student_course = "Fish Farming";
        registration_cost = 15000;

        cout << "\nWhich of the following Camp Locations would you like? \n1  - Camp House A \n2  - Camp House B \n3  - Camp House C \n4  - Camp House D \n5  - Camp House E \n\nPlease enter the number desired Camp: ";
        cin >> student_location;

        if (student_location == 1)
        {
            lodging_cost = 10000 * 7;
        }

        else if (student_location == 2)
        {
            lodging_cost = 2500 * 7;
        }

        else if (student_location == 3)
        {
            lodging_cost = 5000 * 7;
        }

        else if (student_location == 4)
        {
            lodging_cost = 13000 * 7;
        }

        else if (student_location == 5)
        {
            lodging_cost = 5000 * 7;
        }

        else
        {
            cout << "Invalid input, please try again!";
        }
    }

    else if (course_choice == 4)
    {
        student_course = "Baking";
        registration_cost = 13000;

        cout << "\nWhich of the following Camp Locations would you like? \n1  - Camp House A \n2  - Camp House B \n3  - Camp House C \n4  - Camp House D \n5  - Camp House E \n\nPlease enter the number corresponding to your desired Camp: ";
        cin >> student_location;

        if (student_location == 1)
        {
            lodging_cost = 10000 * 5;
        }

        else if (student_location == 2)
        {
            lodging_cost = 2500 * 5;
        }

        else if (student_location == 3)
        {
            lodging_cost = 5000 * 5;
        }

        else if (student_location == 4)
        {
            lodging_cost = 13000 * 5;
        }

        else if (student_location == 5)
        {
            lodging_cost = 5000 * 5;
        }

        else
        {
            cout << "Invalid input, please try again!";
        }
    }

    else if (course_choice == 5)
    {
        student_course = "Public Speaking";
        registration_cost = 5000;

        cout << "\nWhich of the following Camp Locations would you like? \n1  - Camp House A \n2  - Camp House B \n3  - Camp House C \n4  - Camp House D \n5  - Camp House E \n\nPlease enter the number corresponding to your desired Camp: ";
        cin >> student_location;

        if (student_location == 1)
        {
            lodging_cost = 10000 * 2;
        }

        else if (student_location == 2)
        {
            lodging_cost = 2500 * 2;
        }

        else if (student_location == 3)
        {
            lodging_cost = 5000 * 2;
        }

        else if (student_location == 4)
        {
            lodging_cost = 13000 * 2;
        }

        else if (student_location == 5)
        {
            lodging_cost = 5000 * 2;
        }

        else
        {
            cout << "Invalid input, please try again!";
        }
    }

    else
    {
        student_location = 0;
        cout << "Invalid input, please try again!";
    }

    lodging_discount = 0;
    if (pau_student == true && (student_location == 1 || student_location == 2))
    {
        lodging_discount = lodging_cost * 0.05;
        lodging_cost = lodging_cost - (lodging_cost * 0.05);
    }

    registration_discount = 0;
    if (course_choice == 3 || course_choice == 4)
    {
        registration_discount = registration_cost * 0.03;
        registration_cost = registration_cost - (registration_cost * 0.03);
    }

    total = registration_cost + lodging_cost;

    srand(time(0));
    r = rand() % 101;

    if (r == 7 || r == 77)
    {
        total = total - 500;
        cout << "\n\nCongratulations! You are eligible for our N500 Bonus! \nYour total is now " << total;
        cout << "\n\nUSER DETAILS \n____________ \n\nName: " << student_name << "\nCourse: " << student_course << "\nRegistration Fee: N" << registration_cost << "   (Registration Discount = N" << registration_discount << ")" << "\nLodging Fee: N" << lodging_cost << "        (Lodging Discount = N" << lodging_discount << ")" << "\nRandom Draw Number: " << r << "\nPromo Applied: N500" << "\n__________________\n\nTOTAL:  N" << total << "\n\n";
    }

    else
    {
        cout << "\n\nUSER DETAILS \n____________ \n\nName: " << student_name << "\nCourse: " << student_course << "\nRegistration Fee: N" << registration_cost << "   (Registration Discount = N" << registration_discount << ")" << "\nLodging Fee: N" << lodging_cost << "        (Lodging Discount = N" << lodging_discount << ")" << "\nRandom Draw Number: " << r << "\n__________________\n\nTOTAL:  N" << total << "\n\n";
    }
}