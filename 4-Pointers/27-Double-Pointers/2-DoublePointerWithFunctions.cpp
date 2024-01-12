
#include<iostream>
using namespace std;

void updateAddress(int **doublePtr)
{
    doublePtr = doublePtr + 1;
}
void updateAddressValue(int **doublePtr)
{
    *doublePtr = *doublePtr + 1;
}
void updateAddressAddressValue(int **doublePtr)
{
    **doublePtr = **doublePtr + 1;
}

void printValues(int i, int *ptr, int **doublePtr)
{
    cout << "i " << i << endl;
    cout << "*ptr " << *ptr << endl;
    cout << "**doublePtr " << **doublePtr << endl;

    cout << "&i " << &i << endl;
    cout << "&ptr " << &ptr << endl;
    cout << "&doublePtr " << &doublePtr << endl;
}


int main()
{
    int a = 10;
    int *ptr = &a;
    int** doublePtr = &ptr;     // double pointer

    // cout << "before updateAddress " << endl;
    // printValues(a, ptr, doublePtr);
    // updateAddress(doublePtr);
    //  cout << "after updateAddress " << endl;
    // printValues(a, ptr, doublePtr);
    // //  We see no change with address updating 
    // //  As local copy of pointer is created and value of it is changed 

    // cout << "before updateAddressValue " << endl;
    // printValues(a, ptr, doublePtr);
    // updateAddressValue(doublePtr);
    //  cout << "after updateAddressValue " << endl;
    // printValues(a, ptr, doublePtr);

    // // Here as * single star is used , it changes the value at it address content 
    // //  so single pointre value is changed to smthg else 
    
    cout << "before updateAddressAddressValue " << endl;
    printValues(a, ptr, doublePtr);
    updateAddressAddressValue(doublePtr);
     cout << "after updateAddressAddressValue " << endl;
    printValues(a, ptr, doublePtr);

    // Here we can it as ** is used it changes the content to below two level of pointer 
    //  as it is point to content of a it increment a value 
    //  address are not changed here 
    //  To understand this properly we comment other function and run only one function 


}