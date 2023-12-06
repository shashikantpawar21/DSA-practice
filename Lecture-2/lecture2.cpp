#include <iostream>
using namespace std;

int main()
{
    // Data type
    int a = 3, b = 4;
    char c = 'a';
    bool d = false;
    double f = 1.456345435;
    float g = 1.556345345;
    cout << "size of a (int) is " << sizeof(a) << " bytes." << endl;
    cout << "size of c (char) is " << sizeof(c) << " bytes." << endl;
    cout << "value of c is " << c << endl;
    cout << "size of d (bool) is " << sizeof(d) << " bytes." << endl;
    cout << "value of d(bool) is [true -1, false - 0] " << d << endl; // if bool value is true, it is print 1, and if it false it will print 0.
    cout << "size of f (double) is " << sizeof(f) << " bytes." << endl;
    cout << "value of f (double) is " << f << endl;
    cout << "size of g (float) is " << sizeof(g) << " bytes." << endl;
    cout << "value of g (float) is " << g << endl;

    // type casting
    int a1 = 'a';
    cout << "value of typecasted a1 " << a1 << endl;
    char c1 = 97;
    cout << "value of typecasted c1 " << c1 << endl;

    char c2 = 12345;
    // since c2 is 1 byte only, it will only take type casted int value of 1 byte
    // which is last byte of 4 bytes int if value is more than 1 byte
    cout << "value of typecasted c2 " << c2 << endl;

    int a2 = 'π';
    cout << "value of typecasted a2 " << a2 << endl;
    unsigned a3 = 2; // only positive no
    cout << "value of unsigned a3 " << a3 << endl;
    unsigned a31 = -1122; // this will give big errorous no bt code will run
    // reason - it will be stored as 2 complement but while printing will be considered as
    // positive no and not a negative no
    cout << "value of unsigned a3 " << a31 << endl;

    // operators
    int c41 = 2 / 5;
    cout << "value of c41 is " << c41 << endl; // return 0 instead of 0.4
    // becoz int / int gives int - remove decimal//
    // float / int gives float
    float c42 = 2.0 / 5; // return 0.4 as it is float divide by int
    cout << "value of c42 is " << c42 << endl;
    int a4 = 2;
    int b4 = 32;
    bool d2 = a4 && b4;
    cout << "value of bool result d2 " << d2 << endl;
}