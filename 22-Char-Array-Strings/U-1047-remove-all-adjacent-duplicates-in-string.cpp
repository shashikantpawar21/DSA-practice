//  ****** This is solved using string at the bottom  **************
//  ****** Will solve using stack later as stack is better option to solve this  **************
// You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.

// We repeatedly make duplicate removals on s until we no longer can.

// Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.

// Example 1:
// Input: s = "abbaca"
// Output: "ca"
// Explanation: 
// For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".
// Example 2:

// Input: s = "azxxzy"
// Output: "ay"
 
// Approach 
// traverse the string with while loop
// check i and i+ 1 element if same 
// erase starting from i to  2 character
//  else move ahead 
//  This above approach will not work if the still is very very large 

//  Approach 2 - two pointer approach
// abbaca   --> 0  1   -> not match --> 1 2 --> increment both and copy value in new string 
// a bb aca  --> 1 2  -> match  --> 0 3 decrement i and increment j 

// aaaaaa   --> 0  1   ->  match --> because is match at first place we increment  --> increment both and copy value in new string
//  
#include<iostream>
#include<string>
using namespace std;

string removeDuplicates(string s)
{
    string ans;

    for (const char c : s)
      if (!ans.empty() && ans.back() == c)
        ans.pop_back();
      else
        ans.push_back(c);

    return ans; 
}

int main()
{
    string s = "bbaca";
     s = removeDuplicates(s);
    cout << s << endl;
}


