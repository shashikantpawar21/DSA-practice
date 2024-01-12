// Amount - 1330
// how many - 100, 50, 20 and 1  notes are needed
//    1330 /  100 --> 130  and  1330 %  100 --> 30

#include <iostream>
using namespace std;

int main()
{
    int amount = 0;
    cout << "enter no ";
    cin >> amount;
    int notes100, notes50, notes20, notes1 = 0;
    if (amount >= 100)
    {
        notes100 = amount / 100;
        amount = amount % 100;
    }
    else
    {
        notes100 = 0;
    }
    if (amount >= 50)
    {
        notes50 = amount / 50;
        amount = amount % 50;
    }
    else
    {
        notes50 = 0;
    }
    if (amount >= 20)
    {
        notes20 = amount / 20;
        amount = amount % 20;
    }
    else
    {
        notes20 = 0;
    }
    
    notes1 = amount;

    cout << "amount "
         << "amount would require " << notes100 << " notes of 100, "
         << notes50 << " notes of 50, " << notes20 << " notes of 20, " << notes1 << " notes of 1 ";
}