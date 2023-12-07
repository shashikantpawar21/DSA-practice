#include <iostream>
using namespace std;

int main()
{
    // 1  2  3  4  5  5  4  3  2  1    n=10  + row - 1    col =6 5 4 3 2  1  n  5  row 1
    // 1  2  3  4  *  *  4  3  2  1     n=5 row - 2 + 1  col =6 5 4 3 2  1 n  5  row 2
    // 1  2  3  *  *  *  *  3  2  1                       col =6 5 4 3 2  1 n  5  row 3
    // 1  2  *  *  *  *  *  *  2  1
    // 1  *  *  *  *  *  *  *  *  1
    int n = 0;
    cout << "Enter the no 3" << endl;
    cin >> n;
    int row = 1;
    // 2nd other solution
    while (row <= n)
    {
        int col = 1, val = 1;
        while (col <= (n * 2))
        {
            if ((col <= n - row + 1) || (col >= n + row))
                cout << val << " ";
            else
                cout << "* ";

            if (col < n)
                val++;
            else if (col > n)
                val--;

            col++;
        }
        row++;
        cout << endl;
    }

    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= n - row + 1)
    //     {
    //         cout << col << " ";
    //         col++;
    //     }
    //     while (col <= n)
    //     {
    //         cout << "* ";
    //         col++;
    //     }
    //     int start = 1;
    //     while (col > n - row + 2)
    //     {
    //         col--;
    //         cout << "* ";
    //     }
    //     while (col > 1)
    //     {
    //         col--;
    //         cout << col << " ";
    //     }

    //     row++;
    //     cout << endl;
    // }
}
