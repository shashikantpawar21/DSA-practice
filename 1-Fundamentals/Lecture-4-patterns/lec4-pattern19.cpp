#include <iostream>
using namespace std;

int main()
{
    //         1
    //      2  2
    //   3  3  3

    int n = 0;
    cout << "Enter no " << endl;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            // if (col >= n - row + 1)
            //     cout << row << " ";
            // else
            //     cout << "  ";

            if (col <= n - row)
                cout << "  ";
            else
                cout << row << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}