#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n = 0;
    cout << "enter a no " << endl;
    cin >> n;
    int ans, i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;

        n = n >> 1;
        i++;
    }
    cout << ans;
}