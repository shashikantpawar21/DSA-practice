// C     A + num - row = 2
// B  C    A
// A  B  C

#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "enter no " << endl;
    cin >> n;
    int row = 1;

    while (row <= n)
    {
        int col = 1;
        char ch = 'A' + n - row;
        while (col <= row)
        {
            cout << ch << " ";
            ch++;
            col++;
        }
        cout << endl;
        row++;
    }
}