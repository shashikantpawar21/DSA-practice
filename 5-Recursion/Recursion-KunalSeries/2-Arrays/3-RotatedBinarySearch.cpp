//  5,6,7,8,9, 1 ,2,3  target =2 

#include <iostream>
using namespace std;

int find(int* arr, int target, int start, int end) {
    if(start > end)
        return -1;

    int mid = start + (end - start) / 2;

    if(arr[mid] == target)
        return mid;
    // case 1- start of arr till mid is sorted and target is in that range 
    if(arr[start] <= arr[mid]) 
    {
        if(target >= arr[start] && target <= arr[mid])
        {
            end = mid - 1;
        }
        else 
        {
            start = mid + 1;
        }
    }
    else 
    {
        //  case 2- start of arr till mid is not sorted 
        //  check if arr is present in second part 
        if(target >= arr[mid] && target <= arr[end])
        {
            start = mid + 1;
        }
        else 
        {
            end = mid - 1;
        }
    }
    return find(arr, target , start, end);
}

int main() {
    int arr[8] = {5, 6, 7, 8, 9, 1, 2, 3};
    int index = find(arr, 12, 0, 7);
    cout << index << endl;
}