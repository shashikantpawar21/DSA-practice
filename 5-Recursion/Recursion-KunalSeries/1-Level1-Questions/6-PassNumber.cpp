#include <iostream>
using namespace std;

void print(int n)
{
    if(n ==0)
        return;
    cout << n << " ";
    // print(n--); This will run infinite as it passes the no first and then decrement n; 
    print(--n); // this works fine as no is decremented first and then passed in function call
}

int main() {
    print(5);
}