// is Array is sorted or not 
//  arr -  1  2  4 8  9 --> sorted 
//     -  1  2 4 3 8 9 --> not sorted 

//  Normal approach 
//  check element is smaller than next element, if yes increment index 
//  and repeat till end of arr 
//  if element is greater than next element, return false 

//  Recursion 
//  1. Breaking prob into smaller prob 
//  2. checking no with next no 

#include <iostream>
using namespace std;

bool isSorted(int* arr,  int size)
{
    if(size ==1) return true; 

    if(arr[0] >  arr[1]) return false;
    
    return isSorted(arr + 1, size - 1);    
}

bool isSorted1(int* arr, int index, int size)
{
    if(index == size -1) return true;

    return arr[index] <  arr[index + 1] && isSorted1(arr, index + 1, size);
}
int main() {

    int arr[5] = {1, 2, 3, 4, 5};
    // bool sorted = isSorted(arr, 5);
    bool sorted = isSorted1(arr, 0, 5);
    if(sorted)
    {
        cout << "Array is sorted" << endl;
    }
    else{
        cout << "Array is not sorted" << endl;
    }
}