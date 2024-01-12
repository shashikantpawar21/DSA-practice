//  514 --> return as 5 1 4 

// Divide by 10 51 remainder is 4  
#include<iostream>
using namespace std;

void sayDigit(int n, string arr[])
{
    // base case
    if(n==0)
        return;

    // processing 
    int digit = n % 10;
    n = n / 10;
    
    // recursive call
    sayDigit(n, arr);

    // output printing 
    cout << arr[digit] << " ";
}

int main()
{
    string arr[10] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"};

    sayDigit(467, arr);
}

// first call  - 467   digit 7 and n = 46 no print executed
// second call - 46   digit 6 and n = 4 no print executed 
// third call = 4    digit 4  and n =0 no print executed
//  fourth call =0   --> return contrl  --> 4 printed , 6 printed and then 7 printed 