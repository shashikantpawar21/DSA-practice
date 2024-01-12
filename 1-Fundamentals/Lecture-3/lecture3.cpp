#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a > 5)
    {
        cout << "a is greater than 5" << endl;
    }
    else
    {
        cout << "a is less than or equal to 5" << endl;
    }
    cout << "value of a is " << a << endl;
    cout << "value of b is " << b << endl;

    // cin.get to get value of space, tab or enter
    int a5 = cin.get();
    cout << a5 << endl;

    int a6, b6;
    cout << "enter value of a ";
    cin >> a6;
    cout << "enter value of b ";
    cin >> b6;

    if (a6 < b6)
    {
        cout << "a6 is less than b6";
    }
    else if (a6 > b6)
    {
        cout << "a6 is greater than b6" << endl;
    }
    else
    {
        cout << "a6 is equal is b6" << endl;
        ;
    }

    int a7 = 2;
    int b7 = a7 + 1;
    if ((a7 = 3) == b7)
    {
        cout << a7;
    }
    else
    {
        cout << a7 + 1;
    }

    char c1;
    cout << "get a char value:  ";
    cin >> c1;

    if (c1 >= 'a' && c1 <= 'z')
        cout << "c1 is lower case" << endl;
    else if (c1 >= 'A' && c1 <= 'Z')
        cout << "c1 is upper case" << endl;
    else if (c1 >= '0' && c1 <= '9')
        cout << "c1 is numeric" << endl;
}