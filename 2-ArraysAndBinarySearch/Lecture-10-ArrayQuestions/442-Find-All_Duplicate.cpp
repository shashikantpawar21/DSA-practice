// Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.

// You must write an algorithm that runs in O(n) time and uses only constant extra space.

// Example 1:

// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [2,3]
// Example 2:

// Input: nums = [1,1,2]
// Output: [1]
// Example 3:

// Input: nums = [1]
// Output: []

// Explanation - Algorithm
//  https://studyalgorithms.com/array/leetcode-find-duplicates-array/
//  to do it with time complexity - o(n) and space complexity - O(1)
//  the element will not exceed value of n
//  will used the indices to find if no is visited
//  first element value, used it as index and make the value of that index, negative one
//  if that index comes again and it is negative then it is a duplicate value and we saved it in another array

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // int nums[] = {4, 3, 2, 7, 8, 2, 3, 1};
    int nums[] = {10, 2, 5, 10, 9, 1, 1, 4, 3, 7};
    // int nums[] = {1, 1, 2};
    // int nums[] = {1};
    int duplicate[100];
    int dupIndex = 0;
    for (int i = 0; i < 10; i++)
    {
        int index = abs(nums[i]) - 1;
        if (nums[index] < 1)
        {
            duplicate[dupIndex] = index + 1;
            dupIndex++;
        }
        else
        {
            nums[index] = -nums[index];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < dupIndex; i++)
    {
        cout << duplicate[i] << " ";
    }
    cout << endl;
}
