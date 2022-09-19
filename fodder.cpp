#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ifstream myFile;
    myFile.open("README.md", ios::in);
    if (myFile.is_open())
    {
        string tp;
        while (getline(myFile, tp))
        {
            tp.erase(tp.begin() + 0, tp.end() - 6);
            cout << tp << "\n";
        }
        myFile.close();
    }
}