// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

// You must not use any built-in exponent function or operator.

// For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
 

// Example 1:

// Input: x = 4
// Output: 2
// Explanation: The square root of 4 is 2, so we return 2.
// for 8 its square root shld be btn 0 to 8 
//  4*4 is greater than 8  - 1  4 8
// move left 2*2 = 4       - 1  2  3 
//  move right 3*3 =9      - 3  3  3 
// move left               - 3  3  2 

#include<iostream>
using namespace std;

int  sqrtrootIntegerPartOnly(int x)
{
     int start =1, end =x;
    int mid = 0;
    int ans = -1;
    while(start<=end)
    {
         mid = start + (end - start) / 2;

         if(mid* mid == x)
         {
            ans = mid;
            break;
         }
        else if(mid* mid > x)
        {
            end = mid - 1;
        }
        else 
        {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}

double  precisionSqrtRoot(int n, int precision, int intSqrtRoot)
{
    double factor = 1;
    double ans = intSqrtRoot;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j= j+factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int x = 0;
    cin >> x;
    int sqrtRootInteger = sqrtrootIntegerPartOnly(x);
    double srqtRootPrecision = precisionSqrtRoot(x, 2, sqrtRootInteger);
    cout << "Sqrt root with integer " << sqrtRootInteger <<endl;
    cout << "Sqrt root with precision " << srqtRootPrecision <<endl;
}


