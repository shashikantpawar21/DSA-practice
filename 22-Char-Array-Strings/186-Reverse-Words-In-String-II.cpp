// this is premium question not committed on leetcode 
// Given a character array s, reverse the order of the words.
// A word is defined as a sequence of non-space characters. The words in s will be separated by a single space.
// Your code must solve the problem in-place, i.e. without allocating extra space.

// Example 1:

// Input: s = ["t","h","e"," ","s","k","y"," ","i","s"," ","b","l","u","e"]
// Output: ["b","l","u","e"," ","i","s"," ","s","k","y"," ","t","h","e"]
// Example 2:

// Input: s = ["a"]
// Output: ["a"]

// Approach 
//  Reverse the whole string array 
//  find a word part and reverse that part only 

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void print(vector<char>& s)
{
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }
    cout << endl;
}
void reverseWords(vector<char>& s)
{
    reverse(s.begin(), s.end()); // reversed the whole string
    int wordIndex = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] ==' ')
        {
            // reverse the word based on space separation 
            reverse(s.begin() + wordIndex, s.begin()+i);
            wordIndex = i + 1;
            i++;
        }
    }
    reverse(s.begin() + wordIndex, s.end());
}

int main()
{
    vector<char> s = {'t','h','e',' ','s','k','y',' ','i','s',' ','b','l','u','e'};
    reverseWords(s);
    print(s);
}