// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.

// Example 1:

// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.
// Example 2:

// Input: s = "race a car"
// Output: false
// Explanation: "raceacar" is not a palindrome.
// Example 3:

// Input: s = " "
// Output: true
// Explanation: s is an empty string "" after removing non-alphanumeric characters.
// Since an empty string reads the same forward and backward, it is a palindrome.

//  Approach 2 - Using the same striing 
//  we would compare the first and last character in while loop
//  until start is smaller than end
//  before char same comparison we will check if start and end char is alphanumeric
//  if not will ignore and check next char by increment the pointer
//  Also, while comparison we will do case less comparison

#include <string>
#include <iostream>
#include <cctype>
using namespace std;

bool isAlphaNumeric(char ch)
{
    return ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'));
}

char toLowerCase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch - 'A' + 'a';
    }
    return ch;
}

bool isPalindrome(string s)
{
    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {
        if(!isAlphaNumeric(s[i]))
        {
            i++; continue;
        }
        if(!isAlphaNumeric(s[j]))
        {
            j--; continue;
        }
        if (toLowerCase(s[i]) != toLowerCase(s[j]))
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{
    string s = "A man, a plan, a canal: Panama";

    bool isValidPalindrome = isPalindrome(s);
    cout << "is Palindrome " << isValidPalindrome << endl;
}