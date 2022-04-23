// A
// B  C
// D  E  F

#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "Enter no" << endl;
    cin >> n;

    int row = 1;
    char ch = 'A';
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << ch << " ";
            col++;
            ch++;
        }
        row++;

        cout << endl;
    }
}