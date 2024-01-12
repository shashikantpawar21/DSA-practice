// Given an integer array nums and an integer k, split nums into k non-empty subarrays such that the largest sum of any subarray is minimized.

// Return the minimized largest sum of the split.

// A subarray is a contiguous part of the array.

 

// Example 1:

// Input: nums = [7,2,5,10,8], k = 2
// Output: 18
// Explanation: There are four ways to split nums into two subarrays.
// The best way is to split it into [7,2,5] and [10,8], where the largest sum among the two subarrays is only 18.
// Example 2:

// Input: nums = [1,2,3,4,5], k = 2
// Output: 9
// Explanation: There are four ways to split nums into two subarrays.
// The best way is to split it into [1,2,3] and [4,5], where the largest sum among the two subarrays is only 9.
 
 // Approach 
 // maximum pages should lie btn max value in array as MIN and sum of all element as MAX 
 // range is min(arr) -- sum(arr)
 // do binary search on this range 
 // if student > for allocating max pages , increase pages 
 // else student < for allocating max pages , decrease pages 

#include<iostream>
using namespace std;
int studentCount(int nums[], int size, int pages)
{
    int students = 1;
    int pagesStudent = 0;
    for (int i = 0; i < size; i++)
    {
        if(pagesStudent + nums[i] <= pages)
        {
            pagesStudent += nums[i]; 
        }
        else{
            students += 1;
            pagesStudent = nums[i];
        }
    }
    return students;
}

int main()
{
    // int nums[] = {7, 2, 5, 10, 8 };
    int nums[] = {1,2,3,4,5};
    int size = 5;
    int k = 2;
    int ans = -1;
    if(k>size)
    {
        cout << "Unable to allocate pages";
    }
    int max = 0;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += nums[i];
        if(max < nums[i])
            max = nums[i];
    }
    cout << sum << " " <<  max << endl;
    int low = max, high= sum;
    while(low <= high)
    {
        int mid = low + (high - low) / 2;
        int noOfStudent = studentCount(nums, size, mid);
        if(noOfStudent > k)
        {
            low = mid + 1;
        }
        else{
            high = mid - 1; 
        }
    }
    cout << "Max no of pages is " << low << endl;
}

