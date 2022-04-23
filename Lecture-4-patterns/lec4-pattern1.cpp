#include <iostream>
using namespace std;

// 1 2 3 4      4 3 2 1
// 1 2 3 4      4 3 2 1
// 1 2 3 4      4 3 2 1
// 1 2 3 4      4 3 2 1

int main()
{
    int n = 0;
    cout << "Enter row" << endl;
    cin >> n;
    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            // cout << j << " ";  // P1
            cout << n - j << " "; // P2
            j++;
        }
        cout << endl;
        i++;
    }
}