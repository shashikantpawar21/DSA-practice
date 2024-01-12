#include <iostream>
using namespace std;

int main()
{
    // pointer to int is created, and pointing to some garbage value
    // int *ptr;  bad practice to be avoided

    int *ptr = 0; // good practice - start with zero is value is not known

    cout << ptr << endl;  // this print 0;
    // cout << *ptr << endl; 
    // it print blanks and stop execution of program , below code doesnot run if above line is uncommented
    // it other compiler version, this can give segmentation fault error for accessing memory at 0 address 
    // as it does not exist
    cout << "Print" << endl;

    // ****** TYPES OF INITIALISATION ************* 
    int a = 21;
    int *aptr = &a;

    int *aptr1 = 0;
    aptr1 = &a;

    cout << "Address at aptr " <<  aptr << endl;
    cout << "Value at aptr " << *aptr << endl;

    cout << "Address at aptr1 " <<  aptr1 << endl;
    cout << "Value at aptr1 " << *aptr1 << endl;

    // the above two things will give same data 
    // it is just different type of initialisation 

     // ******  VALUE ACCESS *************
    int num = 5;
    int num1 = num;
    num1++;
    cout << "value of num " << num << endl;
    cout << "value of num1 " << num1 << endl;
    //  no changed to the originial value num, it still stays 5.

    int *numPtr = &num;
    int num2 = *numPtr;
    num2++;
    cout << "value of num " << num << endl;
    cout << "value of *numPtr " << *numPtr << endl;
    cout << "value of num2 " << num2 << endl;
    //  no changed to the originial value num, it still stays 5.
   
    cout << "numPtr " << numPtr<< endl;

    // EDGE case thing 
    // *numPtr++; //Tried this , this does not work 
    // as both * and ++ have high precedence, It increment numPtr first 
    // i.e the memory location is increment first and then other location 
    //  get dereference as output by * operator .

    //  to avoid this and only increment value at ptr we use below parentheses thing 
    (*numPtr)++;
    cout << "After *numPtr value change" << endl;
    cout << "value of num " << num << endl;
    cout << "value of *numPtr " << *numPtr << endl;
    //  This update the value at num also 

    // ******  COPY POINTER *************
    int *q = numPtr;
    cout << "Copy pointer case" << endl;
    cout  << "Address of q and numPtr " << q << " - " << numPtr << endl;
    cout << "value of *q  and *numPtr " << *q << " - " << *numPtr << endl;
    //  This way we can copy pointer now all point to num variable value 

    // ******   POINTER ARITHMETIC  *************
      cout << "POINTER ARITHMETIC case" << endl;
    cout << "q address " << q << endl;
    q = q + 1;
    cout << "q address after increment " << q << endl;

    // This is imp ..Let say q address is 100, 
    // q+1 --> will be 104 as it will go to the next int location 
    // if it is double pointer it will add 8 bytes and go to 108 next float location 
    //  same for subtract it will either go 96(int case) and 92(float case)

    // Homework reading -https://www.codingninjas.com/studio/guided-paths/pointers
    // Done 
}