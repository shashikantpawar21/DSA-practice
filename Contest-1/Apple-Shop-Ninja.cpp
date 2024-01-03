// Ninja took you to an apple store where there is 'N' number of different apples present in the store and ith apple cost 'ARR[i]' coins. It is pre-decided that you have to buy all of them. You would be given a coupon by Ninja that allows you to buy ‘M’ apples while paying only for 'M - 1' most expensive apples. Thus, you will get the cheapest apple for free. You can use the coupon once only.

// Now, Ninja requested you to tell the minimum total coins required to buy all apples if the coupon is used optimally. It is necessary to use the coupon and have to select ‘M’ apples for using it.

// EXAMPLE:
// Input: 'N' = 5, ‘ARR’ = [5, 2, 4, 1, 3], ‘M’ = 3.
// Output: 12
// Explanation: We will select apples present in indices(1 based) 1, 3, and 5. So, we will get apple at index five for free. Thus, the total coins that should be paid are 5 + 2 + 4 + 1 = 12. 
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= ‘T’ <= 10
// 1 <= ‘M’ <= ‘N’<= 10^4
// 1 <= ‘ARR[i]’ <= 10^9

// Time Limit: 1 sec
// Sample Input 1 :
// 2
// 2 2
// 3 2
// 4 2
// 2 3 1 5 
// Sample Output 1 :
// 3
// 8
// Explanation Of Sample Input 1 :
// In the first test case, we will select both the apples. So, we will get apple at index two as free. Hence, the output is 3.

// In the second test case, we will select apples present at indices 2 and 4. So, we will get apple at index two as free. Hence, the output is 2 + 1 + 5 = 8.


#include<algorithm>
long long appleAndCoupon(int n, int m, vector<int> arr){
    // Write your code here.
    // Initialize a variable 'sum' with 0.
    long long sum = 0;

    // To calculate the sum of 'ARR'.
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    // Sorting the array in increasing order.
    sort(arr.begin(), arr.end());

    // Subtracting the coin required to buy 'N - M'th apple as it will be free.  
    sum -= arr[n - m];

    // Return final answer.
    return sum;
}

int main()
{
    int N = 5;
    int arr = [ 5, 2, 4, 1, 3 ];
    int M = 3;

    long long ans =  appleAndCoupon(N, M, arr);
}