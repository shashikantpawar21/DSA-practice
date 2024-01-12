#include <iostream>
using namespace std;

// nCr = n! / r! * (n-r)! = 8C2 = 8 *7 / 2
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int num = factorial(n);
    int dem = factorial(r) * factorial(n - r);
    return num / dem;
}
int main()
{
    cout << "enter no ";
    int num, r = 0;
    cin >> num >> r;
    int ans = nCr(num, r);
    cout << ans;
}