#include<bits/stdc++.h>
using namespace std;

int N = 1000000;
vector<bool> sieve(N + 1, true);

void createPrimeSieve()
{
    for (int i = 2; i * i <= N;i++)
    {
        if(sieve[i])
        {
            for (int j = i * i; j <= N; j= j+i)
            {
                sieve[j] = false;
            }
        }
    }
}

vector<int> generatePrime(int n)
{
    vector<int> primeNo;
    for (int i = 2; i <= n; i++)
    {
        if(sieve[i])
        {
            int temp = sieve[i];
            primeNo.push_back(i);
        }
    }
    return primeNo;
}

int main()
{
    createPrimeSieve();
    int t = 1; // no of inputs 

    while(t--)
    {
        int l = 110;
        int r = 130;

        // step 1: generate all primes till sqrt (r)
        vector<int> primes = generatePrime(sqrt(r));
        
        //  step 2: create dummy array of size r-l +1 and make everyone 1
        int dummy[r - l + 1];
        for (int i = 0; i < r - l + 1; i++)
        {
            dummy[i] = 1;
        }

        //  step 3, for all primes mark all multiple as false 
        for(auto pr: primes)
        {
            int firstMultiple = (l / pr) * pr;
            if(firstMultiple < l)
                firstMultiple += pr;

            for (int j = max(firstMultiple, pr * pr); j <= r; j += pr)
            {
                dummy[j - l] = 0;
                }
        }

        for (int i = l; i <= r; i++)
        {
            if(dummy[i-l] ==1)
                cout << i << " ";
        }
        cout << endl;
    }
}

//    2