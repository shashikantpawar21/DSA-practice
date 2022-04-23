#include <iostream>
using namespace std;

int main()
{
    //         *
    //      *  *
    //   *  *  *

    // * --> n - row + 1
    int n = 0;
    cout << "Enter no" << endl;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int condition = n - row + 1;
        int col = 1;
        while (col <= n)
        {
            if (col >= condition)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
            col++;
        }
        cout << endl;
        row++;
    }
}