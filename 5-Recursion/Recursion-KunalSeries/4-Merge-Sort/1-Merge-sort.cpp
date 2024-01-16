//  8 3 4 12 5 6 
//  1. Divide the array 
//  2. Sort the array 
//  3. Merge the sorted part 


#include <iostream>
#include<vector> 
using namespace std;

// Using extra vector or array 
vector<int> merge(vector<int> arr1, vector<int> arr2, int m, int n)
{
    int i = 0, j = 0;
    vector<int> arr3; 
    while(i < m && j < n)
    {
        if(arr1[i] <= arr2[j])
        {
            arr3.push_back(arr1[i++]);
        }
        else{
            arr3.push_back(arr2[j++]);
        }
    }
    while(i<m)
    {
        arr3.push_back(arr1[i++]);
    }
    while(j<n)
    {
        arr3.push_back(arr2[j++]);
    }
    return arr3;
}

vector<int> mergeSort(int* arr, int start, int end) {

    vector<int> arr3;
    if(start ==end)
    {
        arr3.push_back(arr[start]);
        return arr3;
    }
    int mid = start + (end - start) / 2;
    vector<int> arr1 = mergeSort(arr, start, mid);
    vector<int> arr2 = mergeSort(arr, mid + 1, end);

    arr3 = merge(arr1, arr2, arr1.size() , arr2.size());
    for (int i = 0; i < arr3.size(); ++i)
    {
        cout << arr3[i] << " ";
    }
     cout << endl;
    return arr3;
}

int main() {
    int arr[6] = {8, 3, 4, 12, 5, 6};
    vector<int> arr3;
    arr3 = mergeSort(arr, 0, 5);

    for (int i = 0; i < arr3.size(); ++i)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;
}