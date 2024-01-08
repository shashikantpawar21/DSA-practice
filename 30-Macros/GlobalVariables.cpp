// Accessible throughout the function 

#include<iostream>
using namespace std;

int score = 15;  //Global variable 
void a(int& i)  // i passed as ref var
{
    cout << "i inside a " << i << endl;
    cout << "score(global var) inside a " << score<< endl;
    score++;
}

void b(int& i) // i passed as ref var
{
    cout << "i inside b " << i <<  endl;
    cout << "score(global var) inside b " << score << endl;
}

int main()
{
    int i =5;

    {
        int i =2;
        cout << "i inside scope of main " << i << endl;
    }
    cout << "i outside scope of main " << i << endl;
    a(i);
    b(i);
}

// Using Global variable is considered as BAD practice 
//  As it value can be changed anywhere in the function 

// Incase of sharing variable among function, use reference variables 

