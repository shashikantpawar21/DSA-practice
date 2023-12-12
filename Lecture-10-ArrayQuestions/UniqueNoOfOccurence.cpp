// 1207. Unique Number of Occurrences
// Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.
// Example 1:

// Input: arr = [1,2,2,1,1,3]
// Output: true
// Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
// Example 2:

// Input: arr = [1,2]
// Output: false
// Example 3:

// Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
// Output: true
//  [3,2,1]

#include <iostream>
using namespace std;
int main()
{
    cout << "Unique occurence" << endl;
    int arr[6] = {1, 2, 2, 1, 1, 3};
    int arr1[6] = {0};
    int k = -1;
    for (int i = 0; i < 6; i++)
    {
        int randomValue = 2000; // value not in range
        if (arr[i] == randomValue)
        {
            continue;
        }
        k++;
        arr1[k] = 1;
        for (int j = i + 1; j < 6; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[j] = randomValue;
                arr1[k]++;
            }
        }
        arr[i] = randomValue;
    }

    // find first zero
    int noOfOccurence = 0;
    for (int i = 0; i < 6; i++)
    {
        cout << arr1[i] << " ";
        if (arr1[i] == 0)
        {
            noOfOccurence = i;
            break;
        }
    }
    if (noOfOccurence == 0)
    {
        noOfOccurence = 6;
    }
    cout << endl;
    cout << noOfOccurence << endl;
    // check if all occurence are unique
    for (int i = 0; i < noOfOccurence; i++)
    {
        for (int j = i + 1; j < noOfOccurence; j++)
        {
            if (arr1[i] == arr1[j])
            {
                cout << "No unique occurrence";
                return 0;
            }
        }
    }
    cout << "Unique occurrence";
}
