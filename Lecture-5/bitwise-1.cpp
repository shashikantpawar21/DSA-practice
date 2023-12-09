#include <iostream>
using namespace std;

int main()
{
    int a, b = 1;
    a = 10;
    // bitwise operator
    cout << "a&b " << (a & b) << endl;
    cout << "a|b " << (a | b) << endl;
    cout << "~a " << (~a) << endl;
    cout << "a^b " << (a ^ b) << endl;

    // left shift - generally it doubles for small no
    cout << "17<<1 " << (17 << 1) << endl; // 34
    cout << "17<<2 " << (17 << 2) << endl; // 68
                                           // right shift - genenrally it divides by 2
    cout << "19>>1 " << (19 >> 1) << endl; // 9
    cout << "19>>2 " << (19 >> 2) << endl; // 4

    // post increment
    int i = 4;
    int f = i++;
    cout << "i and f are " << i << " " << f << endl;
    // f = 5 and i= 4 - so first i value will be assigned to f and then i value will be incremented after stm is executed

    int j = 7;
    cout << "(++j) " << (++j) << endl; //8 j=8
    cout << "(j++) " << (j++) << endl; //8 j=9
    cout << "(j--)  " << (j--) << endl; //9 j = 8
    cout << "(--j) " << (--j) << endl;//7  j =7 

    if (++a) // pre increment // first increment happen and then condition is executed
    {
        cout << " value is " << b;
    }
    else
    {
        cout << " value is " << ++b;
    }
}