#include <iostream>
using namespace std;

void update(int n)
{
    n = n / 2;
}
int main()
{
    int n = 0;
    cout << "Enter no";
    cin >> n;
    update(n);
}
// both main fn n and update function hold different memory.
// so if n is updated in update fn, it will nt affect n present fn