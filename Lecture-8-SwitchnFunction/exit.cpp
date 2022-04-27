#include <iostream>
using namespace std;

// scenario -> if we stuck in infinite loop using switch .. the switch break stm comes out of the switch block
// but not the loop --> we can use exit in this case
int main()
{
    int n = 0;
    cout << "enter the no ";
    cin >> n;
    while (1)
    {

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
            exit(0);
        case 2:
            cout << "no is 2";

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
}