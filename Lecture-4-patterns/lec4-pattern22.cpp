#include <iostream>
using namespace std;

int main()
{
    //  _  _  1       3 row
    //  _  1  2  1    3 row  -2 + 1

    //  1  2  3  2   1  5 row
    //  1  2  3   4  3  2  1

    int n = 0;
    cout << "enter the no" << endl;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        int count = 1;
        while (col <= (n * 2) - 1)
        {

            if (col <= (n - row) || col >= (n + row))
            {
                cout << "  ";
            }
            else if (col >= n - row + 1)
            {
                cout << count << " ";
                if (col < n)
                    count++;
                else
                    count--;
            }
            col++;
        }
        row++;
        cout << endl;
    }
}
