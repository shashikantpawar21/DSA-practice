// MACROS -> A piece of code in program 
//  that is replaced by the value of the macro

#include<iostream>
using namespace std;

#define PI 3.14     // MACRO 
#define  AREA(r)     (PI*(r)*(r))

int main()
{
    //  area by using macro 
    int area = PI * 5 * 5;

    // area by using variable
    double pi = 3.14;
    int area1 = pi * 5 * 5;

    float r = 1;  
    cout<<"Area of Circle with radius " << r <<": "<< AREA(r);
}

// So if we need value to be used alot in a program 
// we can create a variable or macro as seen above 

// Let us see the difference btn using them 
// A variable we take up same memory to be stored 
// Also, it could be changed in the program 

//  MACRO do not take any memory as it present in the code itself.
//  It get replace in code with its value before compilation.
//  It value cannot be changed in the program. 

// https://www.geeksforgeeks.org/macros-and-its-types-in-c-cpp/