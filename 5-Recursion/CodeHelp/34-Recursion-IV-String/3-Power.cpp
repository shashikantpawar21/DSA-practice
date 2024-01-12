// a=3 b =3 
//  a^b = result 

// result --> a * a * a 
#include<iostream>
using namespace std;


//  This will run b times not much optmized 
int power(int a, int b)
{
    if(b==0)
    {
        return 1;
    }
    return a * power(a, --b);
}

// Optimized sol 
//  a^b =   a^ (b/2) * a(b/2) - if a is even 
//      =  a* a^ (b/2) * a(b/2) 

int powerOptimized(int a, int b)
{
    if(b==0)
    {
        return 1;
    }
    if(b==1)
    {
        return a;
    }

    int ans = power(a, b / 2);
    if(a&1)
    {
        ans = ans * ans * a;
    }
    else 
    {
        ans = ans * ans;
    }
    return ans;
 }


int main()
{
    int a = 2, b = 10;
    // int ans = power(a, b);
    int ans = powerOptimized(a, b);
    cout << "power is " << ans << endl;
}

