// What is pointers

//  We will see how a variable is stored first
//  int num =5; 
//  so, 5 value is stored in memory somewhere 
//  In computer, memory has addresses, so 5 will also have a address 
//  let say 5 is store at address 120 in memory 
//  Now how num will know the address 120. 

//  They both are mapped in symbol table maintain by compiler
//  nums --> maps to address 120 
//  whenever we read nums 
//  cout << nums 
//  It get the value stored at address 120 which is 5 in our case. 



#include<iostream>
using namespace std;

int main()
{
    int nums = 10;
    // To get address of nums - we use &nums 
    cout << "Address of nums " << nums << " is " << &nums << endl;

    // output - Address of nums 5 is 0x61ff0c (This is hexademical address)

    // Q1 - Why do we need pointers now ?
    // This is use to store the memory address

    int *p = &nums;

    // IMP --> we always initialize a pointer
    // int *p; --> this is very bad practice
    // As this will have a garbage value , that would be any addreess and can have
    // chance of address of memory of outside program also 
    // so, in case updated could potentially update data outside program also so strictly avoid it.
    // if we dont know the address, initialize pointer will null pointer
    //  both *p and nums point to address 120 in memory 
    //  if we increment --> *p++ or nums++ it will increment 5 to 6

    // int *p = &nums;--> how to read this pointer syntax
    // as there is * to p , it is pointer variable 
    //  p is a pointer to INT datatype i.e datatype mentioned

    //  This var should now store address of int variable only like nums in above case 
    //  char ch ='c'
    // char *p = &ch
    // p is pointer to data type storing address of ch variable 'c' 
    
    // To print the value at point p
    cout << "Address  at pointer p is " << p << endl;
    cout << "Value at pointer p is " << *p << endl;
    // *ptr and nums is same - it returns value

    double d = 4.2;
    double *dptr = &d;
    cout << "Address  at pointer dptr is " << dptr << endl;
    cout << "Value at pointer dptr is " << *dptr << endl;

    //  checking the size of pointers

    cout << "size of num - " << sizeof(nums) << " bytes" << endl;
    cout << "size of value of pointer of nums " << sizeof(*p) << " bytes" << endl;
    cout << "size of pointer of nums " << sizeof(p) << " bytes" << endl;

    // Size of double value pointer 
    cout << "size of d " << sizeof(d) << " bytes" << endl;
    cout << "size of value of pointer of d " << sizeof(*dptr) << " bytes" << endl;
    cout << "size of pointer of d " << sizeof(dptr) <<  " bytes" << endl;

    // We can size of pointer p and dptr is 4 bytes as irrespective of type int or double 
    // their address will of same length that i. 4 bytes in this case
    
    
}