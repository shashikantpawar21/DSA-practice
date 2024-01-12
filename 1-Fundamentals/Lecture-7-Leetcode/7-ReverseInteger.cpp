
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n = 0, ans = 0;
    cout << "enter the no ";
    cin >> n;
    while (n != 0)
    {
        int digit = n % 10;
        if ((ans > INT64_MAX / 10) || (ans < INT64_MIN / 10))
        {
            ans = 0;
            break;
        }
        ans = (ans * 10) + digit;
        n = n / 10;
    }
    cout << ans;
}