#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n ==0 )
        return 1;

    return n * factorial(n - 1);
}

int main()
{
    int n = 3;
    int ans = factorial(n);
    cout << "factorial of " << n << " is " << ans << endl;
}

// EXPLANATION 
//  n =3 --> factorial(3)      --> 6 --> return as ans 
     //  --> 3 * factorial(2)  --> 3 * (2)
     // -->  2 * factorial(1)  --> 2 * (1) 
    //  -->  1 * factorial(0)  --> 1 * (1) 
    //  --> Base condition met return 1 