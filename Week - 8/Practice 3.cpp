#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // ofstream is used to write to a file
    // ifstream is used to read to a file
    // fstream does both

    ifstream infile("C:\\Users\\Jamil\\Documents\\J.SalamiCSC201\\Week - 8\\data.txt");

    if (!infile)
    {
        cout << "Error opening file";
    }

    string line;
    while (getline(infile, line))
    {
        cout << line << " \n";
    }

    infile.close();
}