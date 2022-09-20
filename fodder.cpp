#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    ifstream myFile;
    myFile.open("README.md", ios::in);
    if (myFile.is_open())
    {
        string tp;
        string chars = "*";

        while (getline(myFile, tp))
        {
            for(char c: chars){
                tp.erase(std::remove(tp.begin(), tp.end(), c), tp.end());
            }
            tp.erase(0,1);
            
            if(tp == "Sean Hatfield\r" || tp == "Cyrus Baybay\r" || tp == "Rina Watanabe\r"){
                cout<< tp << "\n";
            }
            //i actually hate my life the stupid \r was in the way of getting to what i wanted - cyrus baybay
            

        }
        myFile.close();

    }
}
