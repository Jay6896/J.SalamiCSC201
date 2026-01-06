#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Employee
{
public:
    string Name;
    string Company;
    int Age, Years;

    void introduction()
    {
        cout << "My name is" << Name << endl;
        cout << "I work at" << Company << endl;
        cout << "My age is" << Age << endl;
        cout << "I have been working here for" << Years << "years" << endl;
    }

    Employee(string name, string company, int age, int years)
    {
        Name = name;
        Company = company;
        Age = age;
        Years = years;
    }
};

int main()
{
    /*
    NOTE: THIS SECTION IS USED WHEN THERE IS NO CREATED CONSTRUCTOR

    Employee employee_value;
    employee_value.Name = "John";
    employee_value.Company = "PAU";
    employee_value.Age = 20;
    employee_value.Years = 4;
    employee_value.introduction();
    */

    // Used when a created constructor is available
    Employee employee_value = Employee("John", "PAU", 20, 4);
    employee_value.introduction();
}