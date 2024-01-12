#include <iostream>
using namespace std;

int main()
{
    // A  B  C
    // B  C  D
    // C  D  E
    int n = 0;
    cout << "Enter the no" << endl;
    cin >> n;
    // row all col till matches row
    // print i - j + 1

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        char c = 'A' + row - 1;
        while (col <= n)
        {
            cout << c << " ";
            col++;
            c++;
        }
        cout << endl;
        row++;
    }
}
