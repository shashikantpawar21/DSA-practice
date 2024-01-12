/*
Given an integer number n, return the difference between the product of its digits and the sum of its digits.

Example 1:

Input: n = 234 234/ 10    23   4   23/10 2   3    432 43  2   4  3
Output: 15
Explanation:
Product of digits = 2 * 3 * 4 = 24
Sum of digits = 2 + 3 + 4 = 9
Result = 24 - 9 = 15
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the no ";
    cin >> n;
    int sumOfdigit = 0;
    int productOfdigit = 1;
    while (n > 0)
    {
        int digit = n % 10;
        sumOfdigit += digit;
        productOfdigit *= digit;
        n = n / 10;
        if (n == 0)
        {
            break;
        }
    }
    cout << "Ans " << productOfdigit - sumOfdigit;
}