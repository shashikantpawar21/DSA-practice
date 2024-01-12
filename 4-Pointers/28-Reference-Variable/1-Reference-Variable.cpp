// What is reference variable
//  variable pointing to another var memory location is called refernce variable 
//  layman ex --> a boy is called tom in school and tommy in home but it is same person
#include<iostream>
using namespace std;

void passByValue(int n)
{
    n++; 
}

void passByReference(int& n)
{
    n++; 
}

int &update(int m);
int main()
{
    int i =5;
    int &j = i; // j is reference var pointing to mem same as i 
    i++;
    j++;
   
    cout << "j " << j << endl;
    cout << "mem locaton of i and j(they are same now) " << &i << " " << &j << endl;

    // *********** Need of Reference Variable ********************
    // It is needed to pass the same variable to another function
    int n = 2;
    cout << "before pass by value " << n << endl;
    passByValue(n);
    cout << "after pass by value " << n << endl;
    cout << "before pass by reference " << n << endl;
    passByReference(n);
    cout << "after pass by reference " << n << endl;

    // Pass by reference changes the value as it is pointing to the same memory location

    int ans = update(10);
    cout << "ans " << ans <<endl;
}

// ******** Return by Ref or Pointer 
// We can return reference variable as output also 
// But this consider as BAD practice 
// as local variable ans will loose the value after function execution 
int& update(int m)
{
    int a = 10;
    int &ans = a;
    return ans;

}

int* updatePointer(int m)
{
    int* ptr = &m;
    return ptr;
}