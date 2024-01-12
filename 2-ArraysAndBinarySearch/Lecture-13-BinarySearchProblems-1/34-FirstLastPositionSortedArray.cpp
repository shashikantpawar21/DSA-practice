// 34. Find First and Last Position of Element in Sorted Array
// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
// If target is not found in the array, return [-1, -1].
// You must write an algorithm with O(log n) runtime complexity

// Example 1:

// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]
// Example 2:

// Input: nums = [5,7,7,8,8,10], target = 6
// Output: [-1,-1]
// Example 3:

// Input: nums = [], target = 0
// Output: [-1,-1]

// Analysis 
// solve for first occurence 
// case 1 -> arr[mid] == key 
// - update ans for min 
// - update start and end to left side n mid 
// case 2 --> arr[mid] < key 
// - update start and end to rigth side 
// case 3 --> arr[mid]> key 
// - update start and end to left side  

#include<iostream>
using namespace std;
int getFirstPosition(int nums[], int size, int target)
{
    int start =0, end= size-1;
    int mid = start + (end -start)/2;
    int firstPosition = -1;
    while(start<=end)
    {
        
        if(nums[mid] == target)
        {
           firstPosition = mid; 
            end= mid-1;
             mid++;
        }
        else if (nums[mid] > target) // search left side
        {
            end = mid-1;
        }
        else if(nums[mid] < target)
        {
            start= mid+1; 
        }
        mid = start + (end-start)/2;

    }
    return firstPosition;
}
int getLastPosition(int nums[], int size, int target)
{
    int start =0, end= size-1;
    int mid = start + (end -start)/2;
    int lastPosition = -1;
    while(start<=end)
    {
        
        if(nums[mid] == target)
        {
           lastPosition = mid; 
            start= mid+1;
             mid++;
        }
        else if (nums[mid] > target) // search left side
        {
            end = mid-1;
        }
        else if(nums[mid] < target)
        {
            start= mid+1; 
        }
        mid = start + (end-start)/2;

    }
    return lastPosition;
}

int main()
{
    int nums[] = {5,8,8,8,9,10}; 
    int target = 8;
    pair<int,int> p;

    p.first = getFirstPosition(nums, 6,target);
    p.second = getLastPosition(nums, 6,target);
    cout << "First position is "  << p.first<< endl;
    cout << "Last position is "  << p.second<< endl;

}