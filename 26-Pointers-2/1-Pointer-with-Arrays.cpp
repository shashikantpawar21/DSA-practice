#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Address of first memory block " << arr << endl;
    cout << "Address of first memory block " << &arr[0] << endl; // same as above
    cout << "Value of first memory block " << arr[0] << endl;

    cout << "Value at first memory block " << *arr << endl; // gives value
    cout << "value arithmetic " << *arr + 1 << endl;
    cout << "value at next memory block " << *(arr + 1) << endl;

    // Array access logic 
    // arr[2] -->  * (arr + 2)
    // say arr first loc -400 
    //       --> *( arr +2) --> *(400 + 8)
    //  --> * (408) --> give value at location 408
    //  *p = &a[0] --> pointer to 0th location 
    // p++ --> goes to next element as it increment by count of datatype

    cout << "arr[2] same as *(arr+2) --> " << arr[2] << " -  " << *(arr + 2) << endl;

    // ***** FORMULA **************
    // arr[i]  == *(arr + i)
    // i[arr]  == *(i + arr)

    //  At last, as both values are added as memory address and then its content is returned
    cout << "Value at 2 location with 2[arr] syntax is " << 2[arr] << endl;

    // ******** Diifference btn pointer and array ***********

    int temp[10] = {1, 2};
    cout << "Size for arrays :" << endl;
    cout << "Size of temp " << sizeof(temp) << endl;
    cout << "Size of temp 1st location " << sizeof(*temp) << endl;
    cout << "Size of temp 1st location address " << sizeof(&temp) << endl;

    int *ptr = &temp[0];
    cout << "Size for pointer  :" << endl;
    cout << "Size of ptr " << sizeof(ptr) << endl;
    cout << "Size of temp 1st location " << sizeof(*ptr) << endl;
    cout << "Size of temp 1st location address " << sizeof(&ptr) << endl;
    
    // 1- Array size return length of array and pointer size return size of first element

    int a[10] = {1, 2, 5, 7};
    cout << "&a[0] "  << &a[0] << endl;
    cout << "&a "  << &a << endl;
    cout << "a " << a << endl;

    int *p = &a[0];
    cout << "p "  << p << endl;
    cout << "&p "  << &p << endl;
    cout << "*p " << *p << endl;

    // 2- &a[0]  and &p both are separated location 
    //  &p show the address of p 

    // 3- Symbol table cannot be changed
    int arr1[10];

    // ERROR
    // arr1 = arr1 + 1; -- not allowed as entry is there in  system table

    int *ptr1 = &arr1[0];
    cout << "before ptr1 " << ptr1 << endl;
    ptr1 = ptr1 + 1;
    cout << "after ptr1 " << ptr1 << endl;
    // This will give the next element in arr
    
}