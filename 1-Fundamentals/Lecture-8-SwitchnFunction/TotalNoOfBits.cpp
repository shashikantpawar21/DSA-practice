//  a  b = 2 and 3
// 10 11 -> total bits 3

#include <iostream>
using namespace std;

int noOfBits(int n)
{
    int noOfBits = 0;
    while (n != 0)
    {
        if ((n & 1) == 1)
            noOfBits++;
        n = n >> 1;
    }
    return noOfBits;
}

int totalBits(int a, int b)
{
    int aBit = noOfBits(a);
    int bBit = noOfBits(b);
    return aBit + bBit;
}

int main()
{
    int a = 0, b = 0;
    cin >> a >> b;
    cout << "total bits " << totalBits(a, b);
}