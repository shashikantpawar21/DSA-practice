#include<iostream>
using namespace std;

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

    // method 1 -  initialisation of array during declaration
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12}; 

    // method 2 -  initialisation of array during declaration
    // int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}}; 

    // method 3 - Taking input row wise 
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            arr[row][col] = row;
        }
    }

    print2dArray(arr,3,4);

    // method 4 - Taking input row wise 
    for (int col = 0; col < 4; col++)
    {
        for (int row = 0; row < 3; row++)
        {
            arr[row][col] = col;
        }
    }

    print2dArray(arr,3,4);

}