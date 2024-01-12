// We discussed earlier that below is bad practice

// int n;
// cin << n;
// int arr[n];

//  This is because this array is getting stored on stack memory 
//  stack memory is limited memory allocated to program when it starts running 
//  If we get the size at runtime from the user and it is bigger than size to be allocated in stack 
//  The program will crash. So, it is said to avoid such declaration

//  One way to solve this is take good chunk of fixed size array
//  arr[1000]
//  So, the compiler knows at compile time how much memory is needed and allocate stack memory accordingly 

//  ******** DYNAMIC MEMORY ALLOCATION *******************

// int n ; char ch; int arr[3] - This all are allocated on stack so far 
//  This is called STATIC MEMORY ALLOCATION

// if we want to allocate memory on heap, we need to use new keyword
//  new char;
//  This reserver 1 byte stack on heap for char
//  But we cannot assignment declare name to heap memory
//  So to access this we need to use pointer
//  char* ch = new char;

//  This is DYNAMIC MEMORY ALLOCATION 

//  The above declaration takes 9 bytes total 
//  1byte on heap for char and 8bytes on stack for char pointer 


#include<iostream>
using namespace std;

int getSum(int* arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int n = 7; 

    //  variable size array
    int *arr = new int[n];

    for (int i = 0; i < n;i++)
    {
        arr[i] = i;
    }
    int sum = getSum(arr, n );
    cout << "Sum is " << sum << endl;
}

// int *arr = new int[n];
// This is dynamic memory allocation of array
// new int[n] --> let say n is 4, 
//  Then, this will reserve 4*4 -> 16 bytes on Heap memory 
//  int *arr --> this will store 8 bytes memory on stack for pointer 

// ********* Difference Between Stack and Heap memory ***********************

//  while(true) int a = 2; / Allocates on stack and deleted automatically once come out of scope

//  while(true)
// {
//     int *ptr = new arr[10];
// }
// This can crash the program and it keep on creating memory on heap and do not delete it 

// Stack memory is managed automatically by the program's execution flow, 
// while heap memory requires manual management to avoid memory leaks.

//  To delete the memory on heap we use 
//  Manually release the heap memory we use below 

//  delete ch;  --> normal types
//  delete []arr; ==> array type 