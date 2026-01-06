#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Employee
{
private:
    string Name;
    string Company;
    int Age, Years;

public:
    void introduction()
    {
        cout << "My name is " << Name << endl;
        cout << "I work at " << Company << endl;
        cout << "My age is " << Age << endl;
        cout << "I have been working here for " << Years << "years" << endl;
    }

    // Setter sets the class atrribute value
    void SetName(string name)
    {
        Name = name;
    }

    void SetAge(int age)
    {
        if (age >= 18)
        {
            Age = age;
        }
        else
        {
            cout << "You are too young to be employed here";
        }
    }

    // Getter returns the class attribute value
    string GetName()
    {
        return Name;
    }

    int GetAge()
    {
        return Age;
    }

    // NOTE: You can use the setters to confirm/check the values of the attributes before changing e.g using if/else to confirm attribute values

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
    // Using Encapsulation, getters and setters

    Employee employee_value = Employee("John", "PAU", 20, 4);
    employee_value.introduction();
    employee_value.SetName("Johnathan");

    cout << "Employees name is " << employee_value.GetName() << endl;

    cout << "Your age is " << employee_value.GetAge() << endl;
    employee_value.SetAge(12);
}