/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Mayank Goyal
 */
 
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool IsDuplicate(string name, vector<string> names)

{

    for (string strName : names)

    {

        if (strName == name)

        {

            return true;

        }

    }

    return false;

}

int main() {



    cout << "Enter a set of name-and-value pairs, such as 'Joe 17' and 'Barbara 22 (Terminate the input using 'NoName 0' followed by 'Enter'):\n";



    string strName {" "};

    int score {0};



    vector<string> strNames(0);

    vector<int> scores(0);



    bool bDuplicate {false};

    while (!bDuplicate && (cin >> strName >> score) && ("NoName" != strName || 0 != score)) // Terminate input with NoName 0

    {            

        // Check if name is duplicate.

        if (IsDuplicate(strName, strNames))

        {

            cout << "Duplicate name detected! Names must be unique.\n";

            bDuplicate = true;

        }

        else 

        {

            strNames.push_back(strName);

            scores.push_back(score);

        }

    }

    // print all (name,score) pairs

    for (int idx = 0; idx < strNames.size(); ++idx)

    {

      cout << "(" << strNames[idx] << "," << scores[idx] << ")\n";

    }

    return 0;

}