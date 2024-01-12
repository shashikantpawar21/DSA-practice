// The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

// For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
// Given an integer n, return its complement.

#include <iostream>
#include <math.h>
using namespace std;
// Example 1:

// Input: n = 5
// Output: 2
// Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.
/// EXPLANATION

int main()
{
    int n = 0, ans = 0, i = 0;
    cout << "Enter the no ";
    cin >> n;
    if (n == 0)
    {
        cout << "Complement of 0 is 1";
        return 0;
    }
    int number = n;
    while (n != 0)
    {
        int bit = n % 2;
        n = n / 2;
        ans = ans + ((!bit) * pow(2, i));
        i++;
    }
    cout << "Complement of " << number << " is " << ans;
}