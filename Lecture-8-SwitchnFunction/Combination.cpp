#include <iostream>
using namespace std;

// nCr = n! / r! * (n-r)! = 8C2 = 8 *7 / 2
int Combination(int n, int r)
{
    int numerator = 1, denominator = 1;

    for (int i = 1; i <= r; i++)
    {
        numerator = n * numerator;
        n--;
    }
    for (int i = 1; i <= r; i++)
    {
        denominator = i * denominator;
    }
    return numerator / denominator;
}
int main()
{
    cout << "enter no ";
    int num, r = 0;
    cin >> num >> r;
    int ans = Combination(num, r);
    cout << ans;
}