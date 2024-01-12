#include <iostream>
using namespace std;

// nth fibonnaci no - 0 1  1  2  3  5  8  13
//  5 th no --> 3

int nthFibonnaciNo(int n)
{
    int first = 0;
    int next = 1;
    if (n == first)
        return first;
    if (n == next)
        return next;

    for (int i = 3; i <= n; i++)
    {
        int sum = first + next;
        first = next;
        next = sum;
    }
    return next;
}

int main()
{
    int n;
    cout << "enter no ";
    cin >> n;
    cout << "fibonnacci of " << n << " is " << nthFibonnaciNo(n);
}