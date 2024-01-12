#include <iostream>
using namespace std;

// 1 1 1
// 2 2 2
// 3 3 3
int main()
{
    int n = 0;
    cout << "Enter row" << endl;
    cin >> n;
    int i = 1;
    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}