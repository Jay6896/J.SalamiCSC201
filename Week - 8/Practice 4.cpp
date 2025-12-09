#include <iostream>
#include <fstream>
#include <string>

using namespace std;

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

    fstream file("C:\\Users\\Jamil\\Documents\\J.SalamiCSC201\\Week - 8\\data.txt", ios::out | ios::app);

    if (!file)
    {
        cout << "Error opening file";
    }

    file << "\nAdding a new line";
    file.close();
}