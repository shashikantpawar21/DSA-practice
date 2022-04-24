#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 6;
    int c = a & b;
    int d = a | b;
    int e = ~a;
    int f = a ^ b;

    cout << "a & b " << c << endl;
    cout << "a | b " << d << endl;
    cout << "~a " << e << endl;
    cout << "a ^ b " << f << endl;
    cout << "17 >> 1 " << (17 >> 1) << endl;
    cout << "17 >> 2 " << (17 >> 2) << endl;
    cout << "19 << 1 " << (19 << 1) << endl;
    cout << "21 << 2 " << (21 << 2) << endl;

    int i = 7;
    cout << (i++) << endl; // 7   i -->8
    cout << (++i) << endl; // 9   i -->9
    cout << (i--) << endl; // 9   i -->8
    cout << (--i) << endl; // 7   i-->7
}