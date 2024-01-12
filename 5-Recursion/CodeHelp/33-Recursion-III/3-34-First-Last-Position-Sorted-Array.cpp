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

// Approach 
// So we need to check both left and right path 
// Even if found 

#include<iostream>
using namespace std;

pair<int,int> search(int* arr, int target, int start, int end, pair<int,int> position)
{
    if(start > end)
        return position;

    int mid = start + (end - start) / 2;
    if(arr[mid] == target)
    {
        if(position.first == -1)
        {
            position.first = mid;
        }
        
        if(position.second == -1)
        {
            position.second = mid;
        }

        if(position.first > mid)
        {
            position.first = mid;
        }

        if(position.second < mid)
        {
            position.second = mid;
        }
      
    }    
    position =  search(arr, target, mid+1, end, position);
    position =  search(arr, target, start, mid-1, position);
    return position;
}

int main()
{
    int arr[6] = {5,7,7,8,8,10};
    int target = 8;
    pair<int, int> position = {-1, -1};
    position = search(arr, target, 0, 5, position);

    cout << "first position is " << position.first << endl;
    cout << "last position is " << position.second << endl;
}