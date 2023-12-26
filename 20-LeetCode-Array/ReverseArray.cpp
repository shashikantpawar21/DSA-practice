// ReverseArray
// arr = {1,2,3,4,5,6} , m =3 
//  reverse after index 3 
//  output = {1,2,3,4,6,5}

// Approach 
//  start loop from m only till mid 
//  swap with last element 
//  ex .4 and 5 needs to be swapped mid of 4 and 5 = 4 
//  loops runs from 4 to 4 , it swap first element with last element 
//  i =0 swap with n-i-1 

// dry run on example 2 
//   1 4 5 6 6 7 7 - 3 , 1 4 5 6 7 7 6 
//  4 to 6  - mid 5 --> run 4 to 5 

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int nums[] = {1,2,3,4,5,6};
    int size = 6;
    int m = 3;
    int start = m + 1;
    int mid = start + ((size - 1 - start) / 2);

    for (int i = start; i <= mid; i++)
    {
        swap(nums[i], nums[size + m - i ]);
    }

    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }
}
