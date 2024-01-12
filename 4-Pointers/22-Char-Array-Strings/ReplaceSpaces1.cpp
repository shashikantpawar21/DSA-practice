// You have been given a string 'STR' of words. You need to replace all the spaces between words with “@40”.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 50
// 0 <= |STR| <= 100

// Where ‘|STR|’ is the length of a particular string including spaces.

// Time limit: 1 sec
// Sample Input 1:
// 2
// Coding Ninjas Is A Coding Platform
// Hello World
// Sample Output 1:
// Coding@40Ninjas@40Is@40A@40Coding@40Platform
// Hello@40World

// Approach 2 - in memory 
// increase length for @40 for each space 
// start from back and move the character to right whenever a space is found 
// to add the new character  
#include<iostream>
#include<string>
using namespace std;

string replaceSpaces(string &str)
{
    int newLength = str.length();

    for (int i = 0; i < str.size(); i++)
    {
        if(str[i] == ' ')
        {
            newLength += 2;
        }
    }

    int lengthDiff = newLength - str.length();
    str.resize(newLength);
    for (int i = newLength-lengthDiff-1; i >= 0; i--)
    {
        if(lengthDiff ==0)
            return str;
            
        if(str[i] == ' ')
        {
            str[i + lengthDiff] = '0';
            str[i + lengthDiff-1] = '4';
            str[i+ lengthDiff-2] = '@';
            lengthDiff = lengthDiff - 2;
        }
        else
        {
            str[i + lengthDiff] = str[i];
        }
    }
    return str;
}

int main()
{
    string s = "Hello World";
    string m = replaceSpaces(s);

    cout << m << endl;
}