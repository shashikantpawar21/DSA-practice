#include <iostream>
using namespace std;

// sum of n natural no's
int main()
{
    int n, i = 1, sum = 0;
    cout << "What is the number" << endl;
    cin >> n;

    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    cout << "Sum of " << n << " number is " << sum << endl;
}