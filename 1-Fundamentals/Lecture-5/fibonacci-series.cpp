#include <iostream>
using namespace std;

int main()
{
    // 0 1 1  2  3 5 == fibonacci series
    int first = 0, second = 1;
    int n = 0;
    cout << "enter the no ";
    cin >> n;
    cout << first << " ";
    cout << second << " ";
    for (int i = 0; i <= n; i++)
    {
        int nextNumber = first + second;
        cout << nextNumber << " ";
        first = second;
        second = nextNumber;
    }
}
