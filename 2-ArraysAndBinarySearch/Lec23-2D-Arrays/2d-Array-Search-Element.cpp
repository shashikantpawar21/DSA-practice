#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target,  int rowCount , int colCount)
{
    for (int row = 0; row < rowCount; row++)
    {
        for (int col = 0; col < colCount; col++)
        {
            if(arr[row][col] == target)
            {
                return true;
            }
        }
    }
    return false;
}

void print2dArray(int arr[][4], int n, int m)
{
    // Display output
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }  
    cout << endl;
}

int main()
{
    // creating 2d array
    int arr[3][4];

    // method 3 - Taking input row wise 
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            arr[row][col] = row;
        }
    }

    print2dArray(arr,3,4);
    int target = 2;
    bool isTargetPresent = isPresent(arr, target, 3, 4);
    if(isTargetPresent)
    {
        cout << target << " is present" << endl;
    }
    else
    {
        cout << target << " is not present" << endl;
    }

}