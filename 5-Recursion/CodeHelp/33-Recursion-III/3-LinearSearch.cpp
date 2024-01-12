// input - 1 2 3 4 5 
//  search key - 3 

// Use Recursion 
#include<iostream>
using namespace std;

bool search(int* arr, int target, int size)
{
    if(size == 0)
        return false; 
    
    if(arr[0] == target)
        return true;

    bool isFound = search(arr + 1, target, size - 1);
    return isFound;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int target = 10;
    bool isFound = search(arr, target, 5);

    if(isFound)
    {
        cout << "Target is present" << endl;
    }
    else{
        cout << "Target is not present" << endl;
    }
}