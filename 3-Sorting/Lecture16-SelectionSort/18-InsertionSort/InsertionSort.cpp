// arr = [1,4,2]

// Approach - Insertion sort 
//  consider first element is sorted 
//  start check from second element 
//  is second element smaller than current one, then swap 
//  do until last element is checked 

// Adaptive - Steps are reduced as array is sorted 
// Stable algorithm 
//  No of swaps reduced as compared to bubble sort
//  Used for smaller values of n -> Works good when array is partially sorted 
// used for parts in hybrid sort algorithm - combining merge /quick sort with insertion sort 


#include<iostream>
using namespace std;

int main()
{
    int nums[] = {5,4,3,21,1 };
    int size = 5;

    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1 ;j>0; j--)
        {
            if(nums[j] < nums[j-1])
            {
                int temp = nums[j];
                nums[j] = nums[j-1];
                nums[j-1] = temp;
            }
            else 
            {
                break;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " " ;
    }
}

