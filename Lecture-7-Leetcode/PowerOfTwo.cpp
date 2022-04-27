// n =16 --> 2**4 =16 --> true
// n =3 --> --> false

#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "enter no ";
    cin >> n;
    if (n == 1)
    {
        cout << "power of 2";
        return 0;
    }
    while (n > 1)
    {
        if (n % 2 != 0)
        {
            cout << "Not a power of 2";
            return 0;
        }
        n = n / 2;
    }
    cout << " a power of 2";
}
