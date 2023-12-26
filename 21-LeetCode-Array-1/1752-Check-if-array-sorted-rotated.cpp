// Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

// There may be duplicates in the original array.

// Note: An array A rotated by x positions results in an array B of the same length such that A[i] == B[(i+x) % A.length], where % is the modulo operation.

// Example 1:

// Input: nums = [3,4,5,1,2]
// Output: true
// Explanation: [1,2,3,4,5] is the original sorted array.
// You can rotate the array by x = 3 positions to begin on the the element of value 3: [3,4,5,1,2].
// Example 2:

// Input: nums = [2,1,3,4]
// Output: false
// Explanation: There is no sorted array once rotated that can make nums.
// Example 3:

// Input: nums = [1,2,3]
// Output: true
// Explanation: [1,2,3] is the original sorted array.
// You can rotate the array by x = 0 positions (i.e. no rotation) to make nums.

// Approach  
// 1. As per my understand we can check for below 2 case 
// 2. if array is already sorted i.e next element is greater than previous one. we return true here 
// 3. if we find any no lower than we ignore and check other element are sorted or not 
// Also we do check that first element shld be larger than last element 
// 4. if true we return true else false 
#include<iostream>
#include<vector>
using namespace std;
bool isArraySortedAndRotated(vector<int>& nums)
{
    int rotateCount = 0;
    for (int i = 0; i < nums.size()-1; i++)
    {
        if(nums[i] > nums[i+1])
        {
            rotateCount++;
        }
    }
    
    if( nums[nums.size()-1] > nums[0])  
    {
         rotateCount++;
    } 

    return rotateCount <=1;

}

int main()
{
    vector<int> nums = {5, 6,7, 1 ,2,8 };
    bool isArraySorted = isArraySortedAndRotated(nums);
    cout << "Is array sorted and rotated " << isArraySorted << endl;
}