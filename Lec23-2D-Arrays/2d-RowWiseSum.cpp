#include<iostream>
using namespace std;

void rowWiseSum(int arr[][4], int rowCount , int colCount)
{
    for (int row = 0; row < rowCount; row++)
    {
        int sum = 0;
        for (int col = 0; col < colCount; col++)
        {
            sum += arr[row][col];
        }
        cout << "Sum of " << row + 1 << " row is " << sum << endl;
    }
}

int rowWiseLargestSum(int arr[][4], int rowCount , int colCount)
{
    int sumMax = 0;
    for (int row = 0; row < rowCount; row++)
    {
        int sum = 0;
        for (int col = 0; col < colCount; col++)
        {
            sum += arr[row][col];
        }
        if(sum > sumMax)
        {
            sumMax = sum;
        }  
    }
    return sumMax;
}

void columnWiseSum(int arr[][4], int rowCount , int colCount)
{
    for (int col = 0; col < colCount; col++)
    {
        int sum = 0;
        for (int row = 0; row < rowCount; row++)
        {
            sum += arr[row][col];
        }
        cout << "Sum of " << col + 1 << " column is " << sum << endl;
    }
        
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
    cout << "Row wise sum" <<endl;
    rowWiseSum(arr,3,4);
    cout << endl  << "Column wise sum" <<endl;
    columnWiseSum(arr,3,4); 
    int maxSum = rowWiseLargestSum(arr,3,4); 
    cout << endl  << "Row wise largest sum is " << maxSum<<endl;

}