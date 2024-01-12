// input - 1 2 3 4 5 
//  search key - 3 

// Use Recursion and binary search as arr is sorted 
#include<iostream>
using namespace std;

bool search(int* arr, int target, int start, int end)
{
    if(start > end)
        return false;

    int mid = start + (end - start) / 2;
    if(arr[mid] == target)
        return true;

    if(target > arr[mid])
    {
       return search(arr, target, mid+1, end);
    }
    else 
    {
       return search(arr, target, start, mid-1);
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int target = 8;
    bool isFound = search(arr, target, 0, 4);

    if(isFound)
    {
        cout << "Target is present" << endl;
    }
    else{
        cout << "Target is not present" << endl;
    }
}