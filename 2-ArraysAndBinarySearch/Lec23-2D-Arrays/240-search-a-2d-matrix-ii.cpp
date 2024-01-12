// Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom.

// Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 5
// Output: true

// Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 20
// Output: false

// 00 01 02 03 04 05
// 10 11 12 13  14 15 
// 20 21 22 23  24  5

// 0  1  2  5  6  
// 3  4  7  10 11 
// 8  9  12 15 16
// 13 14  17  21 22
// 18 19  20  25 26 

// Approach  
// B.s mid approach is not possible 
// will go with B.S pointer approach 

//  will start with row =0 and col = n-1
//  if target == element return true 
//  if target > element --> row ++ and surely it is not there in current row 
//  if target < element --> col --

#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target)
{
    int rows = matrix.size();
    int cols = matrix[0].size();

    int rowIndex = 0, colIndex = cols - 1;

    while(rowIndex<rows && colIndex >=0)
    {
        int element = matrix[rowIndex][colIndex];

        if(target == element)
        {
            return true;
        }
        if(target > element)
        {
            rowIndex++;
        }
        else{
            colIndex--;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};
    bool isPresent = searchMatrix(matrix, 100);

    if(isPresent)
    {
        cout << "target is present";
    }
    else 
    {
        cout << "target is not present";
    }
    cout << endl;
}