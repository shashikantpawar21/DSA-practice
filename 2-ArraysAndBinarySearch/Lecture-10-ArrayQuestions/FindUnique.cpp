// find unique no
//  Array will be odd always
//  1,2,1,2,3  --> Unique 3
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 1, 2, 3};
    // Soln 1 -
    // if element if found again replace it and current element by 0
    // Atleast all repeated element will be zero
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == 0)
            continue;
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i] = arr[j] = 0;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] != 0)
        {
            cout << "Unique no is " << arr[i] << endl;
        }
    }

    // Sol 2 -
    int arr1[5] = {5, 4, 5, 4, 7};
    // xor -  a ^ a = 0 , a ^ 0  = a
    // 5 ^ 4 ^ 5 ^ 4 ^ 7 -->  0^ 0^ 3 ->  7
    int unique = 0;
    for (int i = 0; i < 5; i++)
    {
        unique = unique ^ arr1[i];
    }
    cout << "Unique no is " << unique;
}