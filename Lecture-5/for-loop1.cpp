#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << " enter no " << endl;
    cin >> n;
    cout << "print from 1 to " << n << endl;

    for (int i = 0; i <= n; i++)
    {
        cout << i << endl;
        i++;
    }

    // for (int i = 0; i <= n; i--)
    // {
    //     cout << i << endl;
    //     i++;
    // }
    // for (int i = 0; i <= n; i += 2)
    // {
    //     cout << i << " ";
    //     if (i & 1)
    //     {
    //         // continue;
    //     }
    //     i++;
    // }

    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = i; j <= n; j++)
    //     {
    //         cout << i << " " << j << endl;
    //     }
    // }

    for (int i = 0; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if (i + j == 10)
                break;
            cout << i << " " << j << endl;
        }
    }
}