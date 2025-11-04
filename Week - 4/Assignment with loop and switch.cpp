#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    string student_name, student_course;
    int student_school, r, course_choice, student_location, register_amount, i, continue_loop;
    bool pau_student;
    double lodging_cost, lodging_discount, registration_discount, registration_cost, total;

    cout << "Please input the number of people you want to register: ";
    cin >> register_amount;
    i = 0;

    srand(time(0));

    while (i < register_amount)
    {
        cout << "Welcome User! \n\nPlease enter your name to continue: ";
        cin >> student_name;

        cout << "\nAre you a PAU Student? \n(Please enter 1 for true and 0 for false): ";
        cin >> student_school;

        switch (student_school)
        {
        case 1:
            pau_student = true;
            break;
        case 0:
            pau_student = false;
            break;
        default:
            cout << "\n\nInvalid input, please restart this application and try again!";
            break;
        }

        cout << "\nWhat is your desired Course of Study from the following: \n1 - Photography \n2 - Painting \n3 - Fish Farming \n4 - Baking \n5 - Public Speaking \n\nPlease enter the number corresponding to your desired Course: ";
        cin >> course_choice;

        // lodgingCost = lodgingPerDay * days
        // total = regFee + lodgingCost

        switch (course_choice)
        {

        case 1:
            student_course = "Photography";
            registration_cost = 10000;

            cout << "\nWhich of the following Camp Locations would you like? \n1  - Camp House A \n2  - Camp House B \n3  - Camp House C \n4  - Camp House D \n5  - Camp House E \n\nPlease enter the number corresponding to your desired Camp: ";
            cin >> student_location;

            switch (student_location)
            {
            case 1:
                lodging_cost = 10000 * 3;
                break;
            case 2:
                lodging_cost = 2500 * 3;
                break;
            case 3:
                lodging_cost = 5000 * 3;
                break;
            case 4:
                lodging_cost = 13000 * 3;
                break;
            case 5:
                lodging_cost = 5000 * 3;
                break;
            default:
                cout << "Invalid input, please try again!";
                break;
            }
            break;

        case 2:
            student_course = "Painting";
            registration_cost = 8000;

            cout << "\nWhich of the following Camp Locations would you like? \n1  - Camp House A \n2  - Camp House B \n3  - Camp House C \n4  - Camp House D \n5  - Camp House E \n\nPlease enter the number corresponding to your desired Camp: ";
            cin >> student_location;

            switch (student_location)
            {
            case 1:
                lodging_cost = 10000 * 5;
                break;
            case 2:
                lodging_cost = 2500 * 5;
                break;
            case 3:
                lodging_cost = 5000 * 5;
                break;
            case 4:
                lodging_cost = 13000 * 5;
                break;
            case 5:
                lodging_cost = 5000 * 5;
                break;
            default:
                cout << "Invalid input, please try again!";
                break;
            }
            break;

        case 3:
            student_course = "Fish Farming";
            registration_cost = 15000;

            cout << "\nWhich of the following Camp Locations would you like? \n1  - Camp House A \n2  - Camp House B \n3  - Camp House C \n4  - Camp House D \n5  - Camp House E \n\nPlease enter the number desired Camp: ";
            cin >> student_location;

            switch (student_location)
            {
            case 1:
                lodging_cost = 10000 * 7;
                break;
            case 2:
                lodging_cost = 2500 * 7;
                break;
            case 3:
                lodging_cost = 5000 * 7;
                break;
            case 4:
                lodging_cost = 13000 * 7;
                break;
            case 5:
                lodging_cost = 5000 * 7;
                break;
            default:
                cout << "Invalid input, please try again!";
                break;
            }
            break;

        case 4:
            student_course = "Baking";
            registration_cost = 13000;

            cout << "\nWhich of the following Camp Locations would you like? \n1  - Camp House A \n2  - Camp House B \n3  - Camp House C \n4  - Camp House D \n5  - Camp House E \n\nPlease enter the number corresponding to your desired Camp: ";
            cin >> student_location;

            switch (student_location)
            {
            case 1:
                lodging_cost = 10000 * 5;
                break;
            case 2:
                lodging_cost = 2500 * 5;
                break;
            case 3:
                lodging_cost = 5000 * 5;
                break;
            case 4:
                lodging_cost = 13000 * 5;
                break;
            case 5:
                lodging_cost = 5000 * 5;
                break;
            default:
                cout << "Invalid input, please try again!";
                break;
            }
            break;

        case 5:
            student_course = "Public Speaking";
            registration_cost = 5000;

            cout << "\nWhich of the following Camp Locations would you like? \n1  - Camp House A \n2  - Camp House B \n3  - Camp House C \n4  - Camp House D \n5  - Camp House E \n\nPlease enter the number corresponding to your desired Camp: ";
            cin >> student_location;

            switch (student_location)
            {
            case 1:
                lodging_cost = 10000 * 2;
                break;
            case 2:
                lodging_cost = 2500 * 2;
                break;
            case 3:
                lodging_cost = 5000 * 2;
                break;
            case 4:
                lodging_cost = 13000 * 2;
                break;
            case 5:
                lodging_cost = 5000 * 2;
                break;
            default:
                cout << "Invalid input, please try again!";
                break;
            }
            break;

        default:
            student_location = 0;
            cout << "Invalid input, please try again!";
            break;
        }

        // End line

        lodging_discount = 0;
        switch (pau_student)
        {
        case (true):
            switch (student_location)
            {
            case 1:
            case 2:
                lodging_discount = lodging_cost * 0.05;
                lodging_cost = lodging_cost - (lodging_cost * 0.05);
                break;
            default:
                break;
            }
        }

        registration_discount = 0;
        switch (course_choice)
        {
        case 3:
        case 4:
            registration_discount = registration_cost * 0.03;
            registration_cost = registration_cost - (registration_cost * 0.03);
            break;
        }

        total = registration_cost + lodging_cost;

        r = (rand() % 100) + 1;

        switch (r)
        {
        case 7:
        case 77:
            switch (pau_student)
            {
            case true:
                total = total - 500;
                cout << "\n\nCongratulations! You are eligible for our N500 Bonus! \nYour total is now " << total;
                cout << "\n\nUSER DETAILS \n____________ \n\nName: " << student_name << "     (PAU student: Yes)" << "\nCourse: " << student_course << "\nRegistration Fee: N" << registration_cost << "   (Registration Discount = N" << registration_discount << ")" << "\nLodging Fee: N" << lodging_cost << "        (Lodging Discount = N" << lodging_discount << ")" << "\nRandom Draw Number: " << r << "\nPromo Applied: N500" << "\n__________________\n\nTOTAL:  N" << total << "\n\n";
                break;
            default:
                total = total - 500;
                cout << "\n\nCongratulations! You are eligible for our N500 Bonus! \nYour total is now " << total;
                cout << "\n\nUSER DETAILS \n____________ \n\nName: " << student_name << "     (PAU student: No)" << "\nCourse: " << student_course << "\nRegistration Fee: N" << registration_cost << "   (Registration Discount = N" << registration_discount << ")" << "\nLodging Fee: N" << lodging_cost << "        (Lodging Discount = N" << lodging_discount << ")" << "\nRandom Draw Number: " << r << "\nPromo Applied: N500" << "\n__________________\n\nTOTAL:  N" << total << "\n\n";
                break;
            }
            break;
        default:
            switch (pau_student)
            {
            case true:
                cout << "\n\nUSER DETAILS \n____________ \n\nName: " << student_name << "     (PAU student: Yes)" << "\nCourse: " << student_course << "\nRegistration Fee: N" << registration_cost << "   (Registration Discount = N" << registration_discount << ")" << "\nLodging Fee: N" << lodging_cost << "        (Lodging Discount = N" << lodging_discount << ")" << "\nRandom Draw Number: " << r << "\n__________________\n\nTOTAL:  N" << total << "\n\n";
                break;
            default:
                cout << "\n\nUSER DETAILS \n____________ \n\nName: " << student_name << "     (PAU student: No)" << "\nCourse: " << student_course << "\nRegistration Fee: N" << registration_cost << "   (Registration Discount = N" << registration_discount << ")" << "\nLodging Fee: N" << lodging_cost << "        (Lodging Discount = N" << lodging_discount << ")" << "\nRandom Draw Number: " << r << "\n__________________\n\nTOTAL:  N" << total << "\n\n";
                break;
            }
            break;
        }

        cout << "Do you still want to continue registering the remaining people? \nEnter 1 to continue and 0 to stop";
        cin >> continue_loop;

        switch (continue_loop)
        {
        case 1:
            break;
        case 0:
            cout << "Ending Registration!";
            i = register_amount;
            break;
        default:
            i = register_amount;
            break;
        }

        i++;
    }
}