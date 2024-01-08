#include<iostream> 
using namespace std;

// Creating 2D dynamic array 
int main()
{
    int rows=3, cols =4;
    int **table = new int*[rows];

    for(int i=0; i < rows; i++)
    {
        table[i] = new int[cols];
    }
    table[2][1] = 55;

    for(int i=0; i < rows; i++)
    {
        for(int j=0; j < cols; j++)
        {
             cout << table[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < rows; i++)
    {
        delete[] table[i];
    }

    delete[] table; 
}

// int arr[m][n] --> Why this is bad practice 
//  As seen similar for 1d array, this initilisation will create 
//  the array on the stack where the memory is small 
// if required arr memory is larger than stack memory 
//  Then program will crash 


