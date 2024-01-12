#include<iostream>
using namespace std; 

//  I/p --> 5 
//  o/p --> 5 4 3 2 1 
//  base case return on 0
//  recursive print value and then call fn(n-1 )

void printCount(int n )
{
    if(n ==0)
        return;
    cout << n << " ";
    printCount(n - 1);
}

int main()
{
    int n = 10;
    printCount(n);
    cout << endl;
}