// Maximum Occuring Character

// Given a string str of lowercase alphabets. The task is to find the maximum occurring character in the string str. If more than one character occurs the maximum number of time then print the lexicographically smaller character.

// Example 1:

// Input:
// str = testsample
// Output: e
// Explanation: e is the character which
// is having the highest frequency.
// Example 2:

// Input:
// str = output
// Output: t
// Explanation:  t and u are the characters
// with the same frequency, but t is
// lexicographically smaller.

// Approach 
// declare a const array of 26 char fill with zero 
// traverse array by incrementing the count 
// check max value if max value is found ignore the second one 
//  check max value index , 2 
//  we are considering zero as a --> then a + index would be c 

#include<iostream>
#include<string>
using namespace std;

char maxOccurrenceChar(string s)
{
    char alpha[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        int charIndex = s[i] - 'a';
        alpha[charIndex] += 1;
    }
    int maxCount = 0;
    int maxIndex = 0;

    for (int i = 0; i < 26; i++)
    {
        if(maxCount < alpha[i])
        {
            maxCount = alpha[i];
            maxIndex = i;
        }
    }
    char ch = 'a' + maxIndex;
    return ch;
}

int main()
{
    string s = "output";

    char ch = maxOccurrenceChar(s);
    cout << "max occurrence is " << ch << " " << endl;
}