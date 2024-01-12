// You are given an m x n integer matrix matrix with the following two properties:

// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.

// You must write a solution in O(log(m * n)) time complexity.

// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
// Output: true

// while loop to find row 
//  mid = 1 , check if less than current row elemtn 0th element
//  update end = mid-1 
//  if greater than 0 than check if greater than next rowth 0th element 
//  this is row to search 
//  else move start to mid+1 

//  In the target row get mid and do the nrml binary search with a loop 



#include<iostream>
#include<vector> 
using namespace std;

bool searchMatrix(vector<vector<int>> matrix, int target)
{
    int start_row=0, end_row=matrix.size()-1;
    int start_col = 0, end_col = matrix[0].size() - 1;

    while(start_row <= end_row)
    {
        int mid_row = start_row + (end_row - start_row) / 2;
        int mid_element = matrix[mid_row][start_col];
        if(mid_element == target)
        {
            return true;
        }
        else if(mid_element > target)
        {
            end_row = mid_row - 1;
        }
        else if(mid_row+1 <= end_row && matrix[mid_row+1][start_col] <= target)
        {
            start_row = mid_row + 1;
        }
        else
        {
            // This is mid , find target by col_mid 
            while(start_col <= end_col)
            {
                int mid_col = start_col + (end_col - start_col) / 2;
                int element = matrix[mid_row][mid_col];

                if(element == target)
                {
                    return true;
                }
                else if(element > target)  // 1> 3
                {
                    end_col = mid_col-1;
                }
                else{
                    start_col = mid_col + 1;
                }
            }
            return false;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {{1,3}};
    bool isTargetPresent = searchMatrix(matrix, 3);

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