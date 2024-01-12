// You are given an m x n integer matrix matrix with the following two properties:

// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.

// You must write a solution in O(log(m * n)) time complexity.

// Input: matrix = [[1,3,5,7,5],[10,11,16,20,5],[23,30,34,60,5]], target = 5/divide by col size = row , 
// Output: true

// while loop to find mid 
//  we consider this 2d array as single array - s= 0 to e=(m*n )
//  if mid == target --> to find row and col 
//  row -> mid/ sizeof(col) it remainder gives col 
//  if mid < target --> start = mid+1
//  mid > target --> end = mid -1 

//  In the target row get mid and do the nrml binary search with a loop 



#include<iostream>
#include<vector> 
using namespace std;

bool searchMatrix(vector<vector<int>> matrix, int target)
{
    int start = 0;
    int rows = matrix.size();
    int cols = matrix[0].size();
    int end = rows * cols - 1;

    while(start<=end)
    {
        int mid = start + (end - start) / 2;
        int row = mid / cols;
        int col = mid % cols;

        int element = matrix[row][col];
        if(element == target)
        {
            return true;
        }
        else if(element > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {{1,3,5,7,5},{10,11,16,20,5},{23,30,34,60,5}};
    bool isTargetPresent = searchMatrix(matrix, 35);

    if(isTargetPresent)
    {
        cout << "Target is present";
    }
    else 
    {
        cout << "Target is not present";
    }
    cout << endl;
}