#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n = 0;
    cout << "enter no ";
    cin >> n;
    bool isPrimeNo = isPrime(n);
    if (isPrimeNo)
        cout << " no is prime";
    else
        cout << " no is not prime";
}