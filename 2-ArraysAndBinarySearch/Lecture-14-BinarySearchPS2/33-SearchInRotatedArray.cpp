// There is an integer array nums sorted in ascending order (with distinct values).

// Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

// You must write an algorithm with O(log n) runtime complexity.

 

// Example 1:

// Input: nums = [4,5,6,7,0,1,2], target = 0
// Output: 4

#include<iostream>
using namespace std;
//  4 6 1 2 3
//  mid -3 start -3 end 4 
// mid -    start -4 emd 4
int getPivot(int nums[], int size)
{
    int start =0, end = size;
   
    while (start<end)
    {
         int mid = start + (end-start)/2;
        if(nums[mid] >nums[end])
        {
            start =  mid+1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
 }

int binarysearch(int nums[], int start,  int end, int target)
{
    while(start<=end)
    {
        int mid = start + (end -start)/2;
        if(target == nums[mid])
        {
            return mid;
        }
        else if (target > nums[mid])
        {
            start = mid +1;
        }
        else 
        {
            end = mid-1;
        }

    }
     return -1;
 }
    int main()
    {
        int nums[] = {3,1};
        int size = 2, target = 1;
        int pivotIndex = getPivot(nums,size-1);
        cout << "pivot of element is " << pivotIndex <<endl;
        int index = -1;
        if(nums[pivotIndex] <= target  && target <= nums[size-1])
        {
          index=  binarysearch(nums, pivotIndex, size - 1, target);
        }
        else{
          index=   binarysearch(nums, 0, pivotIndex-1, target);
        }
        cout << "Index is " << index << endl;
    }
      