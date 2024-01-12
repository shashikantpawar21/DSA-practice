// There is an integer array nums sorted in ascending order (with distinct values).

// Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

// You must write an algorithm with O(log n) runtime complexity.

 

// Example 1:

// Input: nums = [4,5,6,7,0,1,2], target = 0
// Output: 4

#include<iostream>
using namespace std;
//  4 6 1  2  3
// if mid is smaller than first element 
// then left side is not sorted , we check if element is there in sorted right half 
// if yes we set the mid according else we divide the unsorted left half where the target is there 

int binarysearch(int nums[], int start,  int end, int target)
{
    while(start<=end)
    {
        int mid = start + (end -start)/2;
        if(target == nums[mid])
        {
            return mid;
        }

        if(nums[mid] >= nums[0])
        {
            // left part is sorted 
            if(nums[0] <=target  && target < nums[mid])
            {
                // element is present in left half only
                end = mid-1;
            }
            else{
                start = mid + 1;            }
        }
        else{
            // right part is sorted 
            if(nums[mid] < target && target <= nums[end])
            {
                // element is there in right half only
                start = mid + 1;
            }
            else 
            {
                end = mid-1;
            }
            
        }

    }
     return -1;
 }
    int main()
    {
        // int nums[] = {3,1};
        int nums[] = {4,6,1,2,3};
        int size = 5, target = 6;
        int index = binarysearch(nums, 0, size - 1, target);
        cout << "Index is " << index << endl;
    }
      