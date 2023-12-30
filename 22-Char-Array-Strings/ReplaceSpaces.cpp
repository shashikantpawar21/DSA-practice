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

// Approach 1 - using extra space 
// run a loop looking for spaces and replace with that value 
#include<iostream>
#include<string>
using namespace std;

string replaceSpaces(string &str)
{
    string m;
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i] == ' ')
        {
            m +=  "@40";
        }
       else{
         m += str[i];
       }
    }
    return m;
}

int main()
{
    string s = "Coding Ninjas Is A Coding Platform";
    string m = replaceSpaces(s);

    cout << m << endl;
}