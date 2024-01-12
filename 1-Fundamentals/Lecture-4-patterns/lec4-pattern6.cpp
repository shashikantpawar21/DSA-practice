#include <iostream>
using namespace std;

int main()
{
    // 1
    // 2  1
    // 3  2  1
    int n = 0;
    cout << "Enter the no" << endl;
    cin >> n;
    // row all col till matches row
    // print i - j + 1

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << row - col + 1 << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}
