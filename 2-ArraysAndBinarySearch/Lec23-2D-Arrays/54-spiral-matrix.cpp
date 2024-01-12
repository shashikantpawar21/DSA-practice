// Given an m x n matrix, return all elements of the matrix in spiral order.

// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [1,2,3,6,9,8,7,4,5]

// Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
// Output: [1,2,3,4,8,12,11,10,9,5,6,7]

// 00  01 02 
// 10  11 12
// 20  21 22

// start-row, start-col =0 , end-row-n end-col n 
// start row =0 , traverse col startcol to end col , increment start-row -1 
// end col = n , traverse row , from next start row =1 to end-row =n , decremtn end col
// end row = n , traverse col reverse, end col to start col , update end-row n-1
// start col = 0 traverse row end row n-1 to start row=1 , start col = 1

#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

vector<int> spiralOrder(vector<vector<int>>& matrix)
{
    vector<int> result;
    int rows = matrix.size();
    int cols = matrix[0].size();
    int start_row = 0, start_col = 0, end_row = rows -1, end_col = cols - 1;
    int count = 0, total = rows * cols;

    while (count<total)
    {
        // start row
        for (int col = start_col; count<total && col <= end_col; col++)
        {
            result.push_back(matrix[start_row][col]);
            count++;
        }
        start_row++;

        // end col
        for (int row = start_row; count<total &&  row <= end_row; row++)
        {
            result.push_back(matrix[row][end_col]);
            count++;
        }
        end_col--;

        // end row
        for (int col = end_col; count<total &&  col >= start_col; col--)
        {
            result.push_back(matrix[end_row][col]);
            count++;
        }
        end_row--;

        // start col
        for (int row = end_row; count<total &&  row >= start_row; row--)
        {
            result.push_back(matrix[row][start_col]);
            count++;
        }
        start_col++;

    }
    return result;
}

int main()
{
    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    vector<int> result = spiralOrder(matrix);
    print(result);
}

