// {2, 3, 4 , 5 , 6}
//  Is array sorted

//  Approach - Solving this thru recursion 
//  function to compare two element 

//  Base case - reach last element return true 
//  function arr , start element end elemt 

#include<iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    if(size == 0 || size ==1 )
        return true;
 
    if(arr[0] > arr[1]) 
    {
        return false;
    }

    bool sorted = isSorted(arr+1, size-1);
    return sorted;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    bool sorted = isSorted(arr, 5);

    if(sorted)
    {
        cout << "Array is sorted" << endl;
    }
    else{
        cout << "Array is not sorted" << endl;
    }
}