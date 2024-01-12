// INCOMPLETE - WILL BE DOING AFTER SOMETIME

// Your task is to calculate ab mod 1337 where a is a positive integer and b is an extremely large positive integer given in the form of an array.

 

// Example 1:

// Input: a = 2, b = [3]
// Output: 8
// Example 2:

// Input: a = 2, b = [1,0]
// Output: 1024
// Example 3:

// Input: a = 1, b = [4,3,3,8,5,2]
// Output: 1
 

// Constraints:

// 1 <= a <= 231 - 1
// 1 <= b.length <= 2000
// 0 <= b[i] <= 9
// b does not contain leading zeros.

// Approch 
//  get the no from vector 
//  check last digit if true 
//  put a in with mod and 1LL 
//  right shift b value until b end 
#include<iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std;
int getDigit(vector<int> &b)
{
    //get digit from vector to find pow 
    int digit = 0;
    int units = 1;
    for (int i = b.size() - 1; i >= 0; i--)
    {
        digit += b[i] * units;
        units = units * 10;
    }
    return digit;
}
int superPow(int a, vector<int> &b)
{
    int mod = 1337;
    int digit = getDigit(b);
    int ans = 1;
    while(digit)
    {
        if(digit&1)
        {
            ans = (1LL * ans * a) % mod;
        }
        a = (1LL * a * a) % mod;
        digit >>= 1;
    }
    return ans;
}

int main()
{
    int a = 1;
    vector<int> b = {4,3,3,8,5,2};
    int ans = superPow(a, b);
    cout << ans << endl;
    return 0;
}
