// Original Sorted Array: [1, 2, 3, 4, 5, 6, 7]
// Rotated Sorted Array: [4, 5, 6, 7, 1, 2, 3]
// Elements before the pivot (4): [4, 5, 6, 7] (sorted in ascending order)
// Elements after the pivot (4): [1, 2, 3] (sorted in ascending order)
// Pivot index is 4 in rotated error 

// Approach 
// We will not go with L.S. as 0(n) is n 
// as array is somewhat sorted we will go with binarysearch for T.C -> log n 

//Take the mid .. 
// if mid element is less than mid to right else move to mid to left till mid only 
#include<iostream>
using namespace std;
int getPivot(int arr[], int size)
{
        int start= 0, end = size-1;
        int mid = start + (end-start)/2;
        cout << "{4, 5, 6, 7, 1, 2, 3}" << endl;
        while (start < end)
        {
            cout << "start mid end " << start << " " << mid << " " << end << endl;
            cout << "values at ele " << arr[start] << " " << arr[mid]<< " " << arr[end] << endl;
            if(arr[mid] >= arr[0])
            {
                start = mid+1;
            }
            else {
                end = mid;
            }
            mid = start + (end -start)/2;
               cout << "start mid end " << start << " " << mid << " " << end << endl;
            cout << "values at ele " << arr[start] << " " << arr[mid]<< " " << arr[end] << endl <<endl;
        }
        return start;
 }

    int main()
    {
        int nums[] = {4, 5, 6, 7, 1, 2, 3};
        int pivot = getPivot(nums, 7);
        cout << "Pivot is " << pivot << endl;


}                       