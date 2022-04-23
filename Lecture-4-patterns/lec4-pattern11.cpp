// A
// B  B
// C  C  C

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
        }
        row++;
        ch++;
        cout << endl;
    }
}