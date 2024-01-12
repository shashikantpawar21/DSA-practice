#include <iostream>
using namespace std;

//              1
//              2   3
//              3   4   5
//              4   5   6   7

int main()
{
    int number;
    cout << "Enter no" << endl;
    cin >> number;
    int row = 0;
    while (row < number)
    {
        int col = 0;
        while (col <= row)
        {
            cout << row + col + 1 << " ";
            col++;
        }
        row++;
        cout << endl;
    }
}