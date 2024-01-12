#include <iostream>
using namespace std;

//              1
//              2   3
//              4   5   6

int main()
{
    int number;
    cout << "Enter no" << endl;
    cin >> number;
    int row = 0, count = 1;
    while (row < number)
    {
        int col = 0;
        while (col <= row)
        {
            cout << count++ << " ";
            col++;
        }
        row++;
        cout << endl;
    }
}