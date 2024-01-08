#include<iostream>
using namespace std;

// Making start var as default argument .. This is optional 
// It not passed by calling function, it will take the default value 
// Note - Default argument should be placed towards end of function argument list
//  Else compiler will throw error  

void print(int arr[], int n, int start=0) 
{
    for (int i = start; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    print(arr, 5);

}