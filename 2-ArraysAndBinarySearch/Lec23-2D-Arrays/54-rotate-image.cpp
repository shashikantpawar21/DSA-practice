// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [[7,4,1],[8,5,2],[9,6,3]]

// Input: matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
// Output: [[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]

// go to first element 

// 00  01 02
// 10  11 12  
// 20  21 22  
                    
// start row end row start col end col 

// int temp value of start row 
// start col value +2 2 becoz (legnth of matrix-1)
//  keep that value in temp and update end value with start value 
// also each loop has temp 

//  for 3 --> 2   0
//  for 4 --> 3   1
//  for 5  -> 4   2   1 
//  for 6 -> 5    3   1  
// 00  01 02  x  x x
// 10  11 12  x  x
// 20  21 22  x  x
// 20  21 22  x  x
// 20  21 22  x  x  x

#include<iostream> 
#include<vector>

using namespace std;

void print2dVector(vector<vector<int>> matrix)
{
    // Display output
    for (int row = 0; row < matrix.size(); row++)
    {
        for (int col = 0; col < matrix.size(); col++)
        {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }  
    cout << endl;
}

void rotate(vector<vector<int>>& matrix)
{
    int rows = matrix.size();
    int cols = rows;

    int start_row = 0, end_row = rows - 1, start_col = 0, end_col = cols - 1;
    int step = rows - 1;

    int temp = 0;
    int counter = 0;
    while(start_row <=end_row  && start_col  <=end_col )
    {
        // start row
        for (int col = start_col + counter; col < end_col; col =  col + step)
        {
            temp = matrix[start_row][col];
        }
        // end col
        for (int row = start_row + counter; row < end_row; row =  row + step)
        {
            int temp1 = matrix[row][end_col];
            matrix[row][end_col] = temp;
            temp = temp1;
        }
        // end row
        for (int col = end_col - counter; col>start_col; col =  col - step)
        {
            int temp1 = matrix[end_row][col];
            matrix[end_row][col] =temp;
            temp = temp1;
        }

        // start col
        for (int row = end_row - counter; row >start_row; row =  row -  step)
        {
            int temp1 = matrix[row][start_col];
            matrix[row][start_col] = temp;
            temp = temp1;
        }

        // start row
        for (int col = start_col + counter; col < end_col; col =  col + step)
        {
            matrix[start_row][col] = temp ;
        }
        if(counter < step-1)
        {
            counter++;
        }
        else 
        {
            start_row++;
            end_col--;
            start_col++;
            end_row--;
            counter = 0;
            step = step - 2; 
        }
        print2dVector(matrix);
    }
}

// 00  01 02
// 10  11 12  
// 20  21 22  
    int main()
    {
        vector<vector<int>> matrix=  {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
        rotate(matrix);
        print2dVector(matrix);

    }
