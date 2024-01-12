// Given an array of characters chars, compress it using the following algorithm:
// Begin with an empty string s. For each group of consecutive repeating characters in chars:

// If the group's length is 1, append the character to s.
// Otherwise, append the character followed by the group's length.
// The compressed string s should not be returned separately, but instead, be stored in the input character array chars. Note that group lengths that are 10 or longer will be split into multiple characters in chars.

// After you are done modifying the input array, return the new length of the array.
// You must write an algorithm that uses only constant extra space.

// Example 1:

// Input: chars = ["a","a","b","b","c","c","c"]
// Output: Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]
// Explanation: The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".
// Example 2:

// Input: chars = ["a"]
// Output: Return 1, and the first character of the input array should be: ["a"]
// Explanation: The only group is "a", which remains uncompressed since it's a single character.
// Example 3:

// Input: chars = ["a","b","b","b","b","b","b","b","b","b","b","b","b"]
// Output: Return 4, and the first 4 characters of the input array should be: ["a","b","1","2"].
// Explanation: The groups are "a" and "bbbbbbbbbbbb". This compresses to "ab12".

// Approach 2
// transver list till n+1 i.e size (we see reason in below pts)
// take 2 pointer i and j and make count of repeated alpha wil initialize value 1
// start check from first items with previous if not same and if j == size of arr i.e index+1
//  update value at i with j-1 value , increment i 
//  if count greater than 1, as we need to store digit as char 
//  convert them and store accordingly as char and reset the counter  =0 
//  increment i while storing 


#include<iostream>
#include<vector>
using namespace std;

int compress(vector<char>& chars)
{
    int i=0;
    int n = chars.size();
    for (int j = 1, count = 1; j <= n; j++, count++)
    {
        if(j == n || chars[j] != chars[j-1])
        {
            chars[i++] = chars[j - 1];
            if(count >1)
            {
                for(char digit : to_string(count))
                {
                    chars[i++] = digit;
                }
            }
            count = 0;
        }
    }
    return i;
}

int main()
{
    vector<char> chars = {'o','o','o','o','o','o','o','o','o','o'};
    int length = compress(chars);
    cout << "length is " << length << endl;
    // cout << "size is " << chars.size() << endl;
    for (int i = 0; i < chars.size(); i++)
    {
        cout << chars[i] << " ";
    }
    cout << endl;
}