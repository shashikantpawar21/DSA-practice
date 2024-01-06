//  why int* instead of pointer data type or smthg like it 
//  It has mainly two reason 
//  - We get to know that address that would be stored is of int data type
// - how many values we have to consider for it 
//  - Helps when we do arithmetic operation of value of these addresses

// ******* Double Pointer Intro ************
//  (int) a = 5;                                
//  (int)* ptr = &a
//  (int*)* doublePtr = &ptr;     // double pointer
//  (int**)* triplePtr = &doublePtr;  // triple pointer

// With above we get logic, when we want to create pointer, we take data type and add * to it 
// This way we can create multi level pointer  

// How this is store 
// var ->   mem (value)           In symbol table 
// a  -> 10 (5)                       // a -> 10
// ptr -> 25(10)                     // ptr -> 25
// doublePtr -> 54(25)               // doublePtr -> 54
// triplePtr -> 35(54)               // triplePtr -> 35

#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;
    int** doublePtr = &ptr;     // double pointer
    int*** triplePtr = &doublePtr;  // triple pointer

    cout << "Ways to print the value of a" << endl;
    cout << "a " << a << endl;
    cout << "*ptr " << *ptr << endl;
    cout << "**doublePtr " << **doublePtr << endl;

    cout << "Ways to print the a Addres" << endl;
    cout << "&a " << &a << endl;
    cout << "ptr " << ptr << endl;
    cout << "*doublePtr " << *doublePtr << endl;

    cout << "Ways to print the ptr value" << endl;
    cout << "ptr " << ptr << endl;
    cout << "*doublePtr " << *doublePtr << endl;

    cout << "Ways to print the ptr address" << endl;
    cout << "&ptr " << &ptr << endl;
    cout << "doublePtr " << doublePtr << endl;

    cout << "Ways to print the doublePtr value" << endl;
    cout << "*doublePtr " << *doublePtr << endl;

    cout << "Ways to print the doublePtr address" << endl;
    cout << "&doublePtr " << &doublePtr << endl;
}
