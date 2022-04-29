#include <iostream>
using namespace std;
// function signature
void printCounting(int n)
{
    // function body
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
}

int main()
{
    int n = 0;
    cout << "enter no ";
    cin >> n;
    // function call
    printCounting(n);
}