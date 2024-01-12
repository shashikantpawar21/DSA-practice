// AP = (3*n) +7
#include <iostream>
using namespace std;

int ArithmaticProgression(int n)
{
    return (3 * n) + 7;
}

int main()
{
    int n = 0;
    cout << "enter n ";
    cin >> n;
    int ap = ArithmaticProgression(n);
    cout << "arithmatic progression of " << n << " is " << ap;
}