#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // ofstream is used to write to a file
    // ifstream is used to read to a file
    // fstream does both

    ofstream outfile("C:\\Users\\Jamil\\Documents\\J.SalamiCSC201\\Week - 8\\data.txt");

    if (!outfile)
    {
        cout << "Error creating file";
    }

    outfile << "Welcome to c++ class\n";
    outfile << "This is the file handling class";

    outfile.close();
}