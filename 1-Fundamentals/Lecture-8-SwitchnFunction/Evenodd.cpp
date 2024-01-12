#include <iostream>
using namespace std;

bool IsEven(int num)
{
    return num % 2 == 0;
}
int main()
{
    cout << "enter no ";
    int num = 0;
    cin >> num;
    bool isEven = IsEven(num);

    if (isEven)
    {
        cout << "No is even";
    }
    else
    {
        cout << "No is odd";
    }
}