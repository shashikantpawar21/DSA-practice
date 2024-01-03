//  Why imp to understand maths for DSA 
//  so we write efficient code and reduce T.C
//  also to avoid TLE cases 

// 1. Prime No 
// Definition -> 
//  By definition, a prime number is a natural number greater than 1 that is not a product of two smaller natural numbers. Since 1 only has one positive divisor (itself), it does not meet the requirement of having exactly two distinct positive divisors, which primes must have. The smallest prime number is 2, as it is divisible only by 1 and 2.
//  why 0 is not a prime no 
// a prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself. Since 0 does not meet the criteria of being a natural number greater than 1,

// Main logic we check (2 to n-1 is divisble by no)
// then it is not a prime else it is prime 
//  if(n%i==0) return false in loop from 2 to n-1
//  base case if n <=1 then it is not prime no 

// Code logic 
// bool isPrime(int n)
// {
//     if(n <=1)
//         return false;
//     for (int i = 2; i < n; i++)
//     {
//         if(n%i==0)
//             return false;
//     }
//     return true;
// }

//  Time Complexity - O(n)
//  Can we optimize this case, we will see that in 2nd code file of Prime count 