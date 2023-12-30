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

// Approach 
// transver list n-1 
// take a charCount =1 and index variable =0
// check if current and next char are same 
// if not same add a char , increment index
// check count digit if > 1, 
//    getting the digit logic , update the array and increment index accordingly 
//  reset charCount 1 
// if found, increment 1 

#include<iostream>
#include<vector>
using namespace std;

int compress(vector<char>& chars)
{
        int charCount = 1, length = 0;
        int n = chars.size();

        for (int i = 0; i < n; i++)
        {
            if(i< n -1 && chars[i] == chars[i+1])
            {
                charCount++;
            }
            else 
            {
                cout << chars[i] << " " << charCount << endl;
                chars[length] = chars[i];
                length++;
                if (charCount > 1)
                {
                    int divisor = 1;
                    while (charCount / divisor >=  10)
                    {
                        divisor *= 10;
                    }
                    while (divisor > 0)
                    {
                        int digit = charCount / divisor;
                        charCount = charCount % divisor;
                        chars[length] = digit +'0';
                        length++;
                        divisor /= 10;
                    }
                }
                charCount = 1;
            }
        }
        return length;  
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