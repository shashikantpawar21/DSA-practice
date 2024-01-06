#include<iostream>
using namespace std;

void pointerFun(int *p)
{
    cout << "value at address of pointer" << endl;
    cout << *p << endl;
}
void updatePointerAddress(int *p)
{
    p = p + 1;
    cout << "update pointer address in function " << p << endl;
}
void updatePointerValue(int *p)
{
    cout << "Update pointer value" << endl;
    *p = *p + 1;
}

int getSum(int arr[], int n)
{
    cout << "size of arr " << sizeof(arr) << endl;
    // This return 4 and not 40 total size of array 
    // becoz in function only pointer is passed instead of whole array 
    //  int arr[] == int *arr both are same 

    // This benefit in passing partial array too 
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum; 
}

int main()
{
    int a = 5;
    int *p = &a;

    pointerFun(p);

    cout << "Before pointer address update " << p << endl;
    updatePointerAddress(p);
    cout << "After pointer address update " << p << endl;
    // Here because of function pass by value, 
    //  this function create a copy of pointer 
    //  so, if we udpate the address in function, it update 
    // local function pointer value and this p value in main function remain unchanged

    cout << "Before pointer content  update " << *p << endl;
    updatePointerValue(p);
    cout << "After pointer address update " << *p << endl;
    // This update the value of value in function 
    // because even function local pointer variable contain address of a variable 
    // so , when that is updated it displayed in main function too

    // ******* PASSING ARRAY IN FUNCTION ******************

    int arr[6] = {1, 2, 3, 4, 5, 6};
    int sum = getSum(arr, 6);

    cout << "Whole array sum is " << sum << endl;

    int sum1 = getSum(arr+3, 3);

    cout << "Part of array sum is " << sum1 << endl;
}