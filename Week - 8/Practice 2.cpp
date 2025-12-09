#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // ofstream is used to write to a file
    // ifstream is used to read to a file
    // fstream does both

    ofstream outfile("C:\\Users\\Jamil\\Documents\\J.SalamiCSC201\\Week - 8\\data 2.txt");

    if (!outfile)
    {
        cout << "Error creating file";
    }

    int sum = 10;
    for (int i = 0; i < 10; i++)
    {
        outfile << sum;
        sum += 10;
        outfile << "\n";
    }

    outfile.close();
}