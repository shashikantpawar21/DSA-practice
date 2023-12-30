// Given two strings s and part, perform the following operation on s until all occurrences of the substring part are removed:

// Find the leftmost occurrence of the substring part and remove it from s.
// Return s after removing all occurrences of part.

// A substring is a contiguous sequence of characters in a string.

// Example 1:

// Input: s = "daabcbaabcbc", part = "abc"
// Output: "dab"
// Explanation: The following operations are done:
// - s = "dcaabcbaabcbc", remove "abc" starting at index 2, so s = "dabaabcbc".
// - s = "dabaabcbc", remove "abc" starting at index 4, so s = "dababc".
// - s = "dababc", remove "abc" starting at index 3, so s = "dab".
// Now s has no occurrences of "abc".  1 2 1
// dcaabcbaabcbc
// Example 2:

// Input: s = "axxxxyyyyb", part = "xy"
// Output: "ab"
// Explanation: The following operations are done:
// - s = "axxxxyyyyb", remove "xy" starting at index 4 so s = "axxxyyyb".
// - s = "axxxyyyb", remove "xy" starting at index 3 so s = "axxyyb".
// - s = "axxyyb", remove "xy" starting at index 2 so s = "axyb".
// - s = "axyb", remove "xy" starting at index 1 so s = "ab".
// Now s has no occurrences of "xy".


// Approach 
// make array of length of part string 
// if ith element is equal to first element --> increment new array index 0 
//  if ith element is equal to second element and index 1 element is less than index 0 element increment index 1 else ignore 
// This looks clumspy 

// Approach as per the given question 
// while loop  that compare  string and part to be removed 
// It removes the part and returns the string 
// do until there are no more part present 

#include<string>
#include<iostream>
using namespace std;
string removeOccurrences(string s, string part)
{
    int index = s.find(part);

    while(index != string:: npos)
    {
        s.erase(index, part.size());
        index = s.find(part);
    }
    return s; 
}

int main()
{
    string s = "axxxxyyyyb", part = "xy";
    s = removeOccurrences(s, part);
    cout << s << endl;
}
