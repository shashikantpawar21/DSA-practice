#include <iostream>
using namespace std;

int main()
{
    //   *  *  *
    //      *  *
    //         *

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
                cout << "* ";
            else
                cout << "  ";
            col++;
        }
        cout << endl;
        row++;
    }
}