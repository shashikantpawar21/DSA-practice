#include <iostream>
using namespace std;

int main()
{
    // prime no or not
    int n = 0;
    cout << "enter no ";
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % 2 == 0)
        {
            cout << "no is not prime";
            return 0;
        }
        i++;
    }
    cout << "no is prime";
}
