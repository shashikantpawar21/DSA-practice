#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, ans, i = 0;
    cout << "enter a no 1 " << endl;
    cin >> n;
    // **********  UNSOLVED
    // Ignore the -ve sign
    //  Take 1 complement // reverse bits
    //  Take 2 complememt // add 1
    // Adding 1 will have carry involved
    //   bit- 1,carry = 1 --> bit - 0, carry = 1
    //   bit- 0,carry = 1 --> bit - 1, carry = 0
    //   bit- 1,carry = 0 --> bit - 1, carry = 0
    //   bit- 0,carry = 0 --> bit - 0, carry = 0

    // STILL UNSOLVED WOULD TACKLE OF LOOK AT THIS WILL EXPLANATION AND VIDEOS
    n = n * -1;
    int carry = 1;
    while (n != 0 && carry == 0)
    {
        int bit = (n & 1);
        bit = !bit;
        if (n == 0)
        {
            ans = (carry * pow(10, i)) + ans;
            break;
        }
        if (carry == 1)
        {
            carry = bit;
            bit = !bit;
        }

        ans = (bit * pow(10, i)) + ans;

        i++;
        n = n >> 1;
    }
    cout << ans;
}