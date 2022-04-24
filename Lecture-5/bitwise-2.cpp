#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 2;
    if (a-- > 0 && ++b > 2)
    {
        cout << "Stage 1 = Inside if ";
    }
    else
    {
        cout << "Stage 2 = Inside else";
    }
    cout << a << " " << b << endl;
}