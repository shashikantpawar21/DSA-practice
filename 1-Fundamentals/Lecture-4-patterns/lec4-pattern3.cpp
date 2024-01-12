#include <iostream>
using namespace std;

// *                1
// * *              2   2
// * * *            3   3   3

int main()
{
    int n;
    cout << "Enter no" << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "* ";
            // cout << i << " ";
            j++;
        }
        i++;
        cout << endl;
    }
}