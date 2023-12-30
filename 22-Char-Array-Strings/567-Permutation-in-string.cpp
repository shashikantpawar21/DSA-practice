// Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.
// In other words, return true if one of s1's permutations is the substring of s2.

// Example 1:

// Input: s1 = "ab", s2 = "eidbaooo"
// Output: true
// Explanation: s2 contains one permutation of s1 ("ba").
// Example 2:

// Input: s1 = "ab", s2 = "eidboaoo"
// Output: false

// Approach 
// search s1 in s2 if found return true 
// reverse s1 and again search s1 in s2 
// This only works for 2 letter combination 
// store the char charCountS1 - 
// take const array 26 chars for alpha 
// increment present alpha position 
// need to keep a sliding window of s1 size 
// also charCountS1 to consider found alphabet 
// traverse s1 with slidingwindow i =0 and j = s1 size 
// move j until i is under range , after that move i too
// if alphabet found decrement found alphabet and also decrement 1 value 
// if alphabet found and we are out of window that is decrement i 
// then increment charCountS1 and index of alpha again to check it again 


#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool compare(int arr[], int arr1[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i] != arr1[i])
            return false;
    }
    return true;
}
bool checkInclusion(string s1, string s2)
{
    // take const array 26 chars for alpha 
    int s1Size = s1.size();
    int s2Size = s2.size();
    if(s1Size < s2Size)
    {
        return false;
    }

    // increment present alpha position
    int charCountS1[26] = {0};
    int windowCount[26] = {0};
    for (int i = 0; i < s1Size; i++)
    {
        int index = s1[i] - 'a';
        charCountS1[index] += 1;

        int index1 = s2[i] - 'a';
        windowCount[index1] += 1; // 0-4 index element 
    }
      int sizeofCharCount = sizeof(charCountS1) / sizeof(charCountS1[0]);
    if(compare(charCountS1, windowCount, sizeofCharCount))
        return true;
    
    // Slide the window through the rest of s2
    for (int i = s1Size; i < s2Size; ++i) {
        // Update window count by removing the leftmost character
        windowCount[s2[i - s1Size] - 'a']--;

        // Update window count by adding the current character
        windowCount[s2[i] - 'a']++;
      
        // Check if the current window is a permutation of s1
      
        if (compare(charCountS1, windowCount, sizeofCharCount)) {
            return true;
        }
    }
        return false;
}

int main()
{
    string s1 = "hello", s2 = "helsloleoooleh";
    bool isIncluded = checkInclusion(s1, s2);
    cout << "Is string included " << isIncluded << endl;

}
