#include <iostream>
using namespace std;

// 1 2 3
// 4 5 6
// 7 8 9

int main()
{
    int n;
    cout << "Enter no" << endl;
    cin >> n;
    int i, m = 0;
    while (i < n)
    {

        int j = 0;
        while (j < n)
        {
            m++;
            cout << m << " ";
            j++;
        }
        i++;
        cout << endl;
    }
}