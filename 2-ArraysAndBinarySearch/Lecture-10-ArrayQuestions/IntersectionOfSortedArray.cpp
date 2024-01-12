// 1 2 2 2 3 4 --  A
// 2 2 3 3 -- B
// 1 2 3 -- A
// 3 4 -- B
// Sample Output 1 :
// 2 2 3
// 3
// Explanation for Sample Input 1 :
// For the first test case, the common elements are 2 2 3 in both the arrays, so we print it.

// For the second test case, only 3 is common so we print 3.
// 1 2 2 2 3 4 --  A
// 2 2 3 3 -- B

#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {1, 2, 2, 2, 3, 4};
    int arr2[] = {2, 2, 3, 3};

    // METHOD 1 - complexity - O(n2)
    // int arr3[100];
    // int k = 0;
    // for (int i = 0; i < 6; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         if (arr1[i] == arr2[j])
    //         {
    //             arr3[k] = arr1[i];
    //             k++;
    //             arr2[j] = -1;
    //             break;
    //         }
    //     }
    // }

    // METHOD 2 - Using the info that  both the sorted in non decreasing order
    // int arr1[] = {1, 2, 2, 2, 3, 4};
    // int arr2[] = {2, 2, 3, 3};
    // we check 3 condition ,
    // arr1  element  < arr2 element  ->> increment arr1 index
    // arr1  element  == arr2 element ->> both same, save element value and increment both index
    // arr1  element  > arr2 element  ->> increment arr2 index
    // This is optimized solution , 0(n*m)
    // This is called 2 pointer approach

    int i = 0, j = 0;
    int arr3[100];
    int k = 0;
    while (i < 6 && j < 4)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        if (arr1[i] == arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            j++;
            k++;
        }
        if (arr1[i] > arr2[j])
        {
            j++;
        }
    }

    for (int l = 0; l < k; l++)
    {
        cout << arr3[l] << " ";
    }
    cout << endl;
}
