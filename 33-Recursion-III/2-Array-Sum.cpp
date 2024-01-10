// input - 1 2 3 4 5 
//  out - 15 

#include<iostream>
using namespace std;

int sum(int* arr, int size)
{
    int ans = 0;
    if(size <= 0)
        return 0;
    ans =  arr[0] + sum(arr + 1, size - 1);
    return ans;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int ans = sum(arr, 5);
    cout << "Sum is " << ans << endl;
}
