#include <iostream>
using namespace std;

int main()
{
    // Data type
    int a = 3, b = 4;
    char c = 'a';
    bool d = false;
    double f = 1.4;
    // cout << sizeof(a) << endl
    //      << sizeof(c);
    // cout << sizeof(c) << endl;
    // cout << sizeof(d) << endl;
    // cout << sizeof(f) << endl;
    // cout << f;

    // type casting
    int a1 = 'a';
    cout << a1 << endl;
    char c1 = 97;
    cout << a1 << endl;
    cout << c1 << endl;

    char c2 = 555555555555;
    cout << c2 << endl;

    unsigned a3 = -2;
    cout << a3 << endl;

    // operators
    int a4 = 2;
    int b4 = 32;
    bool d2 = a4 && b4;
    cout << d2 << endl;
}