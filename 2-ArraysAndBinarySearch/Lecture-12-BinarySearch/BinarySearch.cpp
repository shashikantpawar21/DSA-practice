#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    // take array find the mid
    //  with start and end key
    //  check if key matches with mid element
    //  if matches return if not change start and end key
    //  based on if key is less or greater
    //  again give the mid key
    //  perform until we find the sol or if mid key is in range
    int start = 0, end = size - 1;
    //int mid = (start + end) / 2;   // for very large array, then can be a case where start + end 
                                    // goes outside the range of int
    // To handle this we can rewrite the formula as 
    int mid = start + (end- start)/2;
    while (start <=end)
    {
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
        {
            start = mid + 1;
            
        }
        if (arr[mid] > key)
        {
            end = mid - 1;
             
        }
        // mid = (start+ end)/2;
         mid = start + (end- start)/2;
        
    }
    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    cout << binarySearch(even, 6,4) << endl;
    cout << binarySearch(odd, 5,15) << endl;
    return 0;
}