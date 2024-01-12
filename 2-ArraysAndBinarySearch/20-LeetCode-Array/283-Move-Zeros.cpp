// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.

// Example 1:
// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]
// Example 2:

// Input: nums = [0]
// Output: [0]

//  Approach 
//  both pointer at zero 
//  keep count of zeros and swap index , if found zero increment 
//  if non -zero found swap that with swap index place, only there is smthg in zero count  
//  increment swap index and decrement zero count 
//  need to check if n-i operation is equal to or less than zero count than start putting zero also 
//  Also only zero are left now 
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>& nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

void moveZeros(vector<int>& nums)
{
    int nonZero = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i] != 0) 
        {
            
                swap(nums[nonZero], nums[i]);
                nonZero++;
            }
        }
        print(nums);
}

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    moveZeros(nums);
    print(nums);
}