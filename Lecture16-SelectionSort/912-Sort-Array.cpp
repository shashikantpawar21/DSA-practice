// Given an array of integers nums, sort the array in ascending order and return it.

// You must solve the problem without using any built-in functions in O(nlog(n)) time complexity and with the smallest space complexity possible.

// Example 1:

// Input: nums = [5,2,3,1]
// Output: [1,2,3,5]
// Explanation: After sorting the array, the positions of some numbers are not changed (for example, 2 and 3), while the positions of other numbers are changed (for example, 1 and 5).
// Example 2:

// Input: nums = [5,1,1,2,0,0]
// Output: [0,0,1,1,2,5]
// Explanation: Note that the values of nums are not necessairly unique.

// Approach 
//  do loop and swap the first element with min of array 
//  repeat this till n-1 element 
// This is SELECTION SORT - with TC o(n2)
#include<iostream>
using namespace std;

int main()
{
    int nums[] = {5,2,3,1};
    int size = 4;
   
    for (int i = 0; i < size; i++)
    {
         int minIndex = i;
        for (int j = i; j < size; j++)
        {
            if(nums[j] < nums[i])
            {
                minIndex = j;
            }
        }
        swap(nums[i], nums[minIndex]);
       
    }
     for (int i = 0; i < size; i++)
     {
         cout << nums[i] << " ";
     }
}