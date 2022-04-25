#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, ans, i = 0;
    cout << "enter a no " << endl;
    cin >> n;
    // **********  UNSOLVED
    // Ignore the -ve sign
    //  Take 1 complement
    //  Take 2 complememt
    n = n * -1;
    bool reverse = false;
    while (n != 0)
    {
        int bit = (n & 1);
        if (bit == 1 && reverse == false)
        {
            reverse = true;
        }
        if (reverse)
        {
            bit = !bit;
        }
        ans = (bit * pow(10, i)) + ans;

        i++;
        n = n >> 5;
    }
    cout << ans;
}