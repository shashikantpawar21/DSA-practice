#include <iostream>
#include<math.h>
using namespace std;

// 1- using global variable 
int ans = 0;
void reverse(int n)
{
    if(n ==0)
        return ;
    ans = ans * 10 + n % 10;
     reverse(n / 10);
}

// 2- using digit calculation 

int reverse2(int n, int digits)
{
    if(n%10 ==n)
        return n;
    return (n%10) * pow(10, digits) +  reverse2(n / 10, digits - 1);
}

// no use of global var and how to pass value from base case to above calls 
//  this works if we dont have any processing after recursive calls 
int reverse3(int n, int res)
{
    if(n ==0)
        return res;
    res = res * 10 + n % 10;
    return reverse3(n / 10, res);
}

bool isPalindrome(int n)
{
    int digits =0;
    int numberCopy = n;
    while(numberCopy !=0)
    {
        numberCopy = numberCopy / 10;
        ++digits;
    }
    int rev = reverse2(1234, digits - 1);
    return n == rev;
}
int main() {
    
    reverse(1234);
    int digits =0;
    int numberCopy = 1234;
    while(numberCopy !=0)
    {
        numberCopy = numberCopy / 10;
        ++digits;
    }
    int result = reverse2(1234, digits - 1);
    cout << result << endl;

    bool isPalin = isPalindrome(1234);
    if(isPalin)
    {
        cout << "Number is palindrome";
    }
    else 
    {
        cout << "Number is not palindrome";
    }

    int res = reverse3(1234, 0);
    cout << endl << res;
}