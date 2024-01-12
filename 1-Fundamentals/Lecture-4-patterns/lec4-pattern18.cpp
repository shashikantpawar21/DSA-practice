#include <iostream>
using namespace std;

int main()
{
    //   1  1  1
    //      2  2
    //         3

    int n = 0;
    cout << "Enter no" << endl;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            if (col >= row)
                cout << row << " ";
            else
                cout << "  ";
            col++;
        }
        cout << endl;
        row++;
    }
}