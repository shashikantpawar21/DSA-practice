// You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

// Merge nums1 and nums2 into a single array sorted in non-decreasing order.

// The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

// Example 1:

// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]
// Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
// The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
// Example 2:

// Input: nums1 = [1], m = 1, nums2 = [], n = 0
// Output: [1]
// Explanation: The arrays we are merging are [1] and [].
// The result of the merge is [1].
// Example 3:

// Input: nums1 = [0], m = 0, nums2 = [1], n = 1
// Output: [1]
// Explanation: The arrays we are merging are [] and [1].
// The result of the merge is [1].
// Note that because m = 0, there are no elements in nums1. The 0 is only there to ensure the merge result can fit in nums1.

// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,2,6], n = 3
// Output: [1,2,2,3,5,6]

// Approach 
// take 3 pointer p1, p2 and pe
// p1 = m-1 , p2 n-2 and p3 --> n+m -1 
// run a while loop on array larger size 
// compare p1 and p2 , if p1 < p2 move to p2 elemt to p3 location 
//  as it will be largest and decrement p2 and p3 as we done a operation there 
//  if p1 > p2 --> move elem p1 at p3 and p2 at p1 and increment all pointer until p1 is exhausted 

// Code 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,2,6], n = 3

// Output: [1,2,2,3,5,6]
void print(vector<int>& nums1)
{
    for (int i = 0; i < nums1.size(); i++)
    {
        cout << nums1[i] << " ";
    }
    cout << endl;
}

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
    int p1 = m - 1, p2 = n - 1, p3 = m + n - 1;
  
    while(p1>=0 && p2>=0)
    {
        if(nums1[p1] < nums2[p2])
        {
            nums1[p3--] = nums2[p2--];
        }
        else
        {
            nums1[p3--] = nums1[p1--];
        }
    }

     while(p2>=0)
     {
         nums1[p3--] = nums2[p2--];
     }
}


int main() 
{
    vector<int> nums1 = {4,0,0,0,0,0};
    vector<int> nums2 = {1,2,3,5,6 };
    int m = 1, n = 5;
    // vector<int> nums1 = {0};
    // vector<int> nums2 = {1};
    // int m = 0, n = 1;
    // nums1 = [1], m = 1, nums2 = [], n = 0
    // nums1 = [0], m = 0, nums2 = [1], n = 1

    merge(nums1, m, nums2, n);
    print(nums1);
}