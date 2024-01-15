#include <iostream>
using namespace std;

int countZero(int n, int count)
{
    if(n/10 ==0)
        return count;
    if(n%10 ==0) 
    {
        return countZero(n / 10, ++count);
    }
    else 
    {
        return countZero(n / 10, count);
    }
}

int main() {
    int zeros = countZero(10303, 0);
    cout << zeros; 
}

// ***** The zeros / count var is returned only from the base condition and 
//  It is preservered as it is as there is no further processing after the function calls 