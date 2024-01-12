#include <iostream>
using namespace std;

int main()
{
    // A  A  A
    // B  B  B
    // C  C  C
    int n = 0;
    cout << "Enter the no" << endl;
    cin >> n;
    // row all col till matches row
    // print i - j + 1

    int row = 1;
    char c = 'A';
    while (row <= n)
    {
        int col = 1;

        while (col <= n)
        {
            cout << c << " ";
            col++;
        }
        cout << endl;
        c++;
        row++;
    }
}
