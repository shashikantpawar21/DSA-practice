#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "enter the no ";
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "no is 1 ";
        switch (n)
        {
        case 1:
            cout << "nested switch ";
            break;
        }
        break;
        break;
    case 2:
        cout << "no is 2";
        break;
    default:
        cout << "no not identified";
        break;
    }
    // default is optional
    //  break is optional
    //  break needed if we dont want to execute the below case after matched one
    //  case value can be int or char only - string or float is not allowed
    // nested switch is allowed
}