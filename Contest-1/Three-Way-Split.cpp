// Problem statement
// Ninja has an array 'ARR' consisting of 'N' integers. Your primary work is to split it into three parts so that each integer is a component of a single part only. Each part must be a consecutive contiguous subsegment of the original array and can also be empty. So, the sum of each part is denoted as 'S1', 'S2' and 'S3'. Ninja made the problem even harder by declaring a condition that 'S1' must be equal to 'S3' and 'S1' must be the maximum possible amongst all possible ways.

// The sum of the empty subsegment is 0.

// EXAMPLE:
// Input: 'N' = 5, ‘ARR’ = [5, 2, 4, 1, 4].
// Output: 5
// Explanation: We will split the array as [5], [2, 4] and [1, 4]. Thus, the maximum sum of the first part will be 5 and equal to the third part.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= ‘T’ <= 10
// 1 <= ‘N’<= 10^4
// 1 <= ‘ARR[i]’ <= 10^6

// Time Limit: 1 sec
// Sample Input 1 :
// 2
// 2
// 3 3
// 4 
// 2 3 1 5 
// Sample Output 1 :
// 3
// 5
// Explanation Of Sample Input 1 :
// In the first test case, we will split the array as [3], [] and [3]. Thus, the maximum sum of the first part will be 3 and equal to the third part. Hence, the output is 3.

// In the second test case, we will split the array like [2, 3], [1] and [5]. Thus, the maximum sum of the first part will be 5 and equal to the third part. Hence, the output is 5.

#include <bits/stdc++.h>
#include<vector>

using namespace std;
long long threeWaySplit(int n, vector<int> arr){
    // Write your code here.
    //  each integer to one part only 
    // each part must be consecutive or cn be empty
    //  sum of each part is s1, s2 and s3 
    //  s1 and s3 are equal and s1 mus be max 
    
    // start while  with two pointer 
    //  i=0 , j = n-1, s 
    // if i == j return sum 
    int i=0, j = n-1;
    long long s1 =0;
    long long s2=0;
    s1 += arr[i];
    s2 += arr[j];
    long long int sum=0;

   while(i<j)
   {
       if(s1 == s2)
       {
           sum = s1;
           i++;
           j--;
           s1 += arr[i];
           s2 += arr[j];
       }
       else if(s1 > s2)
       {
           j--;
           s2 += arr[j];
       }
       else 
       {
           i++;
           s1 += arr[i];
       }

   }
   return sum;
}