// You are given two numbers 'A' and 'B' in the form of two arrays (A[] and B[]) of lengths 'N' and 'M' respectively, where each array element represents a digit. You need to find the sum of these two numbers and return this sum in the form of an array.

// Note:

// 1. The length of each array is greater than zero.

// 2. The first index of each array is the most significant digit of the number. For example, if the array A[] = {4, 5, 1}, then the integer represented by this array is 451 and array B[] = {3, 4, 5} so the sum will be 451 + 345 = 796. So you need to return {7, 9, 6}.

    // vector<int> nums1 = {4, 5, 1};
    // vector<int> nums2 = {3, 4, 5};
// Approach 
// compare the size of the both array and run loop for max size 
// will use while loop until max+1 turns to be zero 
// will have carry function to loop for carry 


#include<iostream>
#include<algorithm>
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

vector<int> findSumArray(vector<int>& a, int n, vector<int>& b, int m)
{
    vector<int> c;
    int carry = 0, sum =0;
    while(m >0  || n >0)  
    {
        sum = 0;
        if(n>0)
        {
            sum += a[n - 1]; 
        }
        if(m>0)
        {
            sum += b[m - 1]; 
        }
        sum += carry;

        carry = sum / 10;
        sum = sum % 10;

        c.push_back(sum);
        m--;
        n--;
    }
    if(carry!=0)
    {
        c.push_back(carry);
    }
    reverse(c.begin(), c.end());
    return c;
}


int main()
{
    vector<int> nums1 = {9, 9, 9};
    vector<int> nums2 = {2};
    vector<int> nums3 = findSumArray(nums1, nums1.size(),nums2, nums2.size());
    print(nums3);
}