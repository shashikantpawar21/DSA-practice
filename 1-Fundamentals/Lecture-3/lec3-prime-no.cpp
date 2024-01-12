#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "Enter number to be checked as prime no or not" << endl;
    cin >> n;
    int i = 2;
    while (i < n)
    {
        if (n % 2 == 0)
        {
            cout << "Number " << n << "is not a prime no" << endl;
            return 0;
        }
        i++;
    }
    cout << "Number " << n << " is a prime no" << endl;
}