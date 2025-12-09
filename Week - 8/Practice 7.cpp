#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ifstream Creator()
{

    ifstream infile("C:\\Users\\Jamil\\Documents\\J.SalamiCSC201\\Week - 8\\data 2.txt", ios::out | ios::app);

    if (!infile)
    {
        cout << "Error opening file";
    }

    return infile;
}

void Reader(ifstream &infile)
{
    int number;
    int sum;
    infile = Creator();

    while (infile >> number)
    {
        sum = sum + number;
    }

    cout << "The sum of all numbers in the file is " << sum;
}

int main()
{
    // ofstream is used to write to a file (Create)
    // ifstream is used to read to a file  (Read)
    // fstream does both

    // FSTREAM KEYWORDS
    // ios::out is used to enter write mode
    // ios::in is used to enter read mode
    // ios::app is used to enter append mode
    // ios::trunc is used to erase the contents of the file before writing

    // Convert to function, read ints from a csv file and then put in array

    ifstream infile = Creator();

    if (infile.is_open())
    {
        Reader(infile);
        infile.close();
    }
    else
    {
        cout << "Error opening file";
    }

    return 0;
}