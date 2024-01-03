// 204. Count Primes

// Given an integer n, return the number of prime numbers that are strictly less than n.
// Example 1:

// Input: n = 10
// Output: 4
// Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
// Example 2:

// Input: n = 0
// Output: 0
// Example 3:

// Input: n = 1
// Output: 0

// CONSTRAINT --> 0 <= n <= 5 * 10^6

// Approach 1
// check the way we check prime no 

#include<iostream>
#include<vector>

using namespace std;


bool isPrime(int n)
{
    if(n<=1)
        return 0;

    for (int i = 2; i < n; i++)
    {
        if(n%i ==0)
            return false;
    }
    return true;
}

int countPrimesSOE(int n);
int countPrimes(int n)
{
    if(n <=1)
        return 0;
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if(isPrime(i))
        {
            count++;
        }
    }
     return count;
}

int main()
{
    int n = 15;
    int count = countPrimesSOE(n);

    cout << "Count is " << count << endl;
}

// Here is the TC --> O(n2) 
// As we see the constraint input value is 10^6 
// less than 1 cr 
// As we know today machine can handle load upto 10^8 
//  This above output will give TLE for above 10^6 input value 

//  So we need to optimize above Solution 

// SIEVE OF ERATOSHENES - ALGORITHM 

// 1. Mark every no as prime no in a table 
// 2. check if no is present in table till mark it as false till n 

int countPrimesSOE(int n)
{
    vector<bool> prime(n + 1, true);
    int count = 0;
    prime[0] = prime[1] = false;

    for (int i = 2; i <= n; i++)
    {
        if(prime[i])
        { 
            count++;;
            for (int j = 2*i; j <= n; j=j+i)
            {
                prime[j] = false;
            }
        }
        
    }
    return count;
}