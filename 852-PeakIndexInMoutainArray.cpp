// 0 1 0  --> 1 
// 0 1  2  1 -->  2 

// 0 1  2  1 
// Peak index no is some whose is greater than in nearest no
// there will be a mountain in this question 

//It is a sorted array so will check with binary search 
//   arr[mid-1] < arr[mid]  && arr[mid+1] < arr[mid]
// if found return mid else -1 

// first search in left side 
// then search in right side 
// if not found return -1 

#include<iostream>
using namespace std;
int peakIndex(int arr[], int size)
{
    int start=0, end = size-1;
    int mid = start + (end -start) /2;
    while(start<end)
    {
        if(arr[mid] < arr[mid+1])
        {
            start = mid+1;
        }
        else
        {
            end=mid;
        }
         mid = start + (end -start) /2;
    }
    return mid;
}
int main()
{
    int arr[] = {0,1,0};
    cout << "Peak index  " << peakIndex(arr,4) << endl;
}

