#include <iostream>
using namespace std;

int main()
{
    //         1
    //      2  3
    //   4  5  6

    int n = 0;
    cout << "Enter no" << endl;
    cin >> n;

    int row = 1;
    int count = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {

            if (col >= n - row + 1)
            {
                cout << count << " ";
                count++;
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