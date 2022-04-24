#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << " enter no " << endl;
    cin >> n;
    cout << "print from 1 to " << n << endl;

    for (int i = 1; i <= n; i++) // for(;;) --> works it is a infinite loop
    {
        cout << i << endl;
    }
    int i = 1;
    for (;;)
    {
        if (i <= n)
        {
            cout << i << endl;
            cout << "before continue keyword" << endl;
            i++;
            continue;
            cout << "after continue keyword" << endl;
        }
        else
        {
            break;
        }
        i++;
    }

    for (int a = 1, b = 1; a <= n, b <= n; a++, b++)
    {
        cout << a << " " << b << endl;
    }
}