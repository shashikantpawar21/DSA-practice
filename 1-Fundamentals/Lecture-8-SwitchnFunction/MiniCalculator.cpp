#include <iostream>
using namespace std;

int main()
{
    cout << "welcome to mini calculator " << endl;
    cout << "Use + for addition" << endl;
    cout << "Use - for subtraction" << endl;
    cout << "Use * for multiplication" << endl;
    cout << "Use / for division" << endl;
    int a, b = 0;
    while (true)
    {
        cout << "enter first no ";
        cin >> a;
        cout << "enter second no ";
        cin >> b;
        cout << "Operation to be perform ";
        char operation;
        cin >> operation;
        cout << "Result " << a << " " << operation << " " << b << " = ";

        switch (operation)
        {
        case '+':
            cout << a + b;
            break;
        case '-':
            cout << a - b;
            break;
        case '*':
            cout << a * b;
            break;
        case '/':
            cout << a / b;
            break;
        }
        cout << endl;
        cout << "next operation or click ctrl + c to exit" << endl;
    }
}