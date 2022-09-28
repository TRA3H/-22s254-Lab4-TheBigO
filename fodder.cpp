/******************************************************************************************************************************
 * Project name: README.md Reader                                                                                             *
 * This program is free software: you may redistribute it and/or modify it under the terms of the GNU General Public License  *
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied         *
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.     *
 * A copy of the GNU General Public License v3 is available here:  <https://www.gnu.org/licenses/>.                           *
 * ****************************************************************************************************************************

Author: Sean Hatfield, Cyrus Baybay, Rina Watanabe
Author email: cyrusbaybay@csu.fullerton.edu, rinawata@csu.fullerton.edu, shatfield4@csu.fullerton.edu
Project Name: README.md Reader
Programming languages: C++
Date of last modification: 2022/9/28 
*/

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
        }
        myFile.close();

    }
}
